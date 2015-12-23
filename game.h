#ifndef GAME_H
#define GAME_H

#include "item.h"
#include "player.h"

#include <QGraphicsView>
#include <QList>

class Window;

class Game : public QGraphicsView
{
public:
    explicit Game(Window *_parent = 0);
private:
    QGraphicsScene *scene;
    QList<Item *> items;
    QList<Player *> players;
    QList<QPointF *> postions;
    void setPostions();
};

#endif // GAME_H
