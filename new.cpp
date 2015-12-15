#include "new.h"
#include "menu.h"

New::New(const QString &fileName, Menu *menu)
    : Button(fileName, menu)
{
}

void New::mousePressEvent(QGraphicsSceneMouseEvent *)
{
    qDebug() << "New::mousePressEvent(QGraphicsSceneMouseEvent *)";
    menu->setGame();
}
