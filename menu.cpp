#include "menu.h"
#include "window.h"

Menu::Menu(Window *_parent)
    : QGraphicsView(_parent)
    , window(_parent)
    , scene(new QGraphicsScene())
    , newButtom(new New("new", this))
    , exitButtom(new Exit("exit",  this))
{
    setFixedSize(_parent->size());
    setSceneRect(60, -10, 500, 500);
    scene->addItem(newButtom);
    scene->addItem(exitButtom);
    setScene(scene);
    newButtom->setPos(280, 250);
    exitButtom->setPos(280, 310);
    setBackgroundBrush(QBrush(QImage(":/menu-background.png")));
}

void Menu::setMenu()
{
    window->setMenu();
}

void Menu::setGame()
{
    window->setGame();
}
