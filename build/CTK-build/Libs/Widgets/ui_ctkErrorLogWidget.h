/********************************************************************************
** Form generated from reading UI file 'ctkErrorLogWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKERRORLOGWIDGET_H
#define UI_CTKERRORLOGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctkErrorLogWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *ShowAllEntryButton;
    QPushButton *ShowErrorEntryButton;
    QPushButton *ShowWarningEntryButton;
    QPushButton *ShowInfoEntryButton;
    QFrame *line;
    QPushButton *ClearButton;
    QTableView *ErrorLogTableView;
    QTextBrowser *ErrorLogDescription;

    void setupUi(QWidget *ctkErrorLogWidget)
    {
        if (ctkErrorLogWidget->objectName().isEmpty())
            ctkErrorLogWidget->setObjectName(QString::fromUtf8("ctkErrorLogWidget"));
        ctkErrorLogWidget->resize(754, 429);
        verticalLayout = new QVBoxLayout(ctkErrorLogWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ShowAllEntryButton = new QPushButton(ctkErrorLogWidget);
        ShowAllEntryButton->setObjectName(QString::fromUtf8("ShowAllEntryButton"));
        ShowAllEntryButton->setChecked(false);

        horizontalLayout->addWidget(ShowAllEntryButton);

        ShowErrorEntryButton = new QPushButton(ctkErrorLogWidget);
        ShowErrorEntryButton->setObjectName(QString::fromUtf8("ShowErrorEntryButton"));
        ShowErrorEntryButton->setCheckable(true);

        horizontalLayout->addWidget(ShowErrorEntryButton);

        ShowWarningEntryButton = new QPushButton(ctkErrorLogWidget);
        ShowWarningEntryButton->setObjectName(QString::fromUtf8("ShowWarningEntryButton"));
        ShowWarningEntryButton->setCheckable(true);

        horizontalLayout->addWidget(ShowWarningEntryButton);

        ShowInfoEntryButton = new QPushButton(ctkErrorLogWidget);
        ShowInfoEntryButton->setObjectName(QString::fromUtf8("ShowInfoEntryButton"));
        ShowInfoEntryButton->setCheckable(true);

        horizontalLayout->addWidget(ShowInfoEntryButton);

        line = new QFrame(ctkErrorLogWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        ClearButton = new QPushButton(ctkErrorLogWidget);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));

        horizontalLayout->addWidget(ClearButton);


        verticalLayout->addLayout(horizontalLayout);

        ErrorLogTableView = new QTableView(ctkErrorLogWidget);
        ErrorLogTableView->setObjectName(QString::fromUtf8("ErrorLogTableView"));
        ErrorLogTableView->setAlternatingRowColors(true);
        ErrorLogTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        ErrorLogTableView->setCornerButtonEnabled(false);
        ErrorLogTableView->horizontalHeader()->setVisible(false);
        ErrorLogTableView->horizontalHeader()->setStretchLastSection(true);
        ErrorLogTableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(ErrorLogTableView);

        ErrorLogDescription = new QTextBrowser(ctkErrorLogWidget);
        ErrorLogDescription->setObjectName(QString::fromUtf8("ErrorLogDescription"));

        verticalLayout->addWidget(ErrorLogDescription);


        retranslateUi(ctkErrorLogWidget);

        QMetaObject::connectSlotsByName(ctkErrorLogWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkErrorLogWidget)
    {
        ctkErrorLogWidget->setWindowTitle(QApplication::translate("ctkErrorLogWidget", "Log messages", nullptr));
        ShowAllEntryButton->setText(QApplication::translate("ctkErrorLogWidget", "&All", nullptr));
        ShowErrorEntryButton->setText(QApplication::translate("ctkErrorLogWidget", "&Errors", nullptr));
        ShowWarningEntryButton->setText(QApplication::translate("ctkErrorLogWidget", "&Warnings", nullptr));
        ShowInfoEntryButton->setText(QApplication::translate("ctkErrorLogWidget", "&Messages", nullptr));
        ClearButton->setText(QApplication::translate("ctkErrorLogWidget", "&Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctkErrorLogWidget: public Ui_ctkErrorLogWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKERRORLOGWIDGET_H
