#ifndef CATALOG_H
#define CATALOG_H

using namespace std;

#include "food.h"

class catalog : Food {

    public:
    static Food* generateCatalog();

};

#endif