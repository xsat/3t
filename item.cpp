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
    setStatus(Active);
    QPen pen(Qt::SolidLine);
    pen.setColor(QColor(255, 0, 0));
    setPen(pen);

    setCursor(QCursor(Qt::PointingHandCursor));
    setBrush(QBrush());
}

void Item::setDeactive()
{
    setStatus(Deactive);
    setPen(QPen(Qt::NoPen));
    setCursor(QCursor(Qt::ArrowCursor));
}

void Item::setStatus(Status status)
{
    status = status;
}
