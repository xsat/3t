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
        Item *item = new Item("game", this);
        items.append(item);
        scene->addItem(item);
        item->setPos(*postions.at(i));
        item->setPosition(i);
    }

    Player *player1 = new Player("player");
    player1->setPos(50, 20);
    player1->setStatus(Zero);
    scene->addItem(player1);
    players.append(player1);

    Player *player2 = new Player("player");
    player2->setPos(280, 20);
    scene->addItem(player2);
    players.append(player2);
    player2->setDeactive();
    player2->setStatus(Cross);

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

Status Game::act()
{
    Player *active;

    if (players[0]->getActive()) {
        active = players[0];
        players[0]->setDeactive();
        players[1]->setActive();
    } else {
        active = players[1];
        players[1]->setDeactive();
        players[0]->setActive();
    }

    if (isWin()) {
        qDebug() << "Game::act() win";
    }

    return active->getStatus();
}

bool Game::isWin() const
{

    return false;
}
