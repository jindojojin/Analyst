#include "fileanalyst.h"
#include "QFile"
#include "QTextStream"
#include "QDebug"
#include "html_viewer.h"
#include "QThread"
FileAnalyst::FileAnalyst(QObject *parent) :
    QObject(parent)
{
}

void FileAnalyst::read_file_log(QString file_path){
    QFile info(file_path);
    QRegExp Name_matcher("(name=)([^\\n]*)");
    QRegExp Note_matcher("(note=)([^\\n]*)");
//    QRegExp Stamp_matcher("(stamp=)([^\\n]*)");
    QRegExp TimeCreate_matcher("(timeCreate=)([^\\n]*)");
    QRegExp ProgramName_matcher("(programName=)([^\\n]*)");
    if(info.open(QFile::Text|QFile::ReadWrite)){
        qDebug()<<"dã d?c file";
        QTextStream reader(&info);
        reader.setCodec("UTF-8");
        Name_matcher.indexIn(reader.readLine());
        Note_matcher.indexIn(reader.readLine());
        qDebug()<< Name_matcher.cap(2);
        emit add_infor_to_mainwindow(QString::fromUtf8("Được tảo bởi: ") + Name_matcher.cap(2),
                                     QString::fromUtf8("Ghi chú: ")+ Note_matcher.cap(2));
        reader.readLine();
        reader.readLine();
        while(!reader.atEnd()){
            QStringList a;
            QString resultFile = reader.readLine();
            TimeCreate_matcher.indexIn(reader.readLine());
            ProgramName_matcher.indexIn(reader.readLine());
//            Stamp_matcher.indexIn(reader.readLine());
//            Note_matcher.indexIn(reader.readLine());
            a.append(ProgramName_matcher.cap(2));
            a.append(TimeCreate_matcher.cap(2));
            a.append(resultFile);
//            a.append(Note_matcher.cap(2));
//            a.append(Stamp_matcher.cap(2));
            emit add_row_to_mainwindow(a);
            reader.readLine();
        }
        info.close();
    }
}

void FileAnalyst::read_file_html(QString filePath){
    this->initHtmlViewer();
    QFile info(filePath);
    qDebug()<<filePath;
    QRegExp Data_matcher("<td [^>]*>([^\<]*)");
    QRegExp Header_matcher("<th>([^\\n]*)");
//    emit add_infor_to_viewer(this->name_of_data);

    if(info.open(QFile::Text|QFile::ReadWrite)){
        qDebug()<<"dã d?c file";
        QTextStream reader(&info);
        reader.setCodec("UTF-8");
//        qDebug()<<reader.readLine()<<reader.readLine();
        QString html = reader.readAll();
        QStringList headers;
        QStringList datas;
        int pos = 0;
        while ((pos = Header_matcher.indexIn(html, pos)) != -1) {
            headers.append(Header_matcher.cap(1));
            pos += Header_matcher.matchedLength();
        }
        pos =0;
        while ((pos = Data_matcher.indexIn(html, pos)) != -1) {
            datas.append(Data_matcher.cap(1));
            pos += Data_matcher.matchedLength();
        }
        emit add_header_to_viewer(headers);
        for(int i=0;i<datas.count();i+= headers.count()){
            QStringList row;
            for(int j=0; j<headers.count();j++){
                row.append(datas.at(i+j));
            }
            emit add_data_to_viewer(row);
        }
        info.close();
    }else{
        emit send_error(QString::fromUtf8("Tệp tin này không còn tồn tại"));
    }
}
void FileAnalyst::change_name_of_data(QString title){
    qDebug()<<"Tieu de: "<<title;
    emit add_infor_to_viewer(title);
}

void FileAnalyst::initHtmlViewer(){
    QThread *th = new QThread();
    HTML_VIEWER *viewer= new HTML_VIEWER();
    viewer->moveToThread(th);
    viewer->show();
//    connect(this,SIGNAL(add_header_to_viewer(QStringList)),viewer,SLOT(setHeader(QStringList)));
//    connect(this,SIGNAL(add_data_to_viewer(QStringList)),viewer,SLOT(addRow(QStringList)));
//    connect(this,SIGNAL(add_infor_to_viewer(QString)),viewer,SLOT(setInfo(QString)));
    th->start();
//    return viewer;
}
