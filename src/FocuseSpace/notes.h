#ifndef NOTES_H
#define NOTES_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Notes; }
QT_END_NAMESPACE

class Notes : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notes(QMainWindow *parent = nullptr);
    ~Notes();

private slots:

private:
    Ui::Notes *ui;
    Notes *notes;
};

#endif // WINDOW2_H
