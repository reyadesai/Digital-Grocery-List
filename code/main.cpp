#include <iostream>
#include <string>
#include "food.h"
#include "catalog.h"
//#include "display.h"
#include "userProfile.h"
#include "allergen.h"
#include "login.h"
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
        cout << "3. Choose Store" << endl;  
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

    } while(option != 4);
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


 // Display the catalog
  /*
    cout << "Catalog:" << endl;

   
    UserProfile userProfile("User1"); 

    char userInput;
    
 vector<Coupon> coupons;
    do {

        for (int i = 0; i < 35; ++i) {
            // Use fixed and setprecision to display prices with two decimal places
            cout << testBase[i].getName() << " - $" << fixed << setprecision(2) << testBase[i].getPrice() << endl;
        }
       

        // Get coupon information from the user
        string couponName;
        double couponDiscount;
        string couponExpirationDate;

        cout << "Enter coupon information:" << endl;
        cout << "Coupon Name: " << endl;
        cout << endl;
     
        getline(cin, couponName);
     
cout << couponName;
        cout << "Discount Percentage: ";
        cin >> couponDiscount;
        cin.ignore();
        cout << "Expiration Date (YYYY-MM-DD): ";
        cin >> couponExpirationDate;
        cin.ignore();
        // Create a coupon
        Coupon coupon(couponName, couponDiscount, couponExpirationDate);

        // Save the coupon in the vector
        coupons.push_back(coupon);

        // Display coupon information
        cout << "\nCoupon Information:" << endl;
        cout << "Name: " << coupon.getName() << endl;
        cout << "Discount: " << coupon.getDiscount() << "%" << endl;
        cout << "Expiration Date: " << coupon.getExpirationDate() << endl;

        // Add the coupon to the user's profile
        userProfile.addCoupon(coupon);

        // Get the item the user wants to apply the coupon to
        cout << "Enter the name of the item to apply the coupon to: " << endl;
   
        string itemName;
        getline(cin, itemName);

        // Find the item in the catalog
        int itemIndex = -1;
        for (int i = 0; i < 35; ++i) {
            if (testBase[i].getName() == itemName) {
                itemIndex = i;
                break;
            }
        }

        // Apply the coupon to the specified item
        if (itemIndex != -1) {
            double discountAmount = coupon.getDiscount() / 100.0;
            double discountedPrice = (testBase[itemIndex].getPrice()) - (testBase[itemIndex].getPrice() * (discountAmount));

            // Update the price for the specified item
            testBase[itemIndex].setPrice(discountedPrice);

            // Display the updated catalog
            cout << "Updated Catalog:" << endl;
            for (int i = 0; i < 35; ++i) {
                cout << testBase[i].getName() << " - $" << fixed << setprecision(2) << testBase[i].getPrice() << endl;
            }
        } else {
            cout << "Item not found in the catalog." << endl;
        }

        cout << "Do you want to add another coupon? (Enter 'y' or 'Y' to continue): " << endl;
        cin >> userInput;
        cin.ignore();
    } while (userInput == 'y' || userInput == 'Y');

    // Display all user's coupons before exiting
    vector<Coupon> userCoupons = userProfile.getCoupons();
    cout << "All User Coupons:" << endl;
    for (const auto& coupon : userCoupons) {
        cout << "Name: " << coupon.getName() << ", Discount: " << coupon.getDiscount() << "%, Expiration Date: " << coupon.getExpirationDate() << endl;
    }

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
return 0;
}


    