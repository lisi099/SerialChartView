#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QtSerialPort/QtSerialPort>
#include <QMessageBox>
#include <QFileDialog>

#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QDoubleSpinBox>
#include <QGridLayout>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QValueAxis>
#include "dataprocess.h"

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void TimerTimeout1();
    void TimerTimeout();
    void on_pushButton_open_clicked();
    void Receieve_Bytes(void);
    void on_pushButton_clear_clicked();

    void on_comboBox_number_currentTextChanged(const QString &arg1);
    void wheelEvent(QWheelEvent*event);
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    void on_comboBox_channel_currentIndexChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QTimer *m_timer;
    QTimer *m_timer1;
    QStringList init_usart_list;
    QSerialPort *my_serialport;

    QChart chart;
    QLineSeries m_series;
    QValueAxis m_axis;
    qreal m_x;
    qreal m_y;

    quint16 number_points_show;
    qint16 range_max, range_min;
    qint16 offset;
    qint16 range;
    qint32 mouse_x, mouse_y;

    DataProcess data_process;
};

#endif // MAINWINDOW_H
