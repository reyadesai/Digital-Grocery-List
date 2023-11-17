#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
#include <string>
#include <vector>
#include "shoppingList.h"
#include "coupon.h"
#include "allergen.h"
#include "catalog.h"
#include "userProfile.h"
class Display {
public:
    Display();
    ~Display();

    void showProfile();
    void editProfile();
    void showAllergens();
    void editAllergens();
    void showCoupons();
    void editCoupons();
    void addCoupon(const std::string& name, double discount, const std::string& expirationDate);
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
    std::vector<UserProfile> userProfiles;
    std::vector<Allergen> userAllergens;
    std::vector<Coupon> userCoupons;
    std::string selectedStore;
    ShoppingList currentShoppingList;
};

#endif // DISPLAY_H
