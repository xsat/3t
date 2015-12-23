#ifndef ITEM_H
#define ITEM_H

#include "block.h"
#include <QCursor>

class Item : public Block
{
public:
    Item(const QString &fileName);
    void setZero();
    void setCross();
    void setActive();
    void setDeactive();
protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *);
private:
    QBrush brush;
};

#endif // ITEM_H
