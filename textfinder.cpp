#include "textfinder.h"
#include "./ui_textfinder.h"
#include <QFile>
#include <QTextStream>


TextFinder::TextFinder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TextFinder)
{
    ui->setupUi(this);
    loadTextFile();
    int c;  // Snapshot1之后的修改
    c=30;
}

TextFinder::~TextFinder()
{
    delete ui;
    int a;  // Changes after commit. edit in thinkpad
    a=10;
}


void TextFinder::on_findButton_clicked()
{
    QString searchString = ui->lineEdit->text();
    ui->textEdit->find(searchString, QTextDocument::FindWholeWords);
    int e; //edit in github
    e=50;
    int f; //edit in thinkpad
}

void TextFinder::loadTextFile()
{
    QFile inputFile(":/input.txt");
    inputFile.open(QIODevice::ReadOnly);

    QTextStream in(&inputFile);
    QString line = in.readAll();
    inputFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
    int d; //Changes after the second commit. edit in thinkpad
    d=40;
}


