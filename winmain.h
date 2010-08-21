#ifndef WINMAIN_H
#define WINMAIN_H

#include <QtGui>
#include "Sheet1.h"
#include "Sheet2.h"

class winmain: public QWidget
{
    Q_OBJECT
 protected:
    //virtual void closeEvent(QCloseEvent *event);
 private:
   // bool askOnClose();
    bool flagSaveData;
    unsigned int CounterSheet;
 public:
    sheet1 *SH1;
    sheet2 *SH2;
    winmain();
 public slots:
    void NextSheet();
    void PreviousSheet();
    //void SetFlagSave();
    //void SetFlagStart();
};

#endif // WINMAIN_H
