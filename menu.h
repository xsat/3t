#ifndef MENU_H
#define MENU_H

#include "new.h"
#include "exit.h"
#include <QGraphicsView>

class Window;

class Menu : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Menu(Window *_parent = 0);
    void setMenu();
    void setGame();
private:
    Window *window;
    QGraphicsScene *scene;
    New *newButtom;
    Exit *exitButtom;
};

#endif // MENU_H
