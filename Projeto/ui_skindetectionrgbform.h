/********************************************************************************
** Form generated from reading UI file 'skindetectionrgbform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINDETECTIONRGBFORM_H
#define UI_SKINDETECTIONRGBFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkinDetectionRGBForm
{
public:
    QLabel *displaySkCoDeRGMessage;

    void setupUi(QWidget *SkinDetectionRGBForm)
    {
        if (SkinDetectionRGBForm->objectName().isEmpty())
            SkinDetectionRGBForm->setObjectName(QStringLiteral("SkinDetectionRGBForm"));
        SkinDetectionRGBForm->resize(400, 300);
        displaySkCoDeRGMessage = new QLabel(SkinDetectionRGBForm);
        displaySkCoDeRGMessage->setObjectName(QStringLiteral("displaySkCoDeRGMessage"));
        displaySkCoDeRGMessage->setGeometry(QRect(90, 90, 231, 20));

        retranslateUi(SkinDetectionRGBForm);

        QMetaObject::connectSlotsByName(SkinDetectionRGBForm);
    } // setupUi

    void retranslateUi(QWidget *SkinDetectionRGBForm)
    {
        SkinDetectionRGBForm->setWindowTitle(QApplication::translate("SkinDetectionRGBForm", "Form", 0));
        displaySkCoDeRGMessage->setText(QApplication::translate("SkinDetectionRGBForm", "Skin Color Detection (RGB Space)", 0));
    } // retranslateUi

};

namespace Ui {
    class SkinDetectionRGBForm: public Ui_SkinDetectionRGBForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINDETECTIONRGBFORM_H
