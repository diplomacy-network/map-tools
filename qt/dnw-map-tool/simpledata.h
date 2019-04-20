#ifndef SIMPLEDATA_H
#define SIMPLEDATA_H

#include <QWidget>

namespace Ui {
class SimpleData;
}

class SimpleData : public QWidget
{
    Q_OBJECT

public:
    explicit SimpleData(QWidget *parent = nullptr);
    //~SimpleData();

private:
    QLineEdit *nameLine;
    QTextEdit *addressText;
};

#endif // SIMPLEDATA_H
