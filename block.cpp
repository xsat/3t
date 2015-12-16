#include "block.h"

Block::Block(const QString &fileName)
    : QGraphicsRectItem()
    , brush()
{
    brush.setTextureImage(QImage(":/" +fileName));
    setImage();
    setPen(QPen(Qt::NoPen));
}

void Block::setImage()
{
    setImage(brush);
}

void Block::setImage(QBrush &brush)
{
    setBrush(brush);
    setRect(brush.textureImage().rect());
}

