#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "userlistmodel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    // Attribut für Model aus "userlistmodel.h"
    // damit wir die Tabelle hier mit dem Model ( setModel() ) verknüpfen können
    UserListModel* m_userlistmodel;
};
#endif // MAINWINDOW_H
