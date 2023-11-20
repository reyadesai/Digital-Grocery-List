#include <iostream>
#include <string>
#include "food.h"
#include "catalog.h"
#include "display.h"
using namespace std;

int main() {
    Food* testBase = catalog::generateCatalog();
    

/*
    0.
    Prereqs:
    Constructors
    //display

*/
Display display;

    cout << "Welcome to the Grocery Shopping App!" << endl;
/*
    1.
    Welcome msg
*/
string username;
    cout << "Enter your username: ";
    cin >> username;

    // we need to have a function in the Display class to handle user login
    bool loginSuccess = display.loginUser(username);

    if (!loginSuccess) {
        cout << "User not found. Creating a new profile..." << endl;
        // we need a function in the Display class to handle user registration
        display.registerUser(username);
    }
/*
    2.
    Choose User Profile:
    (user logins)
    //unique coupons per profile
*/

/*
    3.
    After Choosing leads to options:
*/
int option;
    do {
        cout << "Options:" << endl;
        cout << "1. Manage Allergens" << endl;
        cout << "2. Manage Coupons" << endl;
        cout << "3. Browse Catalog" << endl;  
        cout << "4. Confirm and Proceed" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> option;
        switch (option) {
            case 1:
                // 3.1 Manage Allergens
                display.showAllergens();
                display.editAllergens();
                break;

            case 2:
                // 3.2 Manage Coupons
                display.showCoupons();
                // Add logic to edit coupons if needed
                break;

            case 3:
                // 3.3 Browse Catalog
                int browseOption;
                cout << "Options for Browsing Catalog:" << endl;
                cout << "1. Alphabetically" << endl;
                cout << "2. By Price" << endl;
                cout << "Enter your choice: ";
                cin >> browseOption;

                if (browseOption == 1) {
                    // Browse Alphabetically
                    display.browseCatalogAlphabetically(); //gotta implement these fxns accordingly in the display class
                } else if (browseOption == 2) {
                    // Browse By Price
                    display.browseCatalogByPrice();
                } else {
                    cout << "Invalid option. Please try again." << endl;
                }
                break;

            case 4:
                // 3.4 Confirm and Proceed
                display.selectStore(); // gotta implement this function in Display class
                display.manageLists(); // gotta implement the logic for managing lists
                display.checkout();     // gotta implement the logic for checkout
                break;

            case 5:
                //  Quit
                cout << "Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (option != 4);

    return 0;

}

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


    
    