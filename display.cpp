#include "display.h"

Display::Display() {
    // Initialize user data, available stores, etc.
    userProfiles = {"User1", "User2"};
    userAllergens = {"Allergen1", "Allergen2"};
    userCoupons = {"Coupon1", "Coupon2"};

    selectedStore = "";
    currentShoppingList = ShoppingList(); // Initialize an empty shopping list
}

Display::~Display() {
    // Cleanup and save user data, shopping lists, etc.
    saveUserProfiles();
    saveAllergens();
    saveCoupons();
    // Save shopping lists to a file, database, etc.
}

void Display::showProfile() {
    // Display user's profile
    showProfileData();
}

void Display::editProfile() {
    // Edit user's profile
    editProfileData();
}

void Display::showAllergens() {
    // Display user's allergens
    showAllergensData();
}

void Display::editAllergens() {
    // Edit user's allergens
    editAllergensData();
}

void Display::showCoupons() {
    // Display user's coupons
    showCouponsData();
}

void Display::editCoupons() {
    // Edit user's coupons
    editCouponsData();
}

void Display::chooseStore() {
    // Choose a store for shopping
    showAvailableStores();
    selectStore();
}

void Display::createList() {
    // Create a new shopping list
    currentShoppingList = ShoppingList(); // Start with an empty shopping list
    addToShoppingList();
}

void Display::editList() {
    // Edit the saved shopping list
    showSavedLists();
    selectShoppingList();
    editShoppingList();
}

void Display::showList() {
    // Display the shopping list
    displayShoppingList();
    calculateTotalPrice();
}

void Display::saveList() {
    // Save the shopping list
    saveShoppingList();
}

void Display::exit() {
    // Exit the display
}

void Display::showProfileData() {
    // Display user's profile details
    for (const string& profile : userProfiles) {
        cout << "User Profile: " << profile << endl;
    }
}

void Display::editProfileData() {
    for (string& profile : userProfiles) {
        // Prompt the user for the updated profile information
        cout << "Edit Profile: " << profile << endl;
        string updatedProfile;
        cout << "Enter the updated profile information: ";
        cin >> updatedProfile;
        
        // Update the profile with the new information
        profile = updatedProfile;
    }
}

void Display::showAllergensData() {
    // Show user's allergen preferences
    for (const string& allergen : userAllergens) {
        cout << "Allergen: " << allergen << endl;
    }
}

void Display::editAllergensData() {
   for (string& allergen : userAllergens) {
        // Prompt the user for the updated allergen information
        cout << "Edit Allergen: " << allergen << endl;
        string updatedAllergen;
        cout << "Enter the updated allergen information: ";
        cin >> updatedAllergen;
        
        // Update the allergen with the new information
        allergen = updatedAllergen;
    }
}

void Display::showCouponsData() {
    // Show user's coupon details
    for (const string& coupon : userCoupons) {
        cout << "Coupon: " << coupon << endl;
    }
}

void Display::editCouponsData() {
    for (string& coupon : userCoupons) {
        // Prompt the user for the updated coupon information
        cout << "Edit Coupon: " << coupon << endl;
        string updatedCoupon;
        cout << "Enter the updated coupon information: ";
        cin >> updatedCoupon;
        
        // Update the coupon with the new information
        coupon = updatedCoupon;
    }
}

void Display::showAvailableStores() {
    // Display available stores for selection
    cout << "Available Stores: Store1, Store2" << endl;
}

void Display::selectStore() {
    // Allow the user to select a store
    cout << "Selected Store: Store1" << endl;
    selectedStore = "Store1";
}

void Display::addToShoppingList() {
    // Allow the user to add items to the shopping list
    currentShoppingList.addItem("Item1", 5, 2.99);
    currentShoppingList.addItem("Item2", 3, 1.49);
}

void Display::showSavedLists() {
    // Show saved shopping lists
    cout << "Saved Shopping Lists: List1, List2" << endl;
}

void Display::selectShoppingList() {
    // Allow the user to select a saved shopping list
    cout << "Selected Shopping List: List1" << endl;
}

void Display::editShoppingList() {
    // Allow the user to edit the selected shopping list
    currentShoppingList.editItem("Item1", 4);
    currentShoppingList.removeItem("Item2");
}

void Display::displayShoppingList() {
    // Display the items in the shopping list
    currentShoppingList.displayItems();
}

void Display::calculateTotalPrice() {
    // Calculate the total price of items in the shopping list
    double totalPrice = currentShoppingList.calculateTotalPrice();
    cout << "Total Price: $" << totalPrice << endl;
}

void Display::saveShoppingList() {
    // Save the current shopping list to a file, database, etc.
    // Implement the logic to save the list
    // currentShoppingList.saveToFile("shopping_list.txt");
}
