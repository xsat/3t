#ifndef NEW_H
#define NEW_H

#include "button.h"

class New : public Button
{
public:
    New(const QString &fileName, Menu *menu);
protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *);
};

#endif // NEW_H
