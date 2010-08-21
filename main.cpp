#include "winmain.h"
#include <QtGui>
#include <QWidget>

int main (int argc, char** argv)
{
    QApplication app(argc, argv);
    winmain *win = new winmain;
    QIcon icon(":/images/logo.jpeg");
    win->setMinimumHeight(530);
    win->setMinimumWidth(600);
    win->setMaximumHeight(530);
    win->setMaximumWidth(600);
    win->setWindowTitle("Model of bearings");
    win->setWindowIcon(icon);
    QFile file(":/qss/style.qss");
    file.open(QFile::ReadOnly);
    win->setStyleSheet(file.readAll());
    win->show();
    return app.exec();
}
