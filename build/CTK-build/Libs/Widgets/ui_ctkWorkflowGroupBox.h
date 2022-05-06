/********************************************************************************
** Form generated from reading UI file 'ctkWorkflowGroupBox.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKWORKFLOWGROUPBOX_H
#define UI_CTKWORKFLOWGROUPBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ctkCollapsibleButton.h"
#include "ctkDynamicSpacer.h"
#include "ctkFittedTextBrowser.h"

QT_BEGIN_NAMESPACE

class Ui_ctkWorkflowGroupBox
{
public:
    QVBoxLayout *verticalLayout;
    ctkCollapsibleButton *CollapsibleButton;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *ScrollArea;
    QWidget *ScrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QWidget *Widget;
    QVBoxLayout *verticalLayout_4;
    ctkFittedTextBrowser *SubTitleTextBrowser;
    ctkFittedTextBrowser *PreTextBrowser;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *ClientAreaLayout;
    ctkFittedTextBrowser *PostTextBrowser;
    ctkFittedTextBrowser *ErrorTextBrowser;
    ctkDynamicSpacer *DynamicSpacer;

    void setupUi(QWidget *ctkWorkflowGroupBox)
    {
        if (ctkWorkflowGroupBox->objectName().isEmpty())
            ctkWorkflowGroupBox->setObjectName(QString::fromUtf8("ctkWorkflowGroupBox"));
        ctkWorkflowGroupBox->resize(521, 525);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ctkWorkflowGroupBox->sizePolicy().hasHeightForWidth());
        ctkWorkflowGroupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ctkWorkflowGroupBox);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        CollapsibleButton = new ctkCollapsibleButton(ctkWorkflowGroupBox);
        CollapsibleButton->setObjectName(QString::fromUtf8("CollapsibleButton"));
        sizePolicy.setHeightForWidth(CollapsibleButton->sizePolicy().hasHeightForWidth());
        CollapsibleButton->setSizePolicy(sizePolicy);
        CollapsibleButton->setContentsFrameShape(QFrame::StyledPanel);
        CollapsibleButton->setContentsMidLineWidth(0);
        verticalLayout_2 = new QVBoxLayout(CollapsibleButton);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ScrollArea = new QScrollArea(CollapsibleButton);
        ScrollArea->setObjectName(QString::fromUtf8("ScrollArea"));
        ScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ScrollArea->setWidgetResizable(true);
        ScrollAreaWidgetContents = new QWidget();
        ScrollAreaWidgetContents->setObjectName(QString::fromUtf8("ScrollAreaWidgetContents"));
        ScrollAreaWidgetContents->setGeometry(QRect(0, 0, 519, 489));
        verticalLayout_5 = new QVBoxLayout(ScrollAreaWidgetContents);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        Widget = new QWidget(ScrollAreaWidgetContents);
        Widget->setObjectName(QString::fromUtf8("Widget"));
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setContentsMargins(1, 1, 1, 1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        SubTitleTextBrowser = new ctkFittedTextBrowser(Widget);
        SubTitleTextBrowser->setObjectName(QString::fromUtf8("SubTitleTextBrowser"));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        SubTitleTextBrowser->setFont(font);
        SubTitleTextBrowser->setFrameShape(QFrame::Box);

        verticalLayout_4->addWidget(SubTitleTextBrowser);

        PreTextBrowser = new ctkFittedTextBrowser(Widget);
        PreTextBrowser->setObjectName(QString::fromUtf8("PreTextBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PreTextBrowser->sizePolicy().hasHeightForWidth());
        PreTextBrowser->setSizePolicy(sizePolicy1);
        PreTextBrowser->setFrameShape(QFrame::Box);

        verticalLayout_4->addWidget(PreTextBrowser);

        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, -1);
        ClientAreaLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        ClientAreaLayout->setContentsMargins(0, 0, 0, 0);
#endif
        ClientAreaLayout->setObjectName(QString::fromUtf8("ClientAreaLayout"));

        verticalLayout_6->addLayout(ClientAreaLayout);


        verticalLayout_4->addWidget(widget);

        PostTextBrowser = new ctkFittedTextBrowser(Widget);
        PostTextBrowser->setObjectName(QString::fromUtf8("PostTextBrowser"));
        PostTextBrowser->setFrameShape(QFrame::Box);

        verticalLayout_4->addWidget(PostTextBrowser);

        ErrorTextBrowser = new ctkFittedTextBrowser(Widget);
        ErrorTextBrowser->setObjectName(QString::fromUtf8("ErrorTextBrowser"));
        ErrorTextBrowser->setFrameShape(QFrame::Box);

        verticalLayout_4->addWidget(ErrorTextBrowser);


        verticalLayout_5->addWidget(Widget);

        ScrollArea->setWidget(ScrollAreaWidgetContents);

        verticalLayout_2->addWidget(ScrollArea);


        verticalLayout->addWidget(CollapsibleButton);

        DynamicSpacer = new ctkDynamicSpacer(ctkWorkflowGroupBox);
        DynamicSpacer->setObjectName(QString::fromUtf8("DynamicSpacer"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(DynamicSpacer->sizePolicy().hasHeightForWidth());
        DynamicSpacer->setInactiveSizePolicy(sizePolicy2);
        DynamicSpacer->setActive(true);
        DynamicSpacer->setProperty("activate", QVariant(true));

        verticalLayout->addWidget(DynamicSpacer);


        retranslateUi(ctkWorkflowGroupBox);
        QObject::connect(CollapsibleButton, SIGNAL(toggled(bool)), DynamicSpacer, SLOT(setActive(bool)));

        QMetaObject::connectSlotsByName(ctkWorkflowGroupBox);
    } // setupUi

    void retranslateUi(QWidget *ctkWorkflowGroupBox)
    {
        ctkWorkflowGroupBox->setWindowTitle(QApplication::translate("ctkWorkflowGroupBox", "Workflow", nullptr));
        CollapsibleButton->setText(QApplication::translate("ctkWorkflowGroupBox", "Step title", nullptr));
        SubTitleTextBrowser->setDocumentTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class ctkWorkflowGroupBox: public Ui_ctkWorkflowGroupBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKWORKFLOWGROUPBOX_H
