#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "shareddata.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Daten für TableView:
    // ui->tableView->setModel();

    // Instanz des SharedData Singleton erstellen;
    // beim Aufruf dieser Methode bekomme ich immer dasselbe Objekt = Singleton
    SharedData::instance()->users();
}

MainWindow::~MainWindow()
{
    delete ui;
}

