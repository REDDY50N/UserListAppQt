#include "userlistmodel.h"

UserListModel::UserListModel(QList<User>* users, QObject *parent)
    : m_users(users), QAbstractItemModel(parent)
{
}

// Kopfzeile der Tabelle
QVariant UserListModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole)
    {
        if (orientation == Qt::Horizontal)
        {
            switch(section)
            {
            case 0: return "ID";
            case 1: return "First name";
            case 2: return "Last name";
            case 4: return "Date of birth";
            }
        }
        else
            // vertikal: Zeilennummern anzeigen
            return QString::number(section+1);
    }
}

QModelIndex UserListModel::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex UserListModel::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int UserListModel::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int UserListModel::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant UserListModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
