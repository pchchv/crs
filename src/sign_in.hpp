#ifndef SIGN_IN_H
#define SIGN_IN_H

#include <QMessageBox>
#include <QString>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>
#include <QPainter>

namespace Ui
{
    class sign_In;
}

class sign_In : public QWidget
{
    Q_OBJECT

public:
    explicit sign_In(QWidget *parent = 0);
    ~sign_In();

    void paintEvent(QPaintEvent *);
    void cleanLineEdit();
    void connectDatabase();
    void insertData();

signals:
    // signals no need to complement
    void backLogIn();

private slots:
    void on_signBtn_clicked();
    void getInput();

private:
    Ui::sign_In *ui;
    QSqlDatabase myData;

    QString signName;
    QString signPassword;
    QString signEmail;
    QString signPhone;
};

#endif