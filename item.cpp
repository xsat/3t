#include "item.h"
#include "game.h"

Item::Item(const QString &fileName, Game *game)
    : Block(fileName + "-zero.png")
    , game(game)
    , brush()
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

void Item::mousePressEvent(QGraphicsSceneMouseEvent *)
{
    qDebug() << "Item::mousePressEvent(QGraphicsSceneMouseEvent *)";
    setDeactive();

    Status status = game->act();

    if (status == Zero) {
        setZero();
    } else if (status == Cross) {
        setCross();
    }
}
