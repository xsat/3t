#include "game.h"
#include "window.h"

Game::Game(Window *_parent)
    : QGraphicsView(_parent)
    , scene(new QGraphicsScene())
    , items()
    , postions()
{
    setFixedSize(_parent->size());
    setSceneRect(60, -10, 500, 500);
    setScene(scene);
    setPostions();

    for (int i = 0; i < 9; i++) {
        Item *item = new Item("game");
        items.append(item);
        scene->addItem(item);
        item->setPos(*postions.at(i));

        qDebug() << "i: " << i;
    }

    setBackgroundBrush(QBrush(QImage(":/game-background.png")));
}

void Game::setPostions()
{
    postions.append(new QPointF(60, 90));
    postions.append(new QPointF(160, 90));
    postions.append(new QPointF(260, 90));
    postions.append(new QPointF(60, 190));
    postions.append(new QPointF(160, 190));
    postions.append(new QPointF(260, 190));
    postions.append(new QPointF(60, 290));
    postions.append(new QPointF(160, 290));
    postions.append(new QPointF(260, 290));
}
