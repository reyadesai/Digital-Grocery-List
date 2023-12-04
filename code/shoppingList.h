#ifndef SHOPPINGLIST_H
#define SHOPPINGLIST_H
#include "coupon.h"
#include <string>
#include <vector>
#include "userProfile.h"

using namespace std;

class ShoppingList {
public:
    ShoppingList();  //initializes an empty shopping list
    ShoppingList(const string& name);
    void addItem(const string& itemName, int quantity, double price);
    bool editItem(const string& itemName, int newQuantity);
    bool removeItem(const string& itemName);
    void displayItems() const;
    double calculateTotalPrice() const;
    static vector<string> getSavedShoppingLists(); // Static function to get saved shopping lists
    void addToShoppingList(UserProfile );
    void removeFromShoppingList();
    void displayShoppingList();
    void editShoppingList();
    double applyCoupons(const std::vector<Coupon>& userCoupons);
private:
    struct ShoppingItem {
        string name;
        int quantity;
        double price;
        
    };
private:
    std::vector<ShoppingItem> items;
};

#endif
