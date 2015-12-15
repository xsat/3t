#ifndef BLOCK_H
#define BLOCK_H

#include <QGraphicsRectItem>
#include <QBrush>
#include <QImage>
#include <QPen>
#include <QDebug>

#include <iostream>

class Block : public QGraphicsRectItem
{
public:
    Block(const QString &fileName);
protected:
    virtual void setImage();
private:
    QBrush brush;
    QImage image;
};

#endif // BLOCK_H
