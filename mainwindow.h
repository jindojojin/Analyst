#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QStandardItemModel"
extern QString MAIN_FOLDER;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void setupTable();
    void init_analyst();
    QStandardItemModel *model;
    int current_row_selected;
    void create_sub_menu(QPoint pos);

public slots:
    void add_infor_to_screen(QString,QString);
    void add_row_to_table(QStringList);
signals:
    void view_detail(QString);
    void changeNameData(QString); //set title in HTML Viewer
    void read_info_file(QString);
private slots:
    void on_actionM_t_p_tin_nh_t_k_c50_triggered();
    void on_tableView_customContextMenuRequested(const QPoint &pos);
    void on_tableView_doubleClicked(const QModelIndex &index);
    void viewWithBrowser();
    void viewWithHtmlViewer();
    void editNote();
    void show_error(QString);
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
