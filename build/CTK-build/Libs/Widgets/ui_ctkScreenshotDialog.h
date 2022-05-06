/********************************************************************************
** Form generated from reading UI file 'ctkScreenshotDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKSCREENSHOTDIALOG_H
#define UI_CTKSCREENSHOTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include "ctkDoubleSpinBox.h"
#include "ctkPathLineEdit.h"

QT_BEGIN_NAMESPACE

class Ui_ctkScreenshotDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *CountDownLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *ImageFullNameLabel;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *ButtonBox;
    QSpacerItem *verticalSpacer;
    QGroupBox *OptionGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *DirectoryLabel;
    ctkPathLineEdit *DirectoryPathLineEdit;
    QLabel *ImageNameLabel;
    QLineEdit *ImageNameLineEdit;
    QLabel *ImageVersionNumberLabel;
    QSpinBox *ImageVersionNumberSpinBox;
    QRadioButton *ScaleFactorRadioButton;
    ctkDoubleSpinBox *ScaleFactorSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *OutputResolutionRadioButton;
    QSpinBox *WidthSpinBox;
    QLabel *xLabel;
    QSpinBox *HeightSpinBox;
    QToolButton *LockAspectToolButton;
    QLabel *OverwriteLabel;
    QCheckBox *OverwriteCheckBox;
    QLabel *DelayLabel;
    QSpinBox *DelaySpinBox;

    void setupUi(QDialog *ctkScreenshotDialog)
    {
        if (ctkScreenshotDialog->objectName().isEmpty())
            ctkScreenshotDialog->setObjectName(QString::fromUtf8("ctkScreenshotDialog"));
        ctkScreenshotDialog->resize(579, 334);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ctkScreenshotDialog->sizePolicy().hasHeightForWidth());
        ctkScreenshotDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ctkScreenshotDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CountDownLabel = new QLabel(ctkScreenshotDialog);
        CountDownLabel->setObjectName(QString::fromUtf8("CountDownLabel"));

        horizontalLayout->addWidget(CountDownLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ImageFullNameLabel = new QLabel(ctkScreenshotDialog);
        ImageFullNameLabel->setObjectName(QString::fromUtf8("ImageFullNameLabel"));

        horizontalLayout->addWidget(ImageFullNameLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ButtonBox = new QDialogButtonBox(ctkScreenshotDialog);
        ButtonBox->setObjectName(QString::fromUtf8("ButtonBox"));
        ButtonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(ButtonBox);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        OptionGroupBox = new QGroupBox(ctkScreenshotDialog);
        OptionGroupBox->setObjectName(QString::fromUtf8("OptionGroupBox"));
        OptionGroupBox->setEnabled(false);
        sizePolicy.setHeightForWidth(OptionGroupBox->sizePolicy().hasHeightForWidth());
        OptionGroupBox->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(OptionGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        DirectoryLabel = new QLabel(OptionGroupBox);
        DirectoryLabel->setObjectName(QString::fromUtf8("DirectoryLabel"));

        gridLayout_2->addWidget(DirectoryLabel, 0, 0, 1, 1);

        DirectoryPathLineEdit = new ctkPathLineEdit(OptionGroupBox);
        DirectoryPathLineEdit->setObjectName(QString::fromUtf8("DirectoryPathLineEdit"));

        gridLayout_2->addWidget(DirectoryPathLineEdit, 0, 1, 1, 1);

        ImageNameLabel = new QLabel(OptionGroupBox);
        ImageNameLabel->setObjectName(QString::fromUtf8("ImageNameLabel"));

        gridLayout_2->addWidget(ImageNameLabel, 1, 0, 1, 1);

        ImageNameLineEdit = new QLineEdit(OptionGroupBox);
        ImageNameLineEdit->setObjectName(QString::fromUtf8("ImageNameLineEdit"));

        gridLayout_2->addWidget(ImageNameLineEdit, 1, 1, 1, 1);

        ImageVersionNumberLabel = new QLabel(OptionGroupBox);
        ImageVersionNumberLabel->setObjectName(QString::fromUtf8("ImageVersionNumberLabel"));

        gridLayout_2->addWidget(ImageVersionNumberLabel, 2, 0, 1, 1);

        ImageVersionNumberSpinBox = new QSpinBox(OptionGroupBox);
        ImageVersionNumberSpinBox->setObjectName(QString::fromUtf8("ImageVersionNumberSpinBox"));

        gridLayout_2->addWidget(ImageVersionNumberSpinBox, 2, 1, 1, 1);

        ScaleFactorRadioButton = new QRadioButton(OptionGroupBox);
        ScaleFactorRadioButton->setObjectName(QString::fromUtf8("ScaleFactorRadioButton"));
        ScaleFactorRadioButton->setChecked(true);

        gridLayout_2->addWidget(ScaleFactorRadioButton, 3, 0, 1, 1);

        ScaleFactorSpinBox = new ctkDoubleSpinBox(OptionGroupBox);
        ScaleFactorSpinBox->setObjectName(QString::fromUtf8("ScaleFactorSpinBox"));
        ScaleFactorSpinBox->setDecimalsOption(ctkDoubleSpinBox::FixedDecimals);
        ScaleFactorSpinBox->setDecimals(1);
        ScaleFactorSpinBox->setMinimum(0.500000000000000);
        ScaleFactorSpinBox->setMaximum(5.000000000000000);
        ScaleFactorSpinBox->setSingleStep(0.500000000000000);
        ScaleFactorSpinBox->setValue(1.000000000000000);

        gridLayout_2->addWidget(ScaleFactorSpinBox, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        OutputResolutionRadioButton = new QRadioButton(OptionGroupBox);
        OutputResolutionRadioButton->setObjectName(QString::fromUtf8("OutputResolutionRadioButton"));

        horizontalLayout_2->addWidget(OutputResolutionRadioButton);

        WidthSpinBox = new QSpinBox(OptionGroupBox);
        WidthSpinBox->setObjectName(QString::fromUtf8("WidthSpinBox"));
        WidthSpinBox->setMinimum(1);

        horizontalLayout_2->addWidget(WidthSpinBox);

        xLabel = new QLabel(OptionGroupBox);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(xLabel);

        HeightSpinBox = new QSpinBox(OptionGroupBox);
        HeightSpinBox->setObjectName(QString::fromUtf8("HeightSpinBox"));
        HeightSpinBox->setMinimum(1);

        horizontalLayout_2->addWidget(HeightSpinBox);

        LockAspectToolButton = new QToolButton(OptionGroupBox);
        LockAspectToolButton->setObjectName(QString::fromUtf8("LockAspectToolButton"));
        LockAspectToolButton->setEnabled(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/unlock.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/Icons/lock.png"), QSize(), QIcon::Normal, QIcon::On);
        LockAspectToolButton->setIcon(icon);
        LockAspectToolButton->setCheckable(true);
        LockAspectToolButton->setChecked(false);

        horizontalLayout_2->addWidget(LockAspectToolButton);


        gridLayout_2->addLayout(horizontalLayout_2, 4, 0, 1, 2);

        OverwriteLabel = new QLabel(OptionGroupBox);
        OverwriteLabel->setObjectName(QString::fromUtf8("OverwriteLabel"));

        gridLayout_2->addWidget(OverwriteLabel, 5, 0, 1, 1);

        OverwriteCheckBox = new QCheckBox(OptionGroupBox);
        OverwriteCheckBox->setObjectName(QString::fromUtf8("OverwriteCheckBox"));
        OverwriteCheckBox->setEnabled(false);

        gridLayout_2->addWidget(OverwriteCheckBox, 5, 1, 1, 1);

        DelayLabel = new QLabel(OptionGroupBox);
        DelayLabel->setObjectName(QString::fromUtf8("DelayLabel"));

        gridLayout_2->addWidget(DelayLabel, 6, 0, 1, 1);

        DelaySpinBox = new QSpinBox(OptionGroupBox);
        DelaySpinBox->setObjectName(QString::fromUtf8("DelaySpinBox"));
        DelaySpinBox->setMaximum(60);

        gridLayout_2->addWidget(DelaySpinBox, 6, 1, 1, 1);


        gridLayout->addWidget(OptionGroupBox, 0, 0, 1, 1);


        retranslateUi(ctkScreenshotDialog);
        QObject::connect(ButtonBox, SIGNAL(rejected()), ctkScreenshotDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ctkScreenshotDialog);
    } // setupUi

    void retranslateUi(QDialog *ctkScreenshotDialog)
    {
        ctkScreenshotDialog->setWindowTitle(QApplication::translate("ctkScreenshotDialog", "Screen Capture Options", nullptr));
        CountDownLabel->setText(QApplication::translate("ctkScreenshotDialog", "0 s", nullptr));
        ImageFullNameLabel->setText(QApplication::translate("ctkScreenshotDialog", "Untitled_0.png", nullptr));
        OptionGroupBox->setTitle(QApplication::translate("ctkScreenshotDialog", "Options", nullptr));
        DirectoryLabel->setText(QApplication::translate("ctkScreenshotDialog", "Folder:", nullptr));
#ifndef QT_NO_TOOLTIP
        DirectoryPathLineEdit->setToolTip(QApplication::translate("ctkScreenshotDialog", "Select a directory in which screen captures will be saved.", nullptr));
#endif // QT_NO_TOOLTIP
        ImageNameLabel->setText(QApplication::translate("ctkScreenshotDialog", "Image name:", nullptr));
#ifndef QT_NO_TOOLTIP
        ImageNameLineEdit->setToolTip(QApplication::translate("ctkScreenshotDialog", "Type in a base-name for the image file, or use the default provided.", nullptr));
#endif // QT_NO_TOOLTIP
        ImageNameLineEdit->setText(QApplication::translate("ctkScreenshotDialog", "Untitled", nullptr));
        ImageVersionNumberLabel->setText(QApplication::translate("ctkScreenshotDialog", "Image version number:", nullptr));
        ScaleFactorRadioButton->setText(QApplication::translate("ctkScreenshotDialog", "Scale factor:", nullptr));
#ifndef QT_NO_TOOLTIP
        ScaleFactorSpinBox->setToolTip(QApplication::translate("ctkScreenshotDialog", "Select an integer scale factor (between 0.5 and 5) for the image file, e.g. a value of \"2\" will save an image twice the size.", nullptr));
#endif // QT_NO_TOOLTIP
        OutputResolutionRadioButton->setText(QApplication::translate("ctkScreenshotDialog", "Output resolution:", nullptr));
#ifndef QT_NO_TOOLTIP
        WidthSpinBox->setToolTip(QApplication::translate("ctkScreenshotDialog", "Width of the screenshot", nullptr));
#endif // QT_NO_TOOLTIP
        WidthSpinBox->setSuffix(QApplication::translate("ctkScreenshotDialog", " px", nullptr));
        xLabel->setText(QApplication::translate("ctkScreenshotDialog", "x", nullptr));
#ifndef QT_NO_TOOLTIP
        HeightSpinBox->setToolTip(QApplication::translate("ctkScreenshotDialog", "Height of the screenshot", nullptr));
#endif // QT_NO_TOOLTIP
        HeightSpinBox->setSuffix(QApplication::translate("ctkScreenshotDialog", " px", nullptr));
#ifndef QT_NO_TOOLTIP
        LockAspectToolButton->setToolTip(QApplication::translate("ctkScreenshotDialog", "Lock/unlock aspect ratio", nullptr));
#endif // QT_NO_TOOLTIP
        OverwriteLabel->setText(QApplication::translate("ctkScreenshotDialog", "Overwrite:", nullptr));
        OverwriteCheckBox->setText(QString());
        DelayLabel->setText(QApplication::translate("ctkScreenshotDialog", "Screenshot delay:", nullptr));
        DelaySpinBox->setSuffix(QApplication::translate("ctkScreenshotDialog", " s", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctkScreenshotDialog: public Ui_ctkScreenshotDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKSCREENSHOTDIALOG_H
