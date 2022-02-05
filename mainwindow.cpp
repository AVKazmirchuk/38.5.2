#include "mainwindow.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QTextEdit* textEdit = new QTextEdit;
    QWebEngineView* webEngineView = new QWebEngineView;

    QHBoxLayout* hbl = new QHBoxLayout;

    hbl->addWidget(textEdit);
    hbl->addWidget(webEngineView);

    setLayout(hbl);

    connect(textEdit, &QTextEdit::textChanged, webEngineView, [textEdit, webEngineView](){
        webEngineView->setHtml(textEdit->toHtml());
    });
}


Widget::~Widget()
{
}

