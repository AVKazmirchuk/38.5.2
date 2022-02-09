#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QTextEdit* textEdit = new QTextEdit;
    QWebEngineView* webEngineView = new QWebEngineView;


    textEdit->setFixedSize(400, 400);
    webEngineView->setFixedSize(400, 400);

    textEdit->setText("qqq");

    QHBoxLayout* hbl = new QHBoxLayout;



    hbl->addWidget(textEdit);
    hbl->addWidget(webEngineView);

    setLayout(hbl);

    connect(textEdit, &QTextEdit::textChanged, webEngineView, [textEdit, webEngineView](){
        webEngineView->setHtml(textEdit->toPlainText());
    });
}

Widget::~Widget()
{
}

