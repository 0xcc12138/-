/********************************************************************************
** Form generated from reading UI file 'Server.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServerClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QLabel *label;
    QTableWidget *tableWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ServerClass)
    {
        if (ServerClass->objectName().isEmpty())
            ServerClass->setObjectName(QString::fromUtf8("ServerClass"));
        ServerClass->resize(600, 400);
        centralWidget = new QWidget(ServerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 0, 3, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 2, 1, 1);

        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setRowCount(1);
        tableWidget->setColumnCount(5);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(tableWidget, 2, 0, 1, 4);

        ServerClass->setCentralWidget(centralWidget);
        toolBar = new QToolBar(ServerClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        ServerClass->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addSeparator();

        retranslateUi(ServerClass);

        QMetaObject::connectSlotsByName(ServerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ServerClass)
    {
        ServerClass->setWindowTitle(QApplication::translate("ServerClass", "Server", nullptr));
        pushButton_3->setText(QApplication::translate("ServerClass", "\345\261\217\345\271\225\347\233\221\346\216\247", nullptr));
        pushButton_2->setText(QApplication::translate("ServerClass", "\351\224\256\347\233\230\347\233\221\346\216\247", nullptr));
        pushButton->setText(QApplication::translate("ServerClass", "\346\226\207\344\273\266\347\233\221\346\216\247", nullptr));
        pushButton_4->setText(QApplication::translate("ServerClass", "\345\221\275\344\273\244\350\241\214\347\233\221\346\216\247", nullptr));
        label->setText(QApplication::translate("ServerClass", "\346\216\247\345\210\266\351\200\211\346\213\251", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        toolBar->setWindowTitle(QApplication::translate("ServerClass", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerClass: public Ui_ServerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H
