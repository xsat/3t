#ifndef BUTTON_H
#define BUTTON_H

#include "block.h"
#include <QCursor>

class Menu;

class Button : public Block
{
public:
    Button(const QString &fileName, Menu *menu);
protected:
    Menu *menu;
    virtual void setImage();
    virtual void hoverEnterEvent(QGraphicsSceneHoverEvent *);
    virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent *);
private:
    QBrush brush;
};

#endif // BUTTON_H
