// display.h
#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
#include <vector>
#include "food.h"

class Display {
public:
    Display();
    ~Display();

    void showProfile(); // Show user's profile
    void editProfile(); // Edit user's profile
    void showAllergens(); // Show user's allergens
    void editAllergens(); // Edit user's allergens
    void showCoupons(); // Show user's coupons
    void editCoupons(); // Edit user's coupons
    void chooseStore(); // Choose a store for shopping
    void createList(); // Create a new shopping list
    void editList(); // Edit the saved shopping list
    void showList(); // Display the shopping list
    void saveList(); // Save the shopping list
    void exit(); // Exit the display

private:
    std::vector<Food> shoppingList;
    std::vector<std::string> userProfiles;
    std::vector<std::string> userAllergens;
    std::vector<std::string> userCoupons;

    // Helper methods for profile, allergens, and coupons
    void showProfileData();
    void editProfileData();
    void showAllergensData();
    void editAllergensData();
    void showCouponsData();
    void editCouponsData();

    // Additional data members for stores, locations, and pricing
    std::string selectedStore;
    std::vector<Food> savedShoppingList;

    // Helper methods for store and shopping list
    void showAvailableStores();
    void createNewList();
    void showSavedLists();
    void editSavedList();
    void calculateTotalPrice();

    // Additional private methods as needed
};

#endif // DISPLAY_H
