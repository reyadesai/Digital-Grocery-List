#include <iostream>
#include <string>
#include "food.h"
#include "catalog.h"
using namespace std;

int main () {

    /*
    Food first = Food("beef", "meat", 141, 9);

    cout << first.getName() << endl;
    cout << first.getType() << endl;
    cout << first.getID() << endl;
    cout << first.getQTY() << endl;
    first.reduceQTY(2);
    */

    Food* testBase = catalog::generateCatalog();
    /*
    cout << "testBase: " << testBase[0].getName() << endl;
    */

    for(int i = 0; i < 32; i++) {

        cout << testBase[i].getName() << " : " << testBase[i].getType() << " : " << testBase[i].getID() << " : " << testBase[i].getQTY() << endl;


    }


    return 0;

}