#include "Server_ui.h"
#include <QMessageBox>
#include <QMenu>
#include "ZeroServer.h"
#pragma execution_character_set("utf-8")

class m_Window : public QMainWindow {
    Q_OBJECT

public:
    explicit m_Window(QWidget* parent = nullptr)
        : QMainWindow(parent) {
        ui.setupUi(this); // ��ʼ������
        Initialize_Interface();
    }

    ~m_Window()
    {}


private:
    Ui::ServerClass ui; // ������ .ui �ļ����ɵ� UI ��
    ZeroServer* mZeroServer; //����˹������

private:
    void Initialize_Interface();    //��ʼ������
    void Set_Right_click_options(); //�����ṹ���������Ҽ�ѡ��
    void Set_visual_control();  //�����ؼ�λ�õĳ�ʼ��

    void InitServer();



private slots:
    void showContextMenu(const QPoint& pos);

    void addClientToTable(int, QString, QString, int, QString);

    void removeClientFromTable(int);
};