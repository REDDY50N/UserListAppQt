#ifndef USERLISTMODEL_H
#define USERLISTMODEL_H

#include <QAbstractItemModel>
#include <QList>

#include "user.h"

class UserListModel : public QAbstractItemModel
{
    Q_OBJECT

public:
    // Das Model benötigt unsere Daten, deswegen geben wir dem Model
    // eine Liste auf die User
    explicit UserListModel(QList<User>* users, QObject *parent = nullptr);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    QModelIndex index(int row, int column,
                      const QModelIndex &parent = QModelIndex()) const override;
    QModelIndex parent(const QModelIndex &index) const override;

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    // die users stammen aus der shared instance
    // hier werden die User als Attribut abgespeichert
    QList<User>* m_users;
};

#endif // USERLISTMODEL_H
