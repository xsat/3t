#include "block.h"

Block::Block(const QString &fileName)
    : QGraphicsRectItem()
    , brush()
    , image()
{
    image.load(":/" +fileName);
    brush.setTextureImage(image);
    setImage();
    setPen(QPen(Qt::NoPen));
}

void Block::setImage()
{
    setBrush(brush);
    setRect(image.rect());
}
