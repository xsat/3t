#ifndef ITEM_H
#define ITEM_H

#include "block.h"

class Item : public Block
{
public:
    Item(const QString &fileName);
};

#endif // ITEM_H
