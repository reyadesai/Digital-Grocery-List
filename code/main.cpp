#include <iostream>
#include <string>
#include "food.h"
#include "catalog.h"
//#include "display.h"
#include "userProfile.h"
#include "allergen.h"
#include "login.h"
#include "shoppingList.h"
using namespace std;

int main() {
    Food* testBase = catalog::generateCatalog();
    UserProfile Gency("Gency");
    Allergen Beef("beef");
    Gency.addAllergen(Beef);
    Coupon Special("Special", 50);
    Gency.addCoupon(Special);
    login test;
    //cout << (Gency.getAllergens()).at(0).getName() << endl;
    
/*
    0.
    Prereqs:
    Constructors
    //display

*/
    cout << "Welcome to the Grocery Shopping App!" << endl << endl;
/*
    1.
    Welcome msg
*/
    //asks for username and doesn't let you pass until u get it right
    int key;
    do {
        key = test.userLogin();
        if(key == 1) {
            return 0;
        }
    } while(key != 0);

/*
    2.
    Choose User Profile:
    (user logins)
    //unique coupons per profile
*/
int option;
    do {
        cout << "Options:" << endl;
        cout << "1. Manage Allergens" << endl;
        cout << "2. Manage Coupons" << endl;  
        cout << "3. Next" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> option;
        cout << endl;
        if(option == 1) {
            cout << "Current Allergens:" << endl;
            Gency.showAllergens();
            Gency.editAllergens();
        
        }
        if(option == 2) {
            cout << "Current Coupons" << endl;
            //get help on getname
            Gency.showCoupons();
            Gency.editCoupons();
        }
        if(option == 4) {
            return 0;
        }

    } while(option != 3);
    
/*
    3.
    After Choosing leads to options:
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
string whiteName;
string listName;
cout << "Enter Name of List: "; 
getline(cin, whiteName);
cout << endl;
getline(cin, listName);
ShoppingList testList(listName);
cout << "Catalog: " << endl;
cout << "---------" << endl;

for(unsigned i = 0; i < 32; i++) {
    cout << i << ". " << testBase[i].getName() << endl;
}
cout << endl;
/*
    6.1
    Browse Catalog:
    ->type
        ->Alphabetically
        ->Price
        ->etc.
*/
ShoppingList TestList;
int input;
do {
    cout << "Options: " << endl;
    cout << "1. Browse Catalog" << endl;
    cout << "2. Add to Basket" << endl;
    cout << "3. Remove from Basket" << endl;
    cout << "4. Edit Quantity" << endl;
    cout << "5. View Basket" << endl;
    cout << "6. Checkout" << endl;
    cout << "7. Quit " << endl;
    cout << "Enter your choice: ";
    cin >> input;
    cout << endl;
    if(input == 1) {
        for(unsigned i = 0; i < 32; i++) {
        cout << i << ". " << testBase[i].getName() << endl;
        }
    cout << endl;
    }
    // Inside the loop where you add items to the shopping list (in main.cpp)
    if(input == 2) {
        //need to add check allergens`
        TestList.addToShoppingList(Gency);
        cout << endl;
    }

    if(input == 3) {
        TestList.removeFromShoppingList();
        cout << endl;
    }
    if(input == 4) {
        TestList.editShoppingList();
        cout << endl;
    }
    if(input == 5) {
        TestList.displayShoppingList();
        cout << endl;
    }
    if(input == 7) {
        return 0;
    }

}while(input != 6);
//TestList.applyCoupons(Gency.getCoupons()); // Apply user's coupons
int basePrice = TestList.calculateTotalPrice();
double tax = TestList.calculateTotalPrice() * .08;
double disc = TestList.applyCoupons(Gency.getCoupons());
cout << "Disc: " << disc << endl;
cout << "Total: " << basePrice << " + " << tax << " = " << basePrice - (basePrice * disc/100) + tax << endl;
return 0;
}
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


 // Display the catalog
  /*
    cout << "Catalog:" << endl;

   
  
    // Clean up the allocated memory for the catalog
    delete[] testBase;
/*
        7.3 Auto Saves List
*/

/*
    8.
    Back To New Lists and start all over
    loop it and quit with q
*/



    