#include "game.h"
#include "window.h"

Game::Game(Window *_parent)
    : QGraphicsView(_parent)
    , scene(new QGraphicsScene())
    , items()
{
    setFixedSize(_parent->size());
    setSceneRect(60, -10, 500, 500);
    setScene(scene);

    for (int i = 0; i < 9; i++) {
        Item * item = new Item("game-o.png");
        items.append(item);
        scene->addItem(item);
        item->setPos(i * 31, i * 31);

        qDebug() << "i: " << i;
    }

    setBackgroundBrush(QBrush(QImage(":/game-background.png")));
}
