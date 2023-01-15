#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "shareddata.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Daten für TableView:
    // enthät die Tabellendaten, die aus der Datenstruktur User angelegt wurden


    // this = damit, wenn MainWindow gelöscht wird, auch das Model gelöscht wird
    m_userlistmodel = new UserListModel(SharedData::instance()->users(), this );
    ui->tableView->setModel(m_userlistmodel);

    // Instanz des SharedData Singleton erstellen;
    // beim Aufruf dieser Methode bekomme ich immer dasselbe Objekt = Singleton
    SharedData::instance()->users();
}

MainWindow::~MainWindow()
{
    delete ui;
}

