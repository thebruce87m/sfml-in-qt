#include "qtsfml.h"
#include "./ui_qtsfml.h"

QtSFML::QtSFML(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QtSFML)
{
    ui->setupUi(this);
}

QtSFML::~QtSFML()
{
    delete ui;
}

