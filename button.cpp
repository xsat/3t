#include "button.h"
#include "menu.h"

Button::Button(const QString &fileName, Menu *menu)
    : Block(fileName + ".png")
    , menu(menu)
    , brush()
    , image()
{
    setCursor(QCursor(Qt::PointingHandCursor));
    image.load(":/" + fileName + "-hover.png");
    brush.setTextureImage(image);

    setFlag(ItemIsFocusable, true);
    setAcceptHoverEvents(true);
}

void Button::setImage()
{
    setBrush(brush);
    setRect(image.rect());
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
