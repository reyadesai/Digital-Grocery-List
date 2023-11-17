#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
#include <string>
#include <vector>
#include "shoppingList.h"
#include "coupon.h"
#include "allergen.h"
#include "userProfile.h"

using namespace std;

class Display {
public:
    Display();
    //~Display();

    void showProfile();
    void editProfile();
    void showAllergens();
    void editAllergens();
    void showCoupons();
    void editCoupons();
    void addCoupon(const string& name, double discount, const string& expirationDate);
    void chooseStore();
    void createList();
    void editList();
    void showList();
    void saveList();
    void exit();
    void saveUserProfiles();
    void saveAllergens();
    void saveCoupons();
    void saveShoppingList();
    

private:
    // Private member functions and data members

    void showProfileData();
    void editProfileData();
    void showAllergensData();
    void editAllergensData();
    void showCouponsData();
    void editCouponsData();
    void showAvailableStores();
    void selectStore();
    void addToShoppingList();
    void showSavedLists();
    void selectShoppingList();
    void editShoppingList();
    void displayShoppingList();
    void calculateTotalPrice();
    

    // Private data members
    vector<UserProfile> userProfiles;
    vector<Allergen> userAllergens;
    vector<Coupon> userCoupons;
    string selectedStore;
    ShoppingList currentShoppingList;
};

#endif // DISPLAY_H
