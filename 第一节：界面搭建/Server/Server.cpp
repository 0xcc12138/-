#include "Server.h"




Server::Server(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    Initialize_Interface(); //��ʼ������

}

Server::~Server()
{}


void Server::Initialize_Interface()
{
    // ���� QLabel �Ĺ̶����
    ui.label->setFixedWidth(100);  // ���� QLabel �Ŀ��Ϊ 100 ����
    ui.label->setAlignment(Qt::AlignCenter);  // �������־��У���ѡ��
    ui.toolBar->setFixedHeight(100);  // ���������ĸ߶�����Ϊ 50 ����


    // ���ð�ť��С����Ϊ Expanding
    ui.pushButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    ui.pushButton_2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    ui.pushButton_3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    ui.pushButton_4->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    ui.label->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);


    // ����ť��ӵ�������
    ui.toolBar->addWidget(ui.label);
    ui.toolBar->addWidget(ui.pushButton);
    ui.toolBar->addWidget(ui.pushButton_2);
    ui.toolBar->addWidget(ui.pushButton_3);
    ui.toolBar->addWidget(ui.pushButton_4);


    // �����б���
    QStringList horizontalHeader;
    horizontalHeader << "ID" << "�û���" << "IP" << "�˿�" << "ϵͳ";
    ui.tableWidget->setHorizontalHeaderLabels(horizontalHeader);

    // �����б���
    QStringList verticalHeader;
    verticalHeader << "��1" << "��2" << "��3" << "��4";
    ui.tableWidget->setVerticalHeaderLabels(verticalHeader);

    // �����п�����Ӧ�����ȷֲ�
    ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);  // ʹ�� Stretch ģʽ


    //�����ṹ�����Ҽ�ѡ��
    Set_Right_click_options();

}


void Server::Set_Right_click_options()//�����ṹ���������Ҽ�ѡ��
{
    // ���ò���
    setCentralWidget(ui.tableWidget);

    // �����Զ����Ҽ��˵�
    ui.tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);

    // �����źźͲۺ���
    connect(ui.tableWidget, &QTableWidget::customContextMenuRequested,
        this, &Server::showContextMenu);
}

void Server::showContextMenu(const QPoint& pos) {
    // �����Ҽ��˵�
    QMenu contextMenu(this);

    // �����˵���
    QAction* sendMessageAction = contextMenu.addAction("���͵�����Ϣ");
    QAction* rebootAction = contextMenu.addAction("���¿���");
    QAction* forceLogoutAction = contextMenu.addAction("ǿ������");

    // ��ʾ�˵�����ȡ�û�ѡ��Ķ���
    QAction* selectedAction = contextMenu.exec(ui.tableWidget->mapToGlobal(pos));

    // ִ�в˵������
    if (selectedAction == sendMessageAction) {
        QMessageBox::information(this, "������Ϣ", "��ѡ���˷��͵�����Ϣ");
    }
    else if (selectedAction == rebootAction) {
        QMessageBox::information(this, "���¿���", "��ѡ�������¿���");
        // ����������ϵͳ�����Ĵ���
    }
    else if (selectedAction == forceLogoutAction) {
        QMessageBox::information(this, "ǿ������", "��ѡ����ǿ������");
        // ����������ǿ�����ߵĴ���
    }
}


