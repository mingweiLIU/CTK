#pragma once
#include <QObject>
#include <QDebug>

enum DTBPLUGINTYPE
{
	MODULE,
	RIBBONPAGE,
	DOCKWIDGET,
	COMMONWIDGET
};


class iDTBPlugin
{
public:
	DTBPLUGINTYPE getDTBPluginType() {
		return this->m_dtbPluginType;
	}

	virtual QWidget* getWidget() {
		qDebug() << "The DTBuilderPlugin virtual function getWidget() have not been implementd!";
		return nullptr;
	}

protected:
	DTBPLUGINTYPE m_dtbPluginType;
};

Q_DECLARE_INTERFACE(iDTBPlugin, "interface_DTBPlugin")