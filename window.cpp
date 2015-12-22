#include "window.h"

Window::Window(QWidget *_parent)
    : QMainWindow(_parent)
    , menu(new Menu(this))
    , game(new Game(this))
{
    setFixedSize(400, 400);
    setWindowTitle("tic tac toe");
    setGame();
}

void Window::setMenu()
{
    qDebug() << "Window::setMenu()";
    game->hide();
    menu->show();
}

void Window::setGame()
{
    qDebug() << "Window::setGame()";
    menu->hide();
    game->show();
}
