#ifndef FILEANALYST_H
#define FILEANALYST_H

#include <QObject>
#include <QStandardItem>

class FileAnalyst : public QObject
{
    Q_OBJECT
public:
    explicit FileAnalyst(QObject *parent = 0);
    QString name_of_data;
private:
    void initHtmlViewer();

signals:
    void add_infor_to_mainwindow(QString,QString);
    void add_row_to_mainwindow(QStringList);
    void add_header_to_viewer(QStringList);
    void add_data_to_viewer(QStringList);
    void add_infor_to_viewer(QString);
    void send_error(QString);

public slots:
    void read_file_html(QString);
    void read_file_log(QString);
    void change_name_of_data(QString);
};

#endif // FILEANALYST_H
