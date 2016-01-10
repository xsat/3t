#include "item.h"
#include "game.h"

Item::Item(const QString &fileName, Game *game)
    : Block(fileName + "-zero.png")
    , game(game)
    , brush()
    , position()
{
    brush.setTextureImage(QImage(":/" + fileName + "-cross.png"));
    setActive();
}

void Item::setZero()
{
    Block::setImage();
}

void Item::setCross()
{
    Block::setImage(brush);
}

void Item::setActive()
{
    QPen pen(Qt::SolidLine);
    pen.setColor(QColor(255, 0, 0));
    setPen(pen);

    setCursor(QCursor(Qt::PointingHandCursor));
    setBrush(QBrush());
    setEnabled(true);
}

void Item::setDeactive()
{
    setPen(QPen(Qt::NoPen));
    setCursor(QCursor(Qt::ArrowCursor));
    setEnabled(false);
}

void Item::setPosition(int i)
{
    int size = 3;
    position.setX(i - (qFloor(i / size) * size));
    position.setY(qFloor(i / size));
}

void Item::setPosition(int xpos, int ypos)
{
    position.setX(xpos);
    position.setY(ypos);
}

QPoint Item::getPosition() const
{
    return position;
}

void Item::mousePressEvent(QGraphicsSceneMouseEvent *)
{
    qDebug() << "Item::mousePressEvent(QGraphicsSceneMouseEvent *)";
    setDeactive();

    qDebug() << "x: " << position.x();
    qDebug() << "y: " << position.y();

    Status status = game->act();

    if (status == Zero) {
        setZero();
    } else if (status == Cross) {
        setCross();
    }
}
