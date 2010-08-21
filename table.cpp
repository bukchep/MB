#include "table.h"

table::table()
{
    QVBoxLayout* pMainL = new QVBoxLayout;
    pMainL->setSpacing(0);
    pMainL->setMargin(2);

    QWidget* WGround = new QWidget;
   // WGround->setStyle(new QPlastiqueStyle);
    QFile file(":/qss/zoombuttton.qss");
    file.open(QFile::ReadOnly);
    WGround->setStyleSheet(file.readAll());
    WGround->setMinimumHeight(450);
    WGround->setMaximumHeight(450);

    QVBoxLayout *pBoxList = new QVBoxLayout;
    pBoxList->setSpacing(0);
    pBoxList->setMargin(0);

    LN[1] = new line(tr("���������� �������"),tr("��"),tr("10"),0);
    pBoxList->addWidget(LN[1]);
    LN[2] = new line(tr("�������� �������"),tr("��"),tr("10"),0);
    pBoxList->addWidget(LN[2]);
    LN[3] = new line(tr("������� ������"),tr("��"),tr("10"),0);
    pBoxList->addWidget(LN[3]);
    LN[4] = new line(tr("���������� ������� � ����������"),tr("��"),tr("10"),0);
    pBoxList->addWidget(LN[4]);
    LN[5] = new line(tr("������� �� ��� ������ ����������� ������"),tr("��"),tr("10"),0);
    pBoxList->addWidget(LN[5]);
    LN[6] = new line(tr("������� �� ��� ������ ��������� ������"),tr("��"),tr("10"),0);
    pBoxList->addWidget(LN[6]);
    LN[7] = new line(tr("�������� ������������� ����� � ��� �������"),tr("��"),tr("10"),0);
    pBoxList->addWidget(LN[7]);
    LN[8] = new line(tr("�������� ������������� ��������� ������"),tr("��"),tr("10"),0);
    pBoxList->addWidget(LN[8]);
    LN[9] = new line(tr("����������� ������ ���������"),tr("��"),tr("10"),0);
    pBoxList->addWidget(LN[9]);
    LN[10] = new line(tr("����������� ��������"),tr("��"),tr("10"),0);
    pBoxList->addWidget(LN[10]);
    LN[11] = new line(tr("������������ �������� ���������� ���������"),tr("��"),tr("10"),0);
    pBoxList->addWidget(LN[11]);
    LN[12] = new line(tr("���������������� �������� ���������� ���������"),tr("��"),tr("10"),0);
    pBoxList->addWidget(LN[12]);
    LN[13] = new line(tr("������� ���������� ������� ����������� �� ������� �����"),tr("��"),tr("10"),0);
    pBoxList->addWidget(LN[13]);

   /* QWidget *WFree = new QWidget;
    WFree->setMinimumHeight(330);
    /*QFile file1(":/qss/free.qss");
    file1.open(QFile::ReadOnly);
    WGround->setStyleSheet(file1.readAll());
    pBoxList->addWidget(WFree);*/

    WGround->setLayout(pBoxList);
    pMainL->addWidget(WGround);

    setLayout(pMainL);
}
