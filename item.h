#ifndef ITEM_H
#define ITEM_H

#include "block.h"
#include "status.h"

#include <QCursor>
#include <QPoint>
#include <QtCore>

class Game;

class Item : public Block
{
public:
    Item(const QString &fileName, Game *game);
    void setZero();
    void setCross();
    void setActive();
    void setDeactive();
    void setPosition(int i);
    void setPosition(int xpos, int ypos);
    QPoint getPosition() const;
protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *);
private:
    Game *game;
    QBrush brush;
    QPoint position;
};

#endif // ITEM_H
