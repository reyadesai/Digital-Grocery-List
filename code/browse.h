#ifndef BROWSE_H
#define BROWSE_H

#include <iostream>
#include <string>
#include <vector>
#include "coupon.h"
#include "catalog.h"
#include "food.h"

class Browse {//needs to be friend of food 
    public:
        Browse();
        ~Browse();
        void showCatalog();
    private:
    
};

#endif
