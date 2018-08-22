#ifndef DATAINFOMATION_H
#define DATAINFOMATION_H

#include <QObject>
#include "QDateTime"

class DataInfomation : public QObject
{
    Q_OBJECT
public:
    explicit DataInfomation(QObject *parent = 0);

signals:

public slots:

private:
    QString fileName;
    QString programName;
    QString note;
    QString stamp;
    QDateTime timeCreate;
};

#endif // DATAINFOMATION_H
