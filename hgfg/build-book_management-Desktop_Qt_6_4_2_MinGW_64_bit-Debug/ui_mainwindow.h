/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *login_PAGE0;
    QPushButton *SING_UP_firstpage;
    QWidget *login_front_page1;
    QLabel *label;
    QLineEdit *login_email_line;
    QLineEdit *login_password_line;
    QPushButton *login_2;
    QLabel *label_2;
    QLineEdit *Signup_email_line;
    QLineEdit *signup_pass;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *sign_up_p2;
    QLineEdit *signup_address;
    QLabel *label_5;
    QLineEdit *signup_phone;
    QLabel *label_6;
    QWidget *page2;
    QPushButton *order_book;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *seller_add_page4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *pushButton_5;
    QPushButton *back_page_3;
    QWidget *search_page3;
    QPushButton *search_book_page3;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QPushButton *back_page_4;
    QPushButton *buy_page_3;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(706, 464);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-10, 0, 701, 431));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe Print")});
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe Print\";"));
        login_PAGE0 = new QWidget();
        login_PAGE0->setObjectName("login_PAGE0");
        SING_UP_firstpage = new QPushButton(login_PAGE0);
        SING_UP_firstpage->setObjectName("SING_UP_firstpage");
        SING_UP_firstpage->setGeometry(QRect(230, 290, 231, 51));
        SING_UP_firstpage->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe Print\";"));
        stackedWidget->addWidget(login_PAGE0);
        login_front_page1 = new QWidget();
        login_front_page1->setObjectName("login_front_page1");
        label = new QLabel(login_front_page1);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 80, 61, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe Print")});
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setKerning(true);
        label->setFont(font1);
        login_email_line = new QLineEdit(login_front_page1);
        login_email_line->setObjectName("login_email_line");
        login_email_line->setGeometry(QRect(100, 90, 211, 31));
        login_password_line = new QLineEdit(login_front_page1);
        login_password_line->setObjectName("login_password_line");
        login_password_line->setGeometry(QRect(100, 150, 211, 31));
        login_password_line->setEchoMode(QLineEdit::Password);
        login_2 = new QPushButton(login_front_page1);
        login_2->setObjectName("login_2");
        login_2->setGeometry(QRect(170, 210, 75, 31));
        label_2 = new QLabel(login_front_page1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 30, 71, 41));
        Signup_email_line = new QLineEdit(login_front_page1);
        Signup_email_line->setObjectName("Signup_email_line");
        Signup_email_line->setGeometry(QRect(430, 90, 221, 31));
        signup_pass = new QLineEdit(login_front_page1);
        signup_pass->setObjectName("signup_pass");
        signup_pass->setGeometry(QRect(430, 150, 221, 31));
        label_3 = new QLabel(login_front_page1);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(360, 80, 61, 41));
        label_3->setFont(font1);
        label_4 = new QLabel(login_front_page1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 20, 91, 41));
        sign_up_p2 = new QPushButton(login_front_page1);
        sign_up_p2->setObjectName("sign_up_p2");
        sign_up_p2->setGeometry(QRect(490, 310, 81, 41));
        signup_address = new QLineEdit(login_front_page1);
        signup_address->setObjectName("signup_address");
        signup_address->setGeometry(QRect(430, 210, 221, 31));
        label_5 = new QLabel(login_front_page1);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(350, 210, 61, 31));
        signup_phone = new QLineEdit(login_front_page1);
        signup_phone->setObjectName("signup_phone");
        signup_phone->setGeometry(QRect(430, 260, 221, 31));
        label_6 = new QLabel(login_front_page1);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(350, 260, 61, 21));
        stackedWidget->addWidget(login_front_page1);
        page2 = new QWidget();
        page2->setObjectName("page2");
        order_book = new QPushButton(page2);
        order_book->setObjectName("order_book");
        order_book->setGeometry(QRect(50, 70, 101, 41));
        pushButton = new QPushButton(page2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 190, 101, 41));
        pushButton_2 = new QPushButton(page2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 130, 101, 41));
        stackedWidget->addWidget(page2);
        seller_add_page4 = new QWidget();
        seller_add_page4->setObjectName("seller_add_page4");
        lineEdit = new QLineEdit(seller_add_page4);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(110, 70, 171, 31));
        lineEdit_2 = new QLineEdit(seller_add_page4);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(110, 110, 171, 31));
        lineEdit_3 = new QLineEdit(seller_add_page4);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(110, 150, 171, 31));
        lineEdit_4 = new QLineEdit(seller_add_page4);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(110, 190, 171, 31));
        label_7 = new QLabel(seller_add_page4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 70, 81, 21));
        label_15 = new QLabel(seller_add_page4);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(10, 110, 81, 21));
        label_16 = new QLabel(seller_add_page4);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 155, 91, 21));
        label_17 = new QLabel(seller_add_page4);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 200, 81, 20));
        pushButton_5 = new QPushButton(seller_add_page4);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(140, 340, 101, 31));
        back_page_3 = new QPushButton(seller_add_page4);
        back_page_3->setObjectName("back_page_3");
        back_page_3->setGeometry(QRect(20, 10, 51, 24));
        stackedWidget->addWidget(seller_add_page4);
        search_page3 = new QWidget();
        search_page3->setObjectName("search_page3");
        search_book_page3 = new QPushButton(search_page3);
        search_book_page3->setObjectName("search_book_page3");
        search_book_page3->setGeometry(QRect(210, 350, 121, 31));
        label_18 = new QLabel(search_page3);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(90, 260, 111, 31));
        label_19 = new QLabel(search_page3);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(90, 310, 101, 31));
        lineEdit_9 = new QLineEdit(search_page3);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(210, 261, 231, 31));
        lineEdit_10 = new QLineEdit(search_page3);
        lineEdit_10->setObjectName("lineEdit_10");
        lineEdit_10->setGeometry(QRect(210, 311, 231, 31));
        back_page_4 = new QPushButton(search_page3);
        back_page_4->setObjectName("back_page_4");
        back_page_4->setGeometry(QRect(20, 10, 51, 24));
        buy_page_3 = new QPushButton(search_page3);
        buy_page_3->setObjectName("buy_page_3");
        buy_page_3->setGeometry(QRect(350, 350, 101, 31));
        label_8 = new QLabel(search_page3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(250, 10, 104, 21));
        label_8->setFont(font);
        stackedWidget->addWidget(search_page3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 706, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        SING_UP_firstpage->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        login_email_line->setPlaceholderText(QCoreApplication::translate("MainWindow", "               @gmail.com", nullptr));
        login_password_line->setPlaceholderText(QCoreApplication::translate("MainWindow", ".......................password...........................", nullptr));
        login_2->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        Signup_email_line->setPlaceholderText(QCoreApplication::translate("MainWindow", "                   @gmail.com", nullptr));
        signup_pass->setPlaceholderText(QCoreApplication::translate("MainWindow", "password", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        sign_up_p2->setText(QCoreApplication::translate("MainWindow", "sign up", nullptr));
        signup_address->setPlaceholderText(QCoreApplication::translate("MainWindow", "flat no, area , district", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        signup_phone->setPlaceholderText(QCoreApplication::translate("MainWindow", "+880", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Phone", nullptr));
        order_book->setText(QCoreApplication::translate("MainWindow", "Order book", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Sell book", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Search book", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Book Name", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Book writer", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Add Quantity", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Seller code", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Post", nullptr));
        back_page_3->setText(QCoreApplication::translate("MainWindow", "back", nullptr));
        search_book_page3->setText(QCoreApplication::translate("MainWindow", "search book", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Book Name", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Seller code", nullptr));
        back_page_4->setText(QCoreApplication::translate("MainWindow", "back", nullptr));
        buy_page_3->setText(QCoreApplication::translate("MainWindow", "buy", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "          buy book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
