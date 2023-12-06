#include <iostream>
#include <string>
#include "food.h"
#include "catalog.h"
#include "userProfile.h"
#include "allergen.h"
#include "login.h"
#include "shoppingList.h"
#include"browse.h"
using namespace std;

int main() {
    Food* testBase = catalog::generateCatalog();
    UserProfile Gency("Gency");
    Allergen Beef("beef");
    Gency.addAllergen(Beef);
    Coupon Special("Special", 50);
    Gency.addCoupon(Special);
    login test;
    string listName;

    cout << "Welcome to the Grocery Shopping App!" << endl << endl;

    int key;
    do {
        key = test.userLogin();
        if(key == 1) {
            return 0;
        }
    } while(key != 0);


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
            Gency.showCoupons();
            Gency.editCoupons();
        }
        if(option == 4) {
            return 0;
        }

    } while(option != 3);
    

string whiteName;

cout << "Enter Name of List: "; 
getline(cin, whiteName);
cout << endl;
getline(cin, listName);
ShoppingList testList(listName);
cout << "Catalog: " << endl;
cout << "---------" << endl;

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
        Browse dataBase;
        dataBase.showCatalog();
        cout << endl;
    }
    // Inside the loop where you add items to the shopping list (in main.cpp)
    if(input == 2) {
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

int basePrice = TestList.calculateTotalPrice();
double tax = TestList.calculateTotalPrice() * .08;
double disc = TestList.applyCoupons(Gency.getCoupons());
cout << listName << " Checkout" << endl;
cout << "Disc: " << disc << endl;
cout << "Total: " << basePrice << " + " << tax << " = " << basePrice - (basePrice * disc/100) + tax << endl;
delete[] testBase;
return 0;
}




    