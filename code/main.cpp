#include <iostream>
#include <string>
#include "food.h"
#include "catalog.h"
using namespace std;

int main() {
    Food* testBase = catalog::generateCatalog();

/*
    0.
    Prereqs:
    Constructors
*/

/*
    1.
    Welcome msg
*/

/*
    2.
    Choose User Profile:
    (user logins)
*/

/*
    3.
    After Choosing leads to two options:
*/

/*
    3.1
    ->Allergens
        -view[getter]
        -edit[setter]
*/
/*
    3.2
    ->Coupons
        -view[getter]
        -edit[setter]
*/

/*
    3.3
    Goes into Confirm
*/

/*
    4.
    Select Store
*/

/*
    5.
    Based on store two options:
    ->New List
    ->Old List
        -pasts List can be copied now
        -adjusts list after(see new List)
*/

/*
    6.
    New List:
*/

/*
    6.1
    Browse Catalog:
    ->type
        ->Alphabetically
        ->Price
        ->etc.
*/

/*
    6.2
    Add from Catalog:
        1. Select Item
        2. Select Quantity
        3. Select Confirm/Add
            ->+ basket quantity
            ->- store quantity
            (Gives Allergen warning)
*/

/*
    6.3 
    Should be able to remove:
        ->remove from basket
            - + store quantity
            - - basket quantity
*/

/*
    7. 
    Checkout:
*/

/*
    7.1 Get Total
        ->Taxes Include
*/

/*
    7.2 Add Coupons
        ->idk bout that yet
*/

/*
        7.3 Auto Saves List
*/

/*
    8.
    Back To New Lists and start all over
    loop it and quit with q
*/


    
    return 0;

}