#ifndef ITEM_H
#define ITEM_H

#include "block.h"
#include <QCursor>

class Item : public Block
{
public:
    enum Status {
        Active = 1,
        Deactive = 2
    };
    Item(const QString &fileName);
    void setZero();
    void setCross();
    void setActive();
    void setDeactive();
    void setStatus(Status status);
protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *);
private:
    QBrush brush;
    Status status;
};

#endif // ITEM_H
