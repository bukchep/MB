#include "Sheet1.h"

sheet1::sheet1()
{
    QTextCodec *codec = QTextCodec::codecForName("CP1251");
    QTextCodec::setCodecForTr(codec);

    QVBoxLayout* pMain = new QVBoxLayout;
    pMain->setSpacing(0);
    pMain->setMargin(3);

    QString str;
    QLabel *label = new QLabel;
    str.append(tr("<p><font face=\"Arial\" size=\"5\" color =\"#121B58\"><b>Конструктивные параметры</b></font></p>"));
    label->setText(str);
    pMain->addWidget(label,0,Qt::AlignCenter);

    QWidget* Ground = new QWidget;
   // Ground->setStyle(new QPlastiqueStyle);
    QFile file(":/qss/info.qss");
    file.open(QFile::ReadOnly);
    Ground->setStyleSheet(file.readAll());

    QVBoxLayout *pBox = new QVBoxLayout;
    pBox->setSpacing(0);
    pBox->setMargin(0);
    Table = new table;
    pBox->addWidget(Table);
    Ground->setLayout(pBox);

    pMain->addWidget(Ground);
    setLayout(pMain);
}
