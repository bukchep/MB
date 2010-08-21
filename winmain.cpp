#include "winmain.h"

winmain::winmain()
{
    QTextCodec *codec = QTextCodec::codecForName("CP1251");
    QTextCodec::setCodecForTr(codec);

    flagSaveData=0;
    CounterSheet=1;

    SH1 = new sheet1;
    SH2 = new sheet2;
    SH2->hide();

    QPushButton *Previous = new QPushButton("Previous");
    Previous->setMinimumHeight(22);
    Previous->setMinimumWidth(50);
    connect(Previous,SIGNAL(clicked()),SLOT(PreviousSheet()));

    QPushButton *Next = new QPushButton("Next");
    Next->setMinimumHeight(22);
    Next->setMinimumWidth(50);
    connect(Next,SIGNAL(clicked()),SLOT(NextSheet()));

/***создание менеджеров компоновки***/
    QVBoxLayout *pMain = new QVBoxLayout; //основной
//задание свойств менеджеров компоновки
    pMain->setSpacing(6);
    pMain->setMargin(6);
/***упаковка плотера и панелей в менеджеры***/
    pMain->addWidget(SH1);
    pMain->addWidget(SH2);
    QHBoxLayout *pVault = new QHBoxLayout;
    pVault->setSpacing(0);
    pVault->setMargin(0);
    pVault->addStretch(1);
    pVault->addWidget(Previous);
    pVault->addWidget(Next);
    pMain->addLayout(pVault);
    setLayout(pMain); //установка основного лэйаута в Widget
}

void winmain::NextSheet()
{
    switch(CounterSheet)
    {
        case 1:
            SH1->hide();
            SH2->show();
            CounterSheet++;
            break;
        case 2:
            SH2->hide();
            SH1->show();
            CounterSheet--;
            break;
        default:
            break;
    }
}
void winmain::PreviousSheet()
{
    switch(CounterSheet)
    {
        case 1:
            SH1->hide();
            SH2->show();
            CounterSheet++;
            break;
        case 2:
            SH2->hide();
            SH1->show();
            CounterSheet--;
            break;
        default:
            break;
    }
}
/*void winmain::closeEvent(QCloseEvent *event)
{
    if(flagSaveData==1)
    {
         if (askOnClose()) event->accept();
         else  event->ignore();
    }
    else event->accept();
 }
bool winmain::askOnClose()
{
    int r = QMessageBox::question(this, tr("Подтвердите"),tr("Выйти из программы?"),
            QMessageBox::Yes | QMessageBox::No,
            QMessageBox::Yes,
            QMessageBox::Cancel | QMessageBox::Escape);
    return (r == QMessageBox::Yes);
}
void winmain::SetFlagSave()
{
    flagSaveData=0;
}
void winmain::SetFlagStart()
{
    flagSaveData=1;
}*/
