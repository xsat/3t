#ifndef PLAYER_H
#define PLAYER_H

#include "block.h"
#include "status.h"

class Player : public Block
{
public:
    Player(const QString &fileName);
    void setActive();
    void setDeactive();
    bool getActive() const;
    void setStatus(Status s);
    Status getStatus() const;
private:
    QBrush brush;
    Status status;
    bool active;
};

#endif // PLAYER_H
