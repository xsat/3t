#include "button.h"
#include "menu.h"

Button::Button(const QString &fileName, Menu *menu)
    : Block(fileName + ".png")
    , menu(menu)
    , brush()
{
    setCursor(QCursor(Qt::PointingHandCursor));
    brush.setTextureImage(QImage(":/" + fileName + "-hover.png"));
    setFlag(ItemIsFocusable, true);
    setAcceptHoverEvents(true);
}

void Button::setImage()
{
    Block::setImage(brush);
}

void Button::hoverEnterEvent(QGraphicsSceneHoverEvent *)
{
    qDebug() << "Button::hoverEnterEvent(QGraphicsSceneHoverEvent *)";
    setImage();
}

void Button::hoverLeaveEvent(QGraphicsSceneHoverEvent *)
{
    qDebug() << "Button::hoverLeaveEvent(QGraphicsSceneHoverEvent *)";
    Block::setImage();
}
