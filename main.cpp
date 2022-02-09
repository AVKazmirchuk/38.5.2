#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //QWebEngineView webView;
    //webView.load(QUrl("http://www.bhv.ru"));
    //webView.show();

    Widget w;
    w.show();
    return a.exec();
}
