#ifndef TABLE_H
#define TABLE_H
#include <QtGui>
#include <QWidget>
#include "line.h"

class table : public QWidget
{
    Q_OBJECT
    line *LN[14];
public:
    table();
};

#endif // TABLE_H
