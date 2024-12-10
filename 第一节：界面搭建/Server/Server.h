#pragma once
#pragma execution_character_set("utf-8")
#include <QtWidgets/QMainWindow>
#include "ui_Server.h"
#include <QApplication>
#include <QMainWindow>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QMenu>
#include <QAction>
#include <QMessageBox>

class Server : public QMainWindow
{
    Q_OBJECT

public:
    Server(QWidget *parent = nullptr);
    ~Server();

private:
    Ui::ServerClass ui;

private:
    void Initialize_Interface(); //��ʼ������
    void Set_Right_click_options();//�����ṹ���������Ҽ�ѡ��

private slots:
    void showContextMenu(const QPoint& pos);


};
