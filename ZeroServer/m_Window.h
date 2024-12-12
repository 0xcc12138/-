
#include <QMessageBox>
#include <QMenu>
#include "ZeroServer.h"
#include "Server_ui.h"
#include <QInputDialog>
#pragma execution_character_set("utf-8")

class m_Window : public QMainWindow {
    Q_OBJECT

public:
    explicit m_Window(QWidget* parent = nullptr)
        : QMainWindow(parent) {
        ui.setupUi(this); // ��ʼ������
        Initialize_Interface();

        // �����źźͲ�
        connect(ui.pushButton_6, &QPushButton::clicked, this, &m_Window::onCreateServerButtonClicked);

        connect(ui.pushButton_5, &QPushButton::clicked, this, &m_Window::onStopServerButtonClicked);

    }

    ~m_Window()
    {}


private:
    Ui::ServerClass ui; // ������ .ui �ļ����ɵ� UI ��
    ZeroServer* mZeroServer; //����˹������


private:
    QPoint m_lastClickPos;  // ���ڱ����ϴ��Ҽ������λ��

private:
    void Initialize_Interface();    //��ʼ������
    void Set_Right_click_options(); //�����ṹ���������Ҽ�ѡ��
    void Set_visual_control();  //�����ؼ�λ�õĳ�ʼ��

    void InitServer(unsigned int port);  //��ʼ�������
    void StopServer();  //ֹͣ�����


private slots:
    void showContextMenu(const QPoint& pos,  QMenu* contextMenu);

    void addClientToTable(int, QString, QString, int, QString);

    void removeClientFromTable(int);

    void onCreateServerButtonClicked(); // ��������˰�ť����ۺ���

    void onStopServerButtonClicked(); // ��������˰�ť����ۺ���

    void onTriggered();//�����Ҽ������ѡ��




};