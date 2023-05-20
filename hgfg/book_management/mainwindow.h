#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_2_clicked();

    void on_SING_UP_firstpage_clicked();

    void on_order_book_clicked();

    void on_pushButton_2_clicked();



    void on_sign_up_p2_clicked();

    void on_back_clicked();

    void on_sell_book_clicked();

    void on_back_page_3_clicked();

    void on_back_page_4_clicked();

    void on_pushButton_3_clicked();

    void on_post_sell_book_clicked();

    void on_add_existing_book_clicked();

    void on_close_app_clicked();



    void on_booklist_clicked();

    void on_back_2_clicked();






    void on_list_2_clicked();

    void on_buy_page_3_clicked();

    void on_book_list_page4_clicked();

private:
    Ui::MainWindow *ui;
    QString login_email, login_pass, sign_upname, signup_email,signup_address,signup_phone,signup_pass,book,writer,price,code,quantity , buy_book,buy_book_code;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
