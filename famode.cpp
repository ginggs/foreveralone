#include "famode.h"
#include <QtCore/QFile>
#include <QtCore/QDebug>

famode::famode(QObject *parent) : QObject(parent) {
    qDebug() << "* famode::famode";
}

void famode::enable() {
    qDebug() << "* famode::enable";
    QFile ab("/var/opt/rovio/angrybirdsfreemagic/settings.lua");
    ab.open(QIODevice::WriteOnly | QIODevice::Text);
    ab.write("NFC = { \"40:98:4E:23:AD:C2\" , \"40:98:4E:23:AD:C3\" , \"40:98:4E:23:AD:C4\" } ");
    ab.close();
}

void famode::disable() {
    qDebug() << "* famode::disable";
    QFile::remove("/var/opt/rovio/angrybirdsfreemagic/settings.lua");
}
