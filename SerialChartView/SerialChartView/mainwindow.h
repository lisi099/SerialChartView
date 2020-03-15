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
    void addLines();
    void removeSeries();
    void connectMarkers();
    void disconnectMarkers();
    void handleMarkerClicked();
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

    void on_pushButton_set_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *m_timer_;
    QTimer *m_timer1_;
    QStringList init_usart_list_;
    QSerialPort *serialport_;

    QChart chart_;
    QList<QLineSeries *> m_series_;
    QValueAxis m_axis_;
    qreal m_x_;

    quint16 number_points_show_;
    qint16 y_offset_;
    qint16 y_range_;
    qint32 mouse_x_, mouse_y_;

    DataProcess data_process_;
};

#endif // MAINWINDOW_H
