#ifndef LINE_H
#define LINE_H
#include <QtGui>

class line: public QWidget
{
    Q_OBJECT
    private:
        unsigned int offset;
        QString Name,Dim;
    public:
        QToolBar *pBox;
        QLabel *NameParametr;
        QLabel *Dimension;
        QLabel *Rank;
        QLineEdit *pEdit;
        line(QString name,QString dim,QString rank,unsigned int off);
    signals:

    public slots:
};
#endif // LINE_H
