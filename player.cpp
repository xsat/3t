#include "player.h"

Player::Player(const QString &fileName)
    : Block(fileName + ".png")
    , brush()
    , status()
    , active(true)
{
    brush.setTextureImage(QImage(":/" + fileName + "-deactive.png"));
}

void Player::setActive()
{
    active = true;
    Block::setImage();
}

void Player::setDeactive()
{
    active = false;
    Block::setImage(brush);
}

bool Player::getActive() const
{
    return active;
}

void Player::setStatus(Status s)
{
    status = s;
}

Status Player::getStatus() const
{
    return status;
}
