#include "game.h"
#include "window.h"

Game::Game(Window *_parent)
    : QGraphicsView(_parent)
    , scene(new QGraphicsScene())
    , items()
    , players()
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

    Player *player1 = new Player("player");
    player1->setPos(50, 20);
    scene->addItem(player1);
    players.append(player1);

    Player *player2 = new Player("player");
    player2->setPos(280, 20);
    scene->addItem(player2);
    players.append(player2);
    player2->setDeactive();

    setBackgroundBrush(QBrush(QImage(":/game-background.png")));
}

void Game::setPostions()
{
    postions.append(new QPointF(60, 120));
    postions.append(new QPointF(160, 120));
    postions.append(new QPointF(260, 120));
    postions.append(new QPointF(60, 220));
    postions.append(new QPointF(160, 220));
    postions.append(new QPointF(260, 220));
    postions.append(new QPointF(60, 320));
    postions.append(new QPointF(160, 320));
    postions.append(new QPointF(260, 320));
}
