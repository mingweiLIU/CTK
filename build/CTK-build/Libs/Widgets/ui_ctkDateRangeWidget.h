/********************************************************************************
** Form generated from reading UI file 'ctkDateRangeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKDATERANGEWIDGET_H
#define UI_CTKDATERANGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctkDateRangeWidget
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *AnyDateRadioButton;
    QRadioButton *TodayRadioButton;
    QRadioButton *YesterdayRadioButton;
    QRadioButton *LastWeekRadioButton;
    QRadioButton *LastMonthRadioButton;
    QRadioButton *SelectRangeRadioButton;
    QFrame *DateRangeWidget;
    QVBoxLayout *verticalLayout_2;
    QDateTimeEdit *StartDate;
    QDateTimeEdit *EndDate;

    void setupUi(QWidget *ctkDateRangeWidget)
    {
        if (ctkDateRangeWidget->objectName().isEmpty())
            ctkDateRangeWidget->setObjectName(QString::fromUtf8("ctkDateRangeWidget"));
        ctkDateRangeWidget->resize(167, 186);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ctkDateRangeWidget->sizePolicy().hasHeightForWidth());
        ctkDateRangeWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ctkDateRangeWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        AnyDateRadioButton = new QRadioButton(ctkDateRangeWidget);
        AnyDateRadioButton->setObjectName(QString::fromUtf8("AnyDateRadioButton"));

        verticalLayout->addWidget(AnyDateRadioButton);

        TodayRadioButton = new QRadioButton(ctkDateRangeWidget);
        TodayRadioButton->setObjectName(QString::fromUtf8("TodayRadioButton"));

        verticalLayout->addWidget(TodayRadioButton);

        YesterdayRadioButton = new QRadioButton(ctkDateRangeWidget);
        YesterdayRadioButton->setObjectName(QString::fromUtf8("YesterdayRadioButton"));

        verticalLayout->addWidget(YesterdayRadioButton);

        LastWeekRadioButton = new QRadioButton(ctkDateRangeWidget);
        LastWeekRadioButton->setObjectName(QString::fromUtf8("LastWeekRadioButton"));

        verticalLayout->addWidget(LastWeekRadioButton);

        LastMonthRadioButton = new QRadioButton(ctkDateRangeWidget);
        LastMonthRadioButton->setObjectName(QString::fromUtf8("LastMonthRadioButton"));

        verticalLayout->addWidget(LastMonthRadioButton);

        SelectRangeRadioButton = new QRadioButton(ctkDateRangeWidget);
        SelectRangeRadioButton->setObjectName(QString::fromUtf8("SelectRangeRadioButton"));
        SelectRangeRadioButton->setChecked(true);

        verticalLayout->addWidget(SelectRangeRadioButton);

        DateRangeWidget = new QFrame(ctkDateRangeWidget);
        DateRangeWidget->setObjectName(QString::fromUtf8("DateRangeWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DateRangeWidget->sizePolicy().hasHeightForWidth());
        DateRangeWidget->setSizePolicy(sizePolicy1);
        DateRangeWidget->setFrameShape(QFrame::StyledPanel);
        DateRangeWidget->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(DateRangeWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        StartDate = new QDateTimeEdit(DateRangeWidget);
        StartDate->setObjectName(QString::fromUtf8("StartDate"));
        StartDate->setCalendarPopup(true);

        verticalLayout_2->addWidget(StartDate);

        EndDate = new QDateTimeEdit(DateRangeWidget);
        EndDate->setObjectName(QString::fromUtf8("EndDate"));
        EndDate->setCalendarPopup(true);

        verticalLayout_2->addWidget(EndDate);


        verticalLayout->addWidget(DateRangeWidget);


        retranslateUi(ctkDateRangeWidget);
        QObject::connect(AnyDateRadioButton, SIGNAL(toggled(bool)), DateRangeWidget, SLOT(setHidden(bool)));

        QMetaObject::connectSlotsByName(ctkDateRangeWidget);
    } // setupUi

    void retranslateUi(QWidget *ctkDateRangeWidget)
    {
        ctkDateRangeWidget->setWindowTitle(QApplication::translate("ctkDateRangeWidget", "Date Range", nullptr));
        AnyDateRadioButton->setText(QApplication::translate("ctkDateRangeWidget", "Any Date", nullptr));
        TodayRadioButton->setText(QApplication::translate("ctkDateRangeWidget", "Today", nullptr));
        YesterdayRadioButton->setText(QApplication::translate("ctkDateRangeWidget", "Yesterday", nullptr));
        LastWeekRadioButton->setText(QApplication::translate("ctkDateRangeWidget", "Last Week", nullptr));
        LastMonthRadioButton->setText(QApplication::translate("ctkDateRangeWidget", "Last Month", nullptr));
        SelectRangeRadioButton->setText(QApplication::translate("ctkDateRangeWidget", "Select Range", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctkDateRangeWidget: public Ui_ctkDateRangeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKDATERANGEWIDGET_H
