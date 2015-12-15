#ifndef GAME_H
#define GAME_H

#include "item.h"

#include <QGraphicsView>
#include <QList>

class Window;

class Game : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Game(Window *_parent = 0);
private:
    QGraphicsScene *scene;
    QList<Item *> items;
};

#endif // GAME_H
