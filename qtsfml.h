#ifndef QTSFML_H
#define QTSFML_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class QtSFML; }
QT_END_NAMESPACE

class QtSFML : public QMainWindow
{
    Q_OBJECT

public:
    QtSFML(QWidget *parent = nullptr);
    ~QtSFML();

private:
    Ui::QtSFML *ui;
};
#endif // QTSFML_H
