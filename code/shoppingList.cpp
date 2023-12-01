#include "shoppingList.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream> 

using namespace std;

ShoppingList::ShoppingList() : items() {
    // Initialize an empty shopping list
}

ShoppingList::ShoppingList(const string& name) : items() {
    // Initialize a shopping list with a name
}
void ShoppingList::addItem(const string& itemName, int quantity, double price) {
    // Add an item to the shopping list
    ShoppingItem item;
    item.name = itemName;
    item.quantity = quantity;
    item.price = price;
    items.push_back(item);
}

bool ShoppingList::editItem(const string& itemName, int newQuantity) {
    for (ShoppingItem& item : items) {
        if (item.name == itemName) {
            item.quantity = newQuantity;
            return true;
        }
    }
    return false;  // if item not found
}

bool ShoppingList::removeItem(const string& itemName) {
    auto item = items.begin();
    while (item != items.end()) {
        if (item->name == itemName) {
            item = items.erase(item);
            return true;
        } else {
            ++item;
        }
    }
    return false;  // if item not found
}

void ShoppingList::displayItems() const {
    for (const ShoppingItem& item : items) {
        cout << "Item: " << item.name << ", Quantity: " << item.quantity << ", Price: $" << item.price << endl;
    }
}

double ShoppingList::calculateTotalPrice() const {
    double totalPrice = 0.0;
    for (const ShoppingItem& item : items) {
        totalPrice += item.price * item.quantity;
    }
    return totalPrice;
}
void ShoppingList::addToShoppingList(UserProfile inProf) {


    cout << "Add an Item to the Shopping List:" << endl;

    string itemName;
    int quantity;
    double price;

    cout << "Enter item name: ";
    cin >> itemName;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter price: ";
    cin >> price;

    addItem(itemName, quantity, price);
    cout << "Item added to the list." << endl;

    for(unsigned i = 0; i < (inProf.getAllergens()).size(); i++) {
        if(itemName == ((inProf.getAllergens()).at(i)).getName()) {
            cout << "Warning, you'll die Gency, dont do it ur allergic" << endl;
        }
    }

}

void ShoppingList::displayShoppingList() {
    cout << "Shopping List:" << endl;
    displayItems();
}

void ShoppingList::removeFromShoppingList() {
    
    // Allow the user to remove an item from the list
    string itemName;

    cout << "Enter item name to remove: ";
    cin >> itemName;

    if (removeItem(itemName)) {
        cout << "Item removed from the list." << endl;
    } 
    else {
        cout << "Item not found in the list." << endl;
    }
    
}

void ShoppingList::editShoppingList() {
    string itemName;
    int newQuantity;

    cout << "Enter item name to edit: ";
    cin >> itemName;
    cout << "Enter new quantity: ";
    cin >> newQuantity;


    if (editItem(itemName, newQuantity)) {
        if(newQuantity == 0) {
            removeItem(itemName);
        }
        cout << "Item updated successfully." << endl;
    } 
    else {
        cout << "Item not found in the list." << endl;
    }
}
