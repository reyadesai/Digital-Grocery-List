#include <iostream>
#include <iomanip>
#include <string>
#include "food.cpp"
#include "catalog.cpp"
#include "coupon.cpp"
#include "userProfile.cpp"
#include <vector>
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
// Food price(foodName, foodType, foodID, foodQuantity, foodPrice);
//  Food* catalog = generateCatalog();

    // Display the catalog
       Food* catalog = catalog::generateCatalog();
 // Display the catalog
    cout << "Catalog:\n";
    for (int i = 0; i < 35; ++i) {
        // Use std::fixed and std::setprecision to display prices with two decimal places
        cout << catalog[i].getName() << " - $" << fixed << setprecision(2) << catalog[i].getPrice() << "\n";
    }


    // Get coupon information from the user
    vector<Coupon> coupons;

    // Get coupon information from the user
    string couponName;
    double couponDiscount;
    string couponExpirationDate;

    cout << "\nEnter coupon information:\n";
    cout << "Coupon Name: ";
    cin >> couponName;

    cout << "Discount Percentage: ";
    cin >> couponDiscount;

    cout << "Expiration Date (YYYY-MM-DD): ";
    cin >> couponExpirationDate;

    // Create a coupon
    Coupon coupon(couponName, couponDiscount, couponExpirationDate);

    // Save the coupon in the vector
    coupons.push_back(coupon);

    // Display coupon information
    cout << "\nCoupon Information:\n";
    cout << "Name: " << coupon.getName() << "\n";
    cout << "Discount: " << coupon.getDiscount() << "%\n";
    cout << "Expiration Date: " << coupon.getExpirationDate() << "\n";

    // Add the coupon to the user's profile
    UserProfile userProfile("User1"); // Replace "User1" with the actual user name
    userProfile.addCoupon(coupon);

    // Get the item the user wants to apply the coupon to
    cout << "\nEnter the name of the item to apply the coupon to: ";
    string itemName;
    cin >> itemName;

    // Find the item in the catalog
    int itemIndex = -1;
    for (int i = 0; i < 35; ++i) {
        if (catalog[i].getName() == itemName) {
            itemIndex = i;
            break;
        }
    }

    // Apply the coupon to the specified item
    if (itemIndex != -1) {
    double discountAmount = coupon.getDiscount() / 100.0;
    double discountedPrice = (catalog[itemIndex].getPrice()) - (catalog[itemIndex].getPrice() * (discountAmount));
   
    // Update the price for the specified item
    catalog[itemIndex].setPrice(discountedPrice);

    // Display the updated catalog
    cout << "\nUpdated Catalog:\n";
    for (int i = 0; i < 35; ++i) {
        cout << catalog[i].getName() << " - $" << fixed << setprecision(2) << catalog[i].getPrice() << "\n";
    }
} else {
    cout << "\nItem not found in the catalog.\n";
}

    // Clean up the allocated memory for the catalog
    delete[] catalog;


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