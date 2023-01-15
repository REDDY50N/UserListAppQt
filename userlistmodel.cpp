#include "userlistmodel.h"

// ==============================================
// CTOR
// ==============================================
// Model mit users (Liste) verknüpfen
UserListModel::UserListModel(QList<User>* users, QObject *parent)
    : QAbstractItemModel(parent), m_users(users)
{
}

QModelIndex UserListModel::index(int row, int column, const QModelIndex &parent) const
{
    return createIndex(row, column);
}

QModelIndex UserListModel::parent(const QModelIndex &child) const
{
    return QModelIndex();
}

// ==============================================
// Kopfzeile der Tabelle
// ==============================================
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
    return QVariant();
}

// ==============================================
// Zeilenzahl im Model (Länge der QList)
// ==============================================
// Anzahl der Zeilen zurückgeben
int UserListModel::rowCount(const QModelIndex &parent) const
{
    return m_users->size();
}

// ==============================================
// Spaltenanzahl im Model (=4)
// ==============================================
// Anzahl der Spalten zurückgeben
int UserListModel::columnCount(const QModelIndex &parent) const
{
    return 4;
}

// ==============================================
// Daten
// ==============================================
// mit Zeilenanzahl und Spaltenanzahl kann Qt die Anzahl
// der benötigten Felder berechnen
// diese Methode bestimmt, was in den Feldern steht
// dazu wird data mit einem index und einer rolle aufgerufen
QVariant UserListModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (role == Qt::DisplayRole)
    {
        // Nutzer holen auf den wir uns gerade beziehen
        // wir holen uns aus der Liste der Nutzer der aktuellen Zeile
        // dieser ist in idex.row() gespeichert
        const User& user = m_users->at(index.row());
        switch(index.column())
        {
        // getter von user.h zurückgeben
        case 0: return user.id();
        case 1: return user.firstName();
        case 2: return user.lastName();
        case 3: return user.dateOfBirth();
        }
    }

    return QVariant();
}
