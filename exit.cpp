#include "exit.h"

Exit::Exit(const QString &fileName, Menu *menu)
    : Button(fileName, menu)
{
}

void Exit::mousePressEvent(QGraphicsSceneMouseEvent *)
{
    qDebug() << "Exit::mousePressEvent(QGraphicsSceneMouseEvent *)";
    QCoreApplication::quit();
}
