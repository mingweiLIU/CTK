/********************************************************************************
** Form generated from reading UI file 'ctkThumbnailLabel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTKTHUMBNAILLABEL_H
#define UI_CTKTHUMBNAILLABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctkThumbnailLabel
{
public:
    QGridLayout *gridLayout;
    QLabel *TextLabel;
    QLabel *PixmapLabel;

    void setupUi(QWidget *ctkThumbnailLabel)
    {
        if (ctkThumbnailLabel->objectName().isEmpty())
            ctkThumbnailLabel->setObjectName(QString::fromUtf8("ctkThumbnailLabel"));
        ctkThumbnailLabel->resize(141, 133);
        gridLayout = new QGridLayout(ctkThumbnailLabel);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        TextLabel = new QLabel(ctkThumbnailLabel);
        TextLabel->setObjectName(QString::fromUtf8("TextLabel"));
        TextLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(TextLabel, 0, 1, 1, 1);

        PixmapLabel = new QLabel(ctkThumbnailLabel);
        PixmapLabel->setObjectName(QString::fromUtf8("PixmapLabel"));
        PixmapLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(PixmapLabel, 1, 1, 1, 1);

        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(1, 1);

        retranslateUi(ctkThumbnailLabel);

        QMetaObject::connectSlotsByName(ctkThumbnailLabel);
    } // setupUi

    void retranslateUi(QWidget *ctkThumbnailLabel)
    {
        ctkThumbnailLabel->setWindowTitle(QApplication::translate("ctkThumbnailLabel", "Thumbnail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctkThumbnailLabel: public Ui_ctkThumbnailLabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTKTHUMBNAILLABEL_H
