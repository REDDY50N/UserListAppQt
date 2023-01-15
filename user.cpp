#include "user.h"

// CTORS
// ===============================================================================
User::User()
{

}

User::User(QString id, QString firstName, QString lastName, QDate dateOfBirth) :
    m_id(id), m_firstName(firstName), m_lastName(lastName), m_dateOfBirth(dateOfBirth)
{

}

// Getter & Setter
// ===============================================================================
const QString &User::id() const
{
    return m_id;
}

void User::setId(const QString &newId)
{
    m_id = newId;
}

const QString &User::firstName() const
{
    return m_firstName;
}

void User::setFirstName(const QString &newFirstName)
{
    m_firstName = newFirstName;
}

const QString &User::lastName() const
{
    return m_lastName;
}

void User::setLastName(const QString &newLastName)
{
    m_lastName = newLastName;
}

const QDate &User::dateOfBirth() const
{
    return m_dateOfBirth;
}

void User::setDateOfBirth(const QDate &newDateOfBirth)
{
    m_dateOfBirth = newDateOfBirth;
}
