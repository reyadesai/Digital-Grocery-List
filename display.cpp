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
    int choice;
    do {
        cout << "Choose a Store:" << endl;
        cout << "1. Store1" << endl;
        cout << "2. Store2" << endl;
        cout << "3. Back to main menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            selectedStore = "Store1";
            cout << "Store1 selected." << endl;
        } else if (choice == 2) {
            selectedStore = "Store2";
            cout << "Store2 selected." << endl;
        } else if (choice != 3) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);
}

void Display::createList() {
    int choice;
    currentShoppingList = ShoppingList(); // Initialize an empty shopping list

    do {
        cout << "Create a New Shopping List:" << endl;
        cout << "1. Add an item to the list" << endl;
        cout << "2. Back to main menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string itemName;
            int quantity;
            double price;

            cout << "Enter item name: ";
            cin >> itemName;
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Enter price: ";
            cin >> price;

            currentShoppingList.addItem(itemName, quantity, price);
            cout << "Item added to the list." << endl;
        } else if (choice != 2) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 2);
}

void Display::createList() {
    int choice;
    currentShoppingList = ShoppingList(); // Initialize an empty shopping list

    do {
        cout << "Create a New Shopping List:" << endl;
        cout << "1. Add an item to the list" << endl;
        cout << "2. Back to the main menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string itemName;
            int quantity;
            double price;

            cout << "Enter item name: ";
            cin >> itemName;
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Enter price: ";
            cin >> price;

            currentShoppingList.addItem(itemName, quantity, price);
            cout << "Item added to the list." << endl;
        } else if (choice != 2) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 2);
}


void Display::editList() {
    int choice;
    do {
        cout << "Edit the Shopping List:" << endl;
        cout << "1. Add an item to the list" << endl;
        cout << "2. Edit an item in the list" << endl;
        cout << "3. Remove an item from the list" << endl;
        cout << "4. Back to the main menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Allow the user to add items to the list
            string itemName;
            int quantity;
            double price;

            cout << "Enter item name: ";
            cin >> itemName;
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Enter price: ";
            cin >> price;

            currentShoppingList.addItem(itemName, quantity, price);
            cout << "Item added to the list." << endl;
        } else if (choice == 2) {
            // Allow the user to edit an existing item in the list
            string itemName;
            int newQuantity;

            cout << "Enter item name to edit: ";
            cin >> itemName;
            cout << "Enter new quantity: ";
            cin >> newQuantity;

            if (currentShoppingList.editItem(itemName, newQuantity)) {
                cout << "Item updated successfully." << endl;
            } else {
                cout << "Item not found in the list." << endl;
            }
        } else if (choice == 3) {
            // Allow the user to remove an item from the list
            string itemName;

            cout << "Enter item name to remove: ";
            cin >> itemName;

            if (currentShoppingList.removeItem(itemName)) {
                cout << "Item removed from the list." << endl;
            } else {
                cout << "Item not found in the list." << endl;
            }
        } else if (choice != 4) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
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
    
    int choice;
    do {
        cout << "Edit Profile Data:" << endl;
        cout << "1. Add a new profile" << endl;
        cout << "2. Edit existing profile" << endl;
        cout << "3. Remove a profile" << endl;
        cout << "4. Back to main menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string newProfile;
            cout << "Enter the new profile: ";
            cin >> newProfile;
            userProfiles.push_back(newProfile);
            cout << "Profile added successfully." << endl;
        } else if (choice == 2) {
            string profileName;
            cout << "Enter the profile to edit: ";
            cin >> profileName;
            auto it = find(userProfiles.begin(), userProfiles.end(), profileName);
            if (it != userProfiles.end()) {
                string updatedProfile;
                cout << "Enter the updated profile information: ";
                cin >> updatedProfile;
                *it = updatedProfile;
                cout << "Profile updated successfully." << endl;
            } else {
                cout << "Profile not found." << endl;
            }
        } else if (choice == 3) {
            string profileName;
            cout << "Enter the profile to remove: ";
            cin >> profileName;
            auto it = find(userProfiles.begin(), userProfiles.end(), profileName);
            if (it != userProfiles.end()) {
                userProfiles.erase(it);
                cout << "Profile removed successfully." << endl;
            } else {
                cout << "Profile not found." << endl;
            }
        } else if (choice != 4) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
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

    int choice;
    do {
        cout << "Add an Item to the Shopping List:" << endl;
        cout << "1. Add an item to the list" << endl;
        cout << "2. Back to main menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string itemName;
            int quantity;
            double price;

            cout << "Enter item name: ";
            cin >> itemName;
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Enter price: ";
            cin >> price;

            currentShoppingList.addItem(itemName, quantity, price);
            cout << "Item added to the list." << endl;
        } else if (choice != 2) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 2);
}

void Display::showSavedLists() {
    // Show saved shopping lists
    //we need to work on this
    cout << "Saved Shopping Lists: List1, List2" << endl;
}

void Display::selectShoppingList() {
    // Allow the user to select a saved shopping list
    //need to work on this 
    cout << "Selected Shopping List: List1" << endl;
}

void Display::editShoppingList() {
   int choice;
    do {
        cout << "Edit the Shopping List:" << endl;
        cout << "1. Add an item to the list" << endl;
        cout << "2. Edit an item in the list" << endl;
        cout << "3. Remove an item from the list" << endl;
        cout << "4. Back to main menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Allow the user to add items to the list
            string itemName;
            int quantity;
            double price;

            cout << "Enter item name: ";
            cin >> itemName;
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Enter price: ";
            cin >> price;

            currentShoppingList.addItem(itemName, quantity, price);
            cout << "Item added to the list." << endl;
        } else if (choice == 2) {
            // Allow the user to edit an existing item in the list
            string itemName;
            int newQuantity;

            cout << "Enter item name to edit: ";
            cin >> itemName;
            cout << "Enter new quantity: ";
            cin >> newQuantity;

            if (currentShoppingList.editItem(itemName, newQuantity)) {
                cout << "Item updated successfully." << endl;
            } else {
                cout << "Item not found in the list." << endl;
            }
        } else if (choice == 3) {
            // Allow the user to remove an item from the list
            string itemName;

            cout << "Enter item name to remove: ";
            cin >> itemName;

            if (currentShoppingList.removeItem(itemName)) {
                cout << "Item removed from the list." << endl;
            } else {
                cout << "Item not found in the list." << endl;
            }
        } else if (choice != 4) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
}

void Display::displayShoppingList() {
    cout << "Shopping List:" << endl;
    currentShoppingList.displayItems();
}

void Display::calculateTotalPrice() {
    // Calculate the total price of items in the shopping list
    double totalPrice = currentShoppingList.calculateTotalPrice();
    cout << "Total Price: $" << totalPrice << endl;
}

void Display::saveShoppingList() {
    // Implement the logic to save the list to a file
    ofstream outFile("shopping_list.txt");

    if (outFile.is_open()) {
        currentShoppingList.saveToFile(outFile);
        outFile.close();
        cout << "Shopping list saved successfully." << endl;
    } else {
        cout << "Error: Unable to save the shopping list." << endl;
    }
}

