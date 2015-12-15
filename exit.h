#ifndef EXIT_H
#define EXIT_H

#include "button.h"
#include <QCoreApplication>

class Exit : public Button
{
public:
    Exit(const QString &fileName, Menu *menu);
protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *);
};

#endif // EXIT_H
