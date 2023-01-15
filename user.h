#ifndef USER_H
#define USER_H

#include <QString>
#include <QDate>

class User
{
public:
    User();
    User(QString id, QString firstName, QString lastName, QDate dateOfBirth);

    const QString &id() const;
    void setId(const QString &newId);

    const QString &firstName() const;
    void setFirstName(const QString &newFirstName);

    const QString &lastName() const;
    void setLastName(const QString &newLastName);

    const QDate &dateOfBirth() const;
    void setDateOfBirth(const QDate &newDateOfBirth);

private:
    QString m_id;
    QString m_firstName;
    QString m_lastName;
    QDate m_dateOfBirth;

};

#endif // USER_H
