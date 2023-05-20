#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    db = QSqlDatabase ::addDatabase("QSQLITE");
    db.setDatabaseName("E:/hgfg/book_management database.db");
   db.open();

    qDebug() << db.isOpen();
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}


void MainWindow::on_login_2_clicked()
{
   login_email =ui->login_email_line->text();
   login_pass =ui->login_password_line->text();
  /// qDebug()<< login_email<<login_pass;
    QSqlQuery query;
    query.exec("SELECT * FROM user WHERE email = '"+login_email+"' AND password = '"+login_pass+"'");
   if(query.next())
   {
    ui->stackedWidget->setCurrentIndex(2);
   }
   else
   {
       QMessageBox :: warning(this,"login","Wrong email or password");
       ///qDebug()<<"*************login didnt work************ " ;
   }
   ui->login_email_line->clear();
   ui->login_password_line->clear();

}


void MainWindow::on_SING_UP_firstpage_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_order_book_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_sign_up_p2_clicked()
{
    sign_upname =ui->signup_name_line->text();
  signup_email = ui->Signup_email_line->text();
  signup_pass = ui->signup_pass_line->text();
  signup_address= ui->signup_address_line->text();
  signup_phone = ui->signup_phone_line->text();
  QSqlQuery query;
  query.exec("INSERT INTO user(name,email,password,phone,address) VALUES('"+sign_upname+"','"+signup_email+"','"+signup_pass+"','"+signup_phone+"','"+signup_address+"')");
  QMessageBox :: information(this,"signup","signup is successfull, please login and happy shopping");
}
void MainWindow::on_post_sell_book_clicked()
{
    book= ui->book_name->text();
    writer=ui->book_writer->text();
    price=ui->book_price->text();
    code=ui->book_code->text();
    quantity= ui->add_book_quantity->text();
    QSqlQuery query;
    query.exec("INSERT INTO 'main'.'books'(book,writer,price,code,quantity) VALUES('"+book+"','"+writer+"','"+price+"','"+code+"','"+quantity+"')");
    QMessageBox :: information(this,"post","Your add is successfully added, wish you a good day");
    ui->book_name->clear();
    ui->book_writer->clear();
    ui->book_price->clear();
    ui->book_code->clear();
    ui->add_book_quantity->clear();
}



void MainWindow::on_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_sell_book_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_back_page_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_back_page_4_clicked()
{
  ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}




void MainWindow::on_add_existing_book_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_close_app_clicked()
{
    close();
}

void MainWindow::on_booklist_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery * query = new QSqlQuery(db);

        query->prepare("SELECT * FROM books");
        query->exec();
        modal->setQuery(*query);
        ui->tableView->setModel(modal);
        qDebug() << (modal->rowCount());
}


void MainWindow::on_back_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}



void MainWindow::on_list_2_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery * query = new QSqlQuery(db);

        query->prepare("SELECT * FROM books");
        query->exec();
        modal->setQuery(*query);
        ui->tableView->setModel(modal);
        qDebug() << (modal->rowCount());
}


void MainWindow::on_buy_page_3_clicked()
{
    buy_book=ui->book_sell_name->text();
   buy_book_code =ui->book_sell_code->text();
   QSqlQuery query;
   query.exec("SELECT * FROM books WHERE book = '"+buy_book+"' AND code = '"+buy_book_code+"'");
  if(query.next())
  {
   QMessageBox :: warning(this,"order successfull","We recived your order Our delivery man will deliver your product in 5-6 working days");
  }
  else
  {
      QMessageBox :: warning(this,"Error","there is an error in your order Please try again ");
      ///qDebug()<<"*************login didnt work************ " ;
  }
  ui->book_sell_name->clear();
  ui->book_sell_code->clear();

}


void MainWindow::on_book_list_page4_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery * query = new QSqlQuery(db);

        query->prepare("SELECT * FROM books");
        query->exec();
        modal->setQuery(*query);
        ui->tableView->setModel(modal);
        qDebug() << (modal->rowCount());

}

