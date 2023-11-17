#include "display.h"
#include "allergen.h" 
#include "shoppingList.h"
#include "coupon.h"
#include "userProfile.h"
#include "food.h"
#include "catalog.h"
#include <iostream>
#include <fstream>
#include <algorithm>
Display::Display() {
    // Initialize user data, available stores..
    userProfiles = {UserProfile("User1"), UserProfile("User2")};
    userAllergens = {Allergen("Allergen1"), Allergen("Allergen2")};
    userCoupons = {Coupon(std::string("Coupon1"), 0.1), Coupon(std::string("Coupon2"), 0.2)};
    ShoppingList selectedList;
    selectedList.loadFromDisk();

    selectedStore = "";
    currentShoppingList = ShoppingList(); // Initializes an empty shopping list
}

// ... (rest of the Display class fxns needa be added)

Display::~Display() {
    
   
}
void Display::saveUserProfiles() {
    ofstream outFile("user_profiles.txt");

    if (outFile.is_open()) {
        for (const UserProfile& profile : userProfiles) {
            outFile << "Profile Name: " << profile.getName() << endl;
            
            vector<Coupon> userCoupons = profile.getCoupons();
            outFile << "User Coupons: ";
            for (const Coupon& coupon : userCoupons) {
                outFile << coupon.getName() << ", " << coupon.getDiscount() << "; ";
            }
            outFile << endl;

            // Save user allergens
            vector<Allergen> userAllergens = profile.getAllergens();
            outFile << "User Allergens: ";
            for (const Allergen& allergen : userAllergens) {
                outFile << allergen.getName() << "; ";
            }
            outFile << endl;

            outFile << "-----------------------------" << endl;
        }
        outFile.close();
        cout << "User profiles saved successfully." << endl;
    } else {
        cout << "Error: Unable to save user profiles." << endl;
    }
}
void Display::saveAllergens() {
    
    ofstream outFile("user_allergens.txt");

    if (outFile.is_open()) {
        for (const Allergen& allergen : userAllergens) {
            outFile << allergen.getName() << endl;
        }
        outFile.close();
        cout << "Allergens saved successfully." << endl;
    } else {
        cout << "Error: Unable to save allergens." << endl;
    }
}

void Display::saveCoupons() {
    
    ofstream outFile("user_coupons.txt");

    if (outFile .is_open()) {
        for (const Coupon& coupon : userCoupons) {
            outFile << coupon.getName() << " " << coupon.getDiscount() << " " << coupon.getExpirationDate() << endl;
        }
        outFile.close();
        cout << "Coupons saved successfully." << endl;
    } else {
        cout << "Error: Unable to save coupons." << endl;
    }
}


void Display::showProfile() {
    // Display user's profile
    showProfileData();
}

void Display::editProfile() {
   
    editProfileData();
}

void Display::showAllergens() {
    // Display user's allergies
    for (const Allergen& allergen : userAllergens) {
        cout << allergen.getName() << ", ";
    }
    cout << endl;
}

void Display::editAllergens() {
   int choice;
    do {
        cout << "Edit Allergens:" << endl;
        cout << "1. Add a new allergen" << endl;
        cout << "2. Remove an allergen" << endl;
        cout << "3. Back to main menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string newAllergenName;
            cout << "Enter the new allergen: ";
            cin >> newAllergenName;
            userAllergens.push_back(Allergen(newAllergenName));
            cout << "Allergen added successfully." << endl;
        } else if (choice == 2) {
            if (!userAllergens.empty()) {
                int allergenChoice;
                cout << "Select an allergen to remove:" << endl;
                for (size_t i = 0; i < userAllergens.size(); ++i) {
                    cout << i + 1 << ". " << userAllergens[i].getName() << endl;
                }
                cout << "Enter the number of the allergen to remove: ";
                cin >> allergenChoice;

                if (allergenChoice >= 1 && allergenChoice <= static_cast<int>(userAllergens.size())) {
                    userAllergens.erase(userAllergens.begin() + allergenChoice - 1);
                    cout << "Allergen removed successfully." << endl;
                } else {
                    cout << "Invalid allergen choice. Please try again." << endl;
                }
            } else {
                cout << "No allergens to remove." << endl;
            }
        } else if (choice != 3) {
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);
}

void Display::showCoupons() {
    for (const Coupon& coupon : userCoupons) {
        cout << "Coupon Name: " << coupon.getName() << endl;
        cout << "Discount: " << coupon.getDiscount() << "%" << endl;
        cout << "Expiration Date: " << coupon.getExpirationDate() << endl;
        cout << "-------------------------" << endl;
    }
}

void Display::editCoupons() {
   if (userCoupons.empty()) {
        cout << "No coupons available to edit." << endl;
    } else {
        int choice;

        do {
            cout << "Edit Coupons Data:" << endl;
            cout << "1. Add a new coupon" << endl;
            cout << "2. Edit an existing coupon" << endl;
            cout << "3. Remove a coupon" << endl;
            cout << "4. Back to main menu" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                string couponName;
                double discount;
                cout << "Enter the new coupon name: ";
                cin.ignore();
                getline(cin, couponName);
                cout << "Enter the discount percentage (ex. 10.0 for 10%): ";
                cin >> discount;

                userCoupons.push_back(Coupon(std::string(couponName), discount / 100.0));

                cout << "Coupon added successfully." << endl;
            } else if (choice == 2) {
                if (userCoupons.empty()) {
                    cout << "No coupons available to edit." << endl;
                } else {
                    cout << "Select a coupon to edit:" << endl;
                    for (size_t i = 0; i < userCoupons.size(); ++i) {
                        cout << i + 1 << ". " << userCoupons[i].getName() << endl;
                    }
                    cout << "Enter the coupon number to edit: ";
                    int couponNumber;
                    cin >> couponNumber;
                    if (couponNumber > 0 && couponNumber <= userCoupons.size()) {
                        string updatedName;
                        double updatedDiscount;
                        cout << "Enter the updated coupon name: ";
                        cin.ignore();
                        getline(cin, updatedName);
                        cout << "Enter the updated discount percentage (ex. 10.0 for 10%): ";
                        cin >> updatedDiscount;

                        userCoupons[couponNumber - 1] = Coupon(updatedName, updatedDiscount / 100.0);
                        cout << "Coupon updated successfully." << endl;
                    } else {
                        cout << "Invalid coupon number. Please try again." << endl;
                    }
                }
            } else if (choice == 3) {
                if (userCoupons.empty()) {
                    cout << "No coupons available to remove." << endl;
                } else {
                    cout << "Select a coupon to remove:" << endl;
                    for (size_t i = 0; i < userCoupons.size(); ++i) {
                        cout << i + 1 << ". " << userCoupons[i].getName() << endl;
                    }
                    cout << "Enter the coupon number to remove: ";
                    int couponNumber;
                    cin >> couponNumber;
                    if (couponNumber > 0 && couponNumber <= userCoupons.size()) {
                        userCoupons.erase(userCoupons.begin() + couponNumber - 1);
                        cout << "Coupon removed successfully." << endl;
                    } else {
                        cout << "Invalid coupon number. Please try again." << endl;
                    }
                }
            } else if (choice != 4) {
                cout << "Invalid choice. Please try again." << endl;
            }
        } while (choice != 4);
    }
}
void Display::addCoupon(const std::string& name, double discount, const std::string& expirationDate) {
    Coupon newCoupon(name, discount, expirationDate);
    userCoupons.push_back(newCoupon);
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
            // Allow the user to edit 
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
            // Allow the user to remove 
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
    // Display
    displayShoppingList();
    calculateTotalPrice();
}

void Display::saveList() {
    // Save the shopping list
    saveShoppingList();
}

void Display::exit() {
    // Exit 
}


    void Display::showProfileData() {
    // Display user's profile details
    for (const UserProfile& profile : userProfiles) {
        cout << "User Profile: " << profile.getName() << endl;
        
        
        // Print user coupons
        vector<Coupon> userCoupons = profile.getCoupons();
        cout << "User Coupons: ";
        for (const Coupon& coupon : userCoupons) {
            cout << coupon.getName() << " (Discount: " << coupon.getDiscount() << "), ";
        }
        cout << endl;

        // Print user allergens
        vector<Allergen> userAllergens = profile.getAllergens();
        cout << "User Allergens: ";
        for (const Allergen& allergen : userAllergens) {
            cout << allergen.getName() << ", ";
        }
        cout << endl;

        cout << "-----------------------------" << endl;
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
            string newProfileName;
            cout << "Enter the new profile name: ";
            cin >> newProfileName;
            UserProfile newProfile(newProfileName);
            userProfiles.push_back(newProfile);
            cout << "Profile added successfully." << endl;
        } else if (choice == 2) {
            string profileName;
            cout << "Enter the profile name to edit: ";
            cin >> profileName;
            auto it = find_if(userProfiles.begin(), userProfiles.end(), [&profileName](const UserProfile& profile) {
                return profile.getName() == profileName;
            });

            if (it != userProfiles.end()) {
                string updatedProfileName;
                cout << "Enter the updated profile name: ";
                cin >> updatedProfileName;
                it->setName(updatedProfileName);
                cout << "Profile updated successfully." << endl;
            } else {
                cout << "Profile not found." << endl;
            }
        } else if (choice == 3) {
            string profileName;
            cout << "Enter the profile name to remove: ";
            cin >> profileName;
            auto it = find_if(userProfiles.begin(), userProfiles.end(), [&profileName](const UserProfile& profile) {
                return profile.getName() == profileName;
            });
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
    for (const Allergen& allergen : userAllergens) {
        cout << "Allergen: " << allergen.getName() << endl;
    }
}
void Display::editAllergensData() {
   for (Allergen& allergen : userAllergens) {
        // Prompt the user for the updated allergy information
        cout << "Edit Allergen: " << allergen.getName() << endl;
        string updatedAllergen;
        cout << "Enter the updated allergen information: ";
        cin >> updatedAllergen;
        
        // Update the allergen with the new information
        allergen.setName(updatedAllergen);
    }
}

void Display::showCouponsData() {
    // Show user's coupon details
    for (const Coupon& coupon : userCoupons) {
        cout << "Coupon: " << coupon.getName() << " - Discount: " << coupon.getDiscount() * 100 << "%" << endl;
    }
}

void Display::editCouponsData() {
    for (Coupon& coupon : userCoupons) {
        // Prompt the user for the updated coupon information
        cout << "Edit Coupon: " << coupon.getName() << endl;
        string updatedCoupon;
        cout << "Enter the updated coupon information: ";
        cin >> updatedCoupon;
        
        // Update  coupon with the new information
        coupon.setName(updatedCoupon);
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
   // load and display the names of saved shopping lists
    vector<string> savedLists = ShoppingList::getSavedShoppingLists();
    
    cout << "Saved Shopping Lists:" << endl;
    for (const string& listName : savedLists) {
        cout << listName << endl;
    }
}

void Display::selectShoppingList() {
    // allow the user to select a saved shopping list
    cout << "Enter the name of the shopping list you want to select: ";
    string selectedListName;
    cin >> selectedListName;

    // retrieve and display the selected shopping list's details
    ShoppingList selectedList(selectedListName);
    selectedList.loadFromDisk();
    selectedList.displayItems();
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
    
    ofstream outFile("shopping_list.txt");

    if (outFile.is_open()) {
        currentShoppingList.saveToFile(outFile);
        outFile.close();
        cout << "Shopping list saved successfully." << endl;
    } else {
        cout << "Error: Unable to save the shopping list." << endl;
    }
}

