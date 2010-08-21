#include "line.h"

line::line(QString name,QString dim,QString rank,unsigned int off)
{
    pBox = new QToolBar();

    pBox->setStyle(new QPlastiqueStyle);
    QFile file(":/qss/line.qss");
    file.open(QFile::ReadOnly);
    pBox->setStyleSheet(file.readAll());
    Name=name;
    Dim=dim;
    offset=off;

    NameParametr = new QLabel;
    Dimension = new QLabel;
    Rank = new QLabel;

    QString str;
    str.clear();
    str.append(tr("<p><font face=\"Arial\" size=\"4\" color =\"#121B58\"><b>"));
    str+=Name;
    str.append(tr(",</b></font></p>"));
    NameParametr->setText(str);

    str.clear();
    str.append(tr("<p><font face=\"Arial\" size=\"4\" color =\"#121B58\"><b>"));
    str+=Dim;
    str.append(tr("</b></font></p>"));
    Dimension->setText(str);

    str.clear();
    str.append(tr("<p><font face=\"Arial\" size=\"4\" color =\"#121B58\"><b>"));
    str+=rank;
    str.append(tr("</b></font></p>"));
    Rank->setText(str);

    pBox->setMinimumHeight(30);

    QWidget *WLabelName = new QWidget;
    QHBoxLayout *pBoxName = new QHBoxLayout;
    pBoxName->setSpacing(0);
    pBoxName->setMargin(0);
    pBoxName->addWidget(NameParametr);
    WLabelName->setLayout(pBoxName);
    WLabelName->setMaximumHeight(22);
    pBox->addWidget(WLabelName);

    QWidget *WLabelDim = new QWidget;
    QHBoxLayout *pBoxDim = new QHBoxLayout;
    pBoxDim->setSpacing(0);
    pBoxDim->setMargin(0);
    pBoxDim->addWidget(Dimension);
    WLabelDim->setLayout(pBoxDim);
    WLabelDim->setMaximumHeight(22);
    pBox->addWidget(WLabelDim);

    QHBoxLayout *pEx = new QHBoxLayout;
    QWidget *pW1 = new QWidget;
    pEx->setSpacing(0);
    pEx->setMargin(0);
    pEx->addStretch(1);
    pW1->setLayout(pEx);
    pBox->addWidget(pW1);

    pEdit = new QLineEdit;
    pEdit->setMaximumWidth(50);
    pBox->addWidget(pEdit);

    QWidget *WLabelRank = new QWidget;
    QHBoxLayout *pBoxRank = new QHBoxLayout;
    pBoxRank->setSpacing(0);
    pBoxRank->setMargin(0);
    pBoxRank->addWidget(Rank);
    WLabelRank->setLayout(pBoxRank);
    WLabelRank->setMaximumHeight(22);
    pBox->addWidget(WLabelRank);

    QHBoxLayout *pMain = new QHBoxLayout;
    pMain->setSpacing(0);
    pMain->setMargin(0);
    pMain->addWidget(pBox);
    setLayout(pMain);
}
