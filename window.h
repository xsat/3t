#ifndef WINDOW_H
#define WINDOW_H

#include "menu.h"
#include "game.h"
#include <QMainWindow>

class Window : public QMainWindow
{
    Q_OBJECT
public:
    explicit Window(QWidget *_parent = 0);
    void setMenu();
    void setGame();
private:
    Menu *menu;
    Game *game;
};

#endif // WINDOW_H
