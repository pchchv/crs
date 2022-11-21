#ifndef LOG_IN_H
#define LOG_IN_H

#include "sign_in.hpp"
#include "main_screen.hpp"
#include "admin.hpp"
#include <QWidget>
#include <QString>
#include <QSqlQuery>
#include <QDebug>
#include <QTimer>
#include <QPainter>

namespace Ui
{
    class Log_in;
}

class Log_in : public QWidget
{
    Q_OBJECT

public:
    explicit Log_in(QWidget *parent = 0);
    ~Log_in();

    void paintEvent(QPaintEvent *);
    void cleanLineEdit();
    void connectDatabase();
    void matchDatabase();
    void adminShow();
    void mainScreenShow();

    // use the pointer to get the pages of
    // sign in, main screen and adminstrator
    Sign_In *signIn;
    MainScreen *mainPage;
    adminstrator *admin;

private slots:
    void on_LogBtn_clicked();

private:
    Ui::Log_in *ui;
    QSqlDatabase db;
};

#endif // LOG_IN_H