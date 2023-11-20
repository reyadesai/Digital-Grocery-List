#include <iostream>
#include <iomanip>
#include <string>
#include "food.cpp"
#include "catalog.cpp"
#include "coupon.cpp"
#include "userProfile.cpp"
// #include "display.cpp"
// #include "browse.cpp"
#include <vector>
using namespace std;

int main() {
    Food* testBase = catalog::generateCatalog();

/*
    0.
    Prereqs:
    Constructors
*/
Display display;

    cout << "Welcome to the Grocery Shopping App!" << endl;

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