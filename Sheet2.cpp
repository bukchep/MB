#include "Sheet2.h"

sheet2::sheet2()
{
    QTextCodec *codec = QTextCodec::codecForName("CP1251");
    QTextCodec::setCodecForTr(codec);

    QVBoxLayout *pMain = new QVBoxLayout;
    pMain->setSpacing(0);
    pMain->setMargin(0);
    pMain->addStretch(1);

    QLabel *label = new QLabel;
    QString str;
    str.append(tr("<p><font face=\"Arial\" size=\"4\" color =\"#121B58\"><b>FTP 1.0</b></font></p>"));
    label->setText(str);
    pMain->addWidget(label,0,Qt::AlignCenter);

    QWidget *WGround = new QWidget;
    /*QFile file(":/qss/info.qss");
    file.open(QFile::ReadOnly);
    WGround->setStyleSheet(file.readAll());*/
    WGround->setMinimumHeight(445);
    pMain->addWidget(WGround);

    setLayout(pMain);
}
