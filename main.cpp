#include <iostream>
#include <string>
#include "food.h"
#include "catalog.h"
using namespace std;

int main () {

    Food* testBase = catalog::generateCatalog();
    

    for(int i = 0; i < 32; i++) {

        cout << testBase[i].getName() << " : " << testBase[i].getType() << " : " << testBase[i].getID() << " : " << testBase[i].getQTY() << " : " << testBase[i].getPrice() << endl;


    }


    return 0;

}