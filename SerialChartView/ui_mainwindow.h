/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_bout;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit_s2;
    QLineEdit *lineEdit_s4;
    QLineEdit *lineEdit_s1;
    QLineEdit *lineEdit_s3;
    QLineEdit *lineEdit_c4;
    QLineEdit *lineEdit_c3;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QLineEdit *lineEdit_c2;
    QLabel *label_8;
    QLineEdit *lineEdit_c1;
    QPushButton *pushButton_set;
    QComboBox *comboBox_channel;
    QComboBox *comboBox_number;
    QLabel *label_3;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_clear;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton_open;
    QComboBox *comboBox_baut;
    QComboBox *comboBox_name;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1052, 514);
        action_bout = new QAction(MainWindow);
        action_bout->setObjectName(QStringLiteral("action_bout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1052, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        gridLayout_4 = new QGridLayout(dockWidgetContents_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_4 = new QGroupBox(dockWidgetContents_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setMaximumSize(QSize(200, 16777215));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lineEdit_s2 = new QLineEdit(groupBox_4);
        lineEdit_s2->setObjectName(QStringLiteral("lineEdit_s2"));

        gridLayout_3->addWidget(lineEdit_s2, 4, 2, 1, 1);

        lineEdit_s4 = new QLineEdit(groupBox_4);
        lineEdit_s4->setObjectName(QStringLiteral("lineEdit_s4"));

        gridLayout_3->addWidget(lineEdit_s4, 6, 2, 1, 1);

        lineEdit_s1 = new QLineEdit(groupBox_4);
        lineEdit_s1->setObjectName(QStringLiteral("lineEdit_s1"));

        gridLayout_3->addWidget(lineEdit_s1, 3, 2, 1, 1);

        lineEdit_s3 = new QLineEdit(groupBox_4);
        lineEdit_s3->setObjectName(QStringLiteral("lineEdit_s3"));

        gridLayout_3->addWidget(lineEdit_s3, 5, 2, 1, 1);

        lineEdit_c4 = new QLineEdit(groupBox_4);
        lineEdit_c4->setObjectName(QStringLiteral("lineEdit_c4"));

        gridLayout_3->addWidget(lineEdit_c4, 6, 1, 1, 1);

        lineEdit_c3 = new QLineEdit(groupBox_4);
        lineEdit_c3->setObjectName(QStringLiteral("lineEdit_c3"));

        gridLayout_3->addWidget(lineEdit_c3, 5, 1, 1, 1);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 3, 0, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 5, 0, 1, 1);

        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 4, 0, 1, 1);

        lineEdit_c2 = new QLineEdit(groupBox_4);
        lineEdit_c2->setObjectName(QStringLiteral("lineEdit_c2"));

        gridLayout_3->addWidget(lineEdit_c2, 4, 1, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 6, 0, 1, 1);

        lineEdit_c1 = new QLineEdit(groupBox_4);
        lineEdit_c1->setObjectName(QStringLiteral("lineEdit_c1"));

        gridLayout_3->addWidget(lineEdit_c1, 3, 1, 1, 1);

        pushButton_set = new QPushButton(groupBox_4);
        pushButton_set->setObjectName(QStringLiteral("pushButton_set"));
        pushButton_set->setMinimumSize(QSize(0, 0));
        pushButton_set->setMaximumSize(QSize(16777215, 100));

        gridLayout_3->addWidget(pushButton_set, 3, 3, 4, 1);

        comboBox_channel = new QComboBox(groupBox_4);
        comboBox_channel->setObjectName(QStringLiteral("comboBox_channel"));

        gridLayout_3->addWidget(comboBox_channel, 0, 2, 1, 2);

        comboBox_number = new QComboBox(groupBox_4);
        comboBox_number->setObjectName(QStringLiteral("comboBox_number"));

        gridLayout_3->addWidget(comboBox_number, 2, 2, 1, 2);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 2);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 2);


        gridLayout_4->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(dockWidgetContents_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(200, 16777215));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        gridLayout_2->addWidget(plainTextEdit, 0, 0, 1, 1);

        pushButton_clear = new QPushButton(groupBox_2);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));

        gridLayout_2->addWidget(pushButton_clear, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(dockWidgetContents_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(200, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        pushButton_open = new QPushButton(groupBox);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));

        gridLayout->addWidget(pushButton_open, 5, 0, 1, 3);

        comboBox_baut = new QComboBox(groupBox);
        comboBox_baut->setObjectName(QStringLiteral("comboBox_baut"));

        gridLayout->addWidget(comboBox_baut, 4, 1, 1, 2);

        comboBox_name = new QComboBox(groupBox);
        comboBox_name->setObjectName(QStringLiteral("comboBox_name"));

        gridLayout->addWidget(comboBox_name, 2, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        dockWidget_2->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget_2);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_bout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_bout->setText(QApplication::translate("MainWindow", "&About", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "&\345\205\263\344\272\216", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\350\256\276\347\275\256", Q_NULLPTR));
        lineEdit_s2->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lineEdit_s4->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lineEdit_s1->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lineEdit_s3->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lineEdit_c4->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        lineEdit_c3->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Channel1", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Channel3", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Channel2", Q_NULLPTR));
        lineEdit_c2->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Channel4", Q_NULLPTR));
        lineEdit_c1->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_set->setText(QApplication::translate("MainWindow", "Set", Q_NULLPTR));
        comboBox_channel->clear();
        comboBox_channel->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
        );
        comboBox_number->clear();
        comboBox_number->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "100", Q_NULLPTR)
         << QApplication::translate("MainWindow", "200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "400", Q_NULLPTR)
         << QApplication::translate("MainWindow", "800", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1600", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\351\225\277\345\272\246", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\347\202\271\346\225\260", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\344\277\241\346\201\257", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267", Q_NULLPTR));
        pushButton_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        comboBox_baut->clear();
        comboBox_baut->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "57600", Q_NULLPTR)
         << QApplication::translate("MainWindow", "115200", Q_NULLPTR)
         << QApplication::translate("MainWindow", "256000", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
