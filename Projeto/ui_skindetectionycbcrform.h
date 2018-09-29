/********************************************************************************
** Form generated from reading UI file 'skindetectionycbcrform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKINDETECTIONYCBCRFORM_H
#define UI_SKINDETECTIONYCBCRFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SkinDetectionYCbCrForm
{
public:
    QLabel *displaySkinYCbCrDetectForm;

    void setupUi(QWidget *SkinDetectionYCbCrForm)
    {
        if (SkinDetectionYCbCrForm->objectName().isEmpty())
            SkinDetectionYCbCrForm->setObjectName(QStringLiteral("SkinDetectionYCbCrForm"));
        SkinDetectionYCbCrForm->resize(400, 300);
        displaySkinYCbCrDetectForm = new QLabel(SkinDetectionYCbCrForm);
        displaySkinYCbCrDetectForm->setObjectName(QStringLiteral("displaySkinYCbCrDetectForm"));
        displaySkinYCbCrDetectForm->setGeometry(QRect(20, 10, 301, 17));

        retranslateUi(SkinDetectionYCbCrForm);

        QMetaObject::connectSlotsByName(SkinDetectionYCbCrForm);
    } // setupUi

    void retranslateUi(QWidget *SkinDetectionYCbCrForm)
    {
        SkinDetectionYCbCrForm->setWindowTitle(QApplication::translate("SkinDetectionYCbCrForm", "Form", 0));
        displaySkinYCbCrDetectForm->setText(QApplication::translate("SkinDetectionYCbCrForm", "Skin Detection (YCbCr)", 0));
    } // retranslateUi

};

namespace Ui {
    class SkinDetectionYCbCrForm: public Ui_SkinDetectionYCbCrForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKINDETECTIONYCBCRFORM_H
