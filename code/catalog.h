#ifndef CATALOG_H
#define CATALOG_H

#include "food.h"

class catalog : Food {
public:
    static Food* generateCatalog();
};

#endif
