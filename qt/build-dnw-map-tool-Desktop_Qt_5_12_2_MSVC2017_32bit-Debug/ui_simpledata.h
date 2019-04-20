/********************************************************************************
** Form generated from reading UI file 'simpledata.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEDATA_H
#define UI_SIMPLEDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimpleData
{
public:

    void setupUi(QWidget *SimpleData)
    {
        if (SimpleData->objectName().isEmpty())
            SimpleData->setObjectName(QString::fromUtf8("SimpleData"));
        SimpleData->resize(400, 300);

        retranslateUi(SimpleData);

        QMetaObject::connectSlotsByName(SimpleData);
    } // setupUi

    void retranslateUi(QWidget *SimpleData)
    {
        SimpleData->setWindowTitle(QApplication::translate("SimpleData", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimpleData: public Ui_SimpleData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEDATA_H
