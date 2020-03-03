#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox_baut->setCurrentIndex(1);
    ui->comboBox_number->setCurrentIndex(1);
    ui->comboBox_channel->setCurrentIndex(0);
    number_points_show = ui->comboBox_number->currentText().toInt();

    this->grabKeyboard();
    //------------------
    range = 100;
    offset = 0;
    range_min = -range;
    range_max =  range;

    //------------------

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort serial1;
        serial1.setPort(info);
        if(serial1.open(QIODevice::ReadWrite))
        {
            init_usart_list.append(info.portName());
            ui->comboBox_name->addItem(info.portName());
            serial1.close();
        }
    }

    //-----------------------------------------------------------------
    my_serialport= new QSerialPort();
    connect(my_serialport, SIGNAL(readyRead()), this, SLOT(Receieve_Bytes()));

    m_timer= new QTimer;
    m_timer->start(100);
    connect(m_timer, SIGNAL(timeout()), this, SLOT(TimerTimeout()));

    m_timer1= new QTimer;
    m_timer1->start(100);
    connect(m_timer1, SIGNAL(timeout()), this, SLOT(TimerTimeout1()));
    //-----------------------------------------------------------------
    m_x=0;
    m_y=0;
    chart.setTheme(QChart::ChartThemeDark);
//    chart.setTitle(QStringLiteral("波形"));
//    chart.setTitleFont(QFont("微软雅黑",10));
    QPen green(Qt::yellow);
    green.setWidth(2);
    m_series.setName("Channel-1");
    m_series.setPen(green);
    m_series.append(m_x, m_y);

    chart.addSeries(&m_series);
    chart.createDefaultAxes();
    chart.setAxisX(&m_axis,&m_series);
    m_axis.setTickCount(10);
    chart.axisX()->setRange(0,number_points_show);
    chart.axisY()->setRange(range_min, range_max);
    for(int i=0; i<number_points_show-4; i++){
        double y = sin(i)*100;
        m_series.append(i, y);
        m_x = i;
    }
    QGroupBox *groupBox = new QGroupBox(QStringLiteral("显示"));
    QGridLayout *layout_grid  = new QGridLayout(groupBox);
    QChartView *chartview = new QChartView(&chart);
    layout_grid->addWidget(chartview);
    chartview->setRenderHint(QPainter::Antialiasing);
    ui->horizontalLayout->addWidget(groupBox);


}

void MainWindow::TimerTimeout1()
{
    static quint16 data = 0;
    quint8 send_data[6];
    QByteArray senddata;

    if(ui->pushButton_open->text()== QStringLiteral("关闭串口")){
        data++;
        send_data[0] = 0x55;
        send_data[1] = 0xaa;
        send_data[2] = (quint8)data;
        send_data[3] = (quint8)(data >>8);
        quint16 crc = data_process.Checksum_u16(&send_data[2], 2);
        send_data[4] = (quint8)crc;
        send_data[5] = (quint8)(crc >>8);

        for(quint8 i=0; i<6; i++){
            senddata.append(send_data[i]);
//            qDebug() << "--" <<send_data[i];
        }
        my_serialport->write(senddata);
    }
}

void MainWindow::TimerTimeout()
{
    m_x += 1.0;
    m_y =sin(m_x)*100;
    m_series.append(m_x, m_y);
    qreal dwidth= chart.plotArea().width()/(number_points_show); //一次滚动多少宽度
    chart.scroll(dwidth, 0);

    QStringList usart_list;
    if(ui->pushButton_open->text()== QStringLiteral("打开串口")){
        foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
        {
            QSerialPort serial1;
            serial1.setPort(info);
            if(serial1.open(QIODevice::ReadWrite))
            {
                usart_list.append(info.portName());
                serial1.close();
            }
        }
        if(usart_list != init_usart_list){
            ui->plainTextEdit->appendPlainText(QStringLiteral("串口更新"));
            ui->comboBox_name->clear();
            init_usart_list.clear();
            for(int i=0; i<usart_list.size(); i++){
                ui->comboBox_name->addItem(usart_list.at(i));
                init_usart_list.append(usart_list.at(i));
            }
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_open_clicked()
{
    if(ui->pushButton_open->text() == QStringLiteral("打开串口")){
        my_serialport->setPortName(ui->comboBox_name->currentText());
        my_serialport->setBaudRate(ui->comboBox_baut->currentText().toInt());
        my_serialport->setDataBits(QSerialPort::Data8);
        my_serialport->setParity(QSerialPort::NoParity);
        my_serialport->setStopBits(QSerialPort::OneStop);
        my_serialport->setFlowControl(QSerialPort::NoFlowControl);
        if(my_serialport->open(QIODevice::ReadWrite)){
            ui->comboBox_name->setDisabled(1);
            ui->comboBox_baut->setDisabled(1);
            ui->comboBox_channel->setDisabled(1);
            ui->comboBox_number->setDisabled(1);

            ui->pushButton_open->setText(QStringLiteral("关闭串口"));
            ui->plainTextEdit->appendPlainText(QStringLiteral("串口")+my_serialport->portName()+QStringLiteral("已连接"));
        }
        else{
            QMessageBox::critical(this, tr("Error"), my_serialport->errorString());
        }
    }
    else{
        if (my_serialport->isOpen()){
            my_serialport->close();
            ui->plainTextEdit->appendPlainText(QStringLiteral("串口")+my_serialport->portName()+QStringLiteral("已关闭"));
        }
        ui->pushButton_open->setText(QStringLiteral("打开串口"));
        ui->comboBox_name->setDisabled(0);
        ui->comboBox_baut->setDisabled(0);
        ui->comboBox_channel->setDisabled(0);
        ui->comboBox_number->setDisabled(0);
    }
}

void MainWindow::Receieve_Bytes(void)
{
    QByteArray temp = my_serialport->readAll();
    if(data_process.data_process(temp)){
        qDebug() << "a package" << data_process.data_receive[0];
    }
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->plainTextEdit->clear();
}

void MainWindow::on_comboBox_number_currentTextChanged(const QString &arg1)
{
    number_points_show = arg1.toInt();
}

void MainWindow::wheelEvent(QWheelEvent*event){

//    qDebug() << event->delta();
    if(event->delta()>0){
        range += event->delta()/12;
        if(range >30000){
            range =30000;
        }
    }else{
        range += event->delta()/12;
        if(range <1){
            range =1;
        }
    }
    range_max = range + offset;
    range_min = -range + offset;
    chart.axisY()->setRange(range_min, range_max);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
//    qDebug() << "presss" << event->key();
//    if(event->key() == Qt::Key_Up)
//    {
//        offset -= 20;
//    }
//    else if(event->key() == Qt::Key_Down)
//    {
//        offset += 20;
//    }
//    range_max = range + offset;
//    range_min = -range + offset;
//    chart.axisY()->setRange(range_min, range_max);
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    grabMouse();
    mouse_x = event->x();
    mouse_y = event->y();
//    qDebug() << event->x() << event->y();

}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    releaseMouse();
//    qDebug() << event->x() << event->y();
    qint32 dx = event->x() - mouse_x;
    qint32 dy = event->y() - mouse_y;

    if(abs(dx) <150){
        if(abs(dy) >10){
            offset += 2* range * dy /chart.plotArea().height();
            range_max = range + offset;
            range_min = -range + offset;
            chart.axisY()->setRange(range_min, range_max);
        }

    }
}

void MainWindow::on_comboBox_channel_currentIndexChanged(const QString &arg1)
{

}
