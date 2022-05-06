/********************************************************************************
** Form generated from reading UI file 'ctkPathListButtonsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKPATHLISTBUTTONSWIDGET_H
#define UI_CTKPATHLISTBUTTONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctkPathListButtonsWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *AddFilesButton;
    QToolButton *AddDirectoryButton;
    QToolButton *RemoveButton;
    QToolButton *EditButton;

    void setupUi(QWidget *ctkPathListButtonsWidget)
    {
        if (ctkPathListButtonsWidget->objectName().isEmpty())
            ctkPathListButtonsWidget->setObjectName(QString::fromUtf8("ctkPathListButtonsWidget"));
        ctkPathListButtonsWidget->resize(302, 25);
        horizontalLayout = new QHBoxLayout(ctkPathListButtonsWidget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        AddFilesButton = new QToolButton(ctkPathListButtonsWidget);
        AddFilesButton->setObjectName(QString::fromUtf8("AddFilesButton"));

        horizontalLayout->addWidget(AddFilesButton);

        AddDirectoryButton = new QToolButton(ctkPathListButtonsWidget);
        AddDirectoryButton->setObjectName(QString::fromUtf8("AddDirectoryButton"));

        horizontalLayout->addWidget(AddDirectoryButton);

        RemoveButton = new QToolButton(ctkPathListButtonsWidget);
        RemoveButton->setObjectName(QString::fromUtf8("RemoveButton"));

        horizontalLayout->addWidget(RemoveButton);

        EditButton = new QToolButton(ctkPathListButtonsWidget);
        EditButton->setObjectName(QString::fromUtf8("EditButton"));

        horizontalLayout->addWidget(EditButton);


        retranslateUi(ctkPathListButtonsWidget);

        QMetaObject::connectSlotsByName(ctkPathListButtonsWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkPathListButtonsWidget)
    {
        ctkPathListButtonsWidget->setWindowTitle(QApplication::translate("ctkPathListButtonsWidget", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        AddFilesButton->setToolTip(QApplication::translate("ctkPathListButtonsWidget", "Add files", nullptr));
#endif // QT_NO_TOOLTIP
        AddFilesButton->setText(QApplication::translate("ctkPathListButtonsWidget", "Add files", nullptr));
#ifndef QT_NO_TOOLTIP
        AddDirectoryButton->setToolTip(QApplication::translate("ctkPathListButtonsWidget", "Add a directory", nullptr));
#endif // QT_NO_TOOLTIP
        AddDirectoryButton->setText(QApplication::translate("ctkPathListButtonsWidget", "Add directory", nullptr));
#ifndef QT_NO_TOOLTIP
        RemoveButton->setToolTip(QApplication::translate("ctkPathListButtonsWidget", "Remove selected entries", nullptr));
#endif // QT_NO_TOOLTIP
        RemoveButton->setText(QApplication::translate("ctkPathListButtonsWidget", "Remove", nullptr));
#ifndef QT_NO_TOOLTIP
        EditButton->setToolTip(QApplication::translate("ctkPathListButtonsWidget", "Edit current entry", nullptr));
#endif // QT_NO_TOOLTIP
        EditButton->setText(QApplication::translate("ctkPathListButtonsWidget", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctkPathListButtonsWidget: public Ui_ctkPathListButtonsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKPATHLISTBUTTONSWIDGET_H
