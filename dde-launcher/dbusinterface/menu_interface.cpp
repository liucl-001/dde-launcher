/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -p showmenu_interface.h:showmenu_interface.cpp -c ShowmenuInterface /home/ph/Team/QtDBusXmlTool/showmenu.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "menu_interface.h"

/*
 * Implementation of interface class ShowmenuInterface
 */

MenuInterface::MenuInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

MenuInterface::~MenuInterface()
{
}

