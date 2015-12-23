#include "item.h"

Item::Item(const QString &fileName)
    : Block(fileName + "-zero.png")
    , brush()
{
    brush.setTextureImage(QImage(":/" + fileName + "-cross.png"));
    setActive();
}

void Item::setZero()
{
    Block::setImage(brush);
}

void Item::setCross()
{
    Block::setImage();
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
    setZero();
}
