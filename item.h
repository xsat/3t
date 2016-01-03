#ifndef ITEM_H
#define ITEM_H

#include "block.h"
#include "status.h"

#include <QCursor>

class Game;

class Item : public Block
{
public:
    Item(const QString &fileName, Game *game);
    void setZero();
    void setCross();
    void setActive();
    void setDeactive();
protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *);
private:
    Game *game;
    QBrush brush;
};

#endif // ITEM_H
