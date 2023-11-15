#include "shoppingList.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream> 

using namespace std;

vector<string> ShoppingList::savedShoppingLists; // Define the static member variable

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

void ShoppingList::saveToFile(ofstream& outFile) const {
    for (const ShoppingItem& item : items) {
        outFile << item.name << " " << item.quantity << " " << item.price << endl;
    }
}

void ShoppingList::loadFromDisk() {
   ifstream inputFile("shopping_list.txt");
    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            istringstream iss(line);
            string itemName;
            int quantity;
            double price;
            if (iss >> itemName >> quantity >> price) {
                addItem(itemName, quantity, price);
            }
        }

        inputFile.close();
    } else {
        cerr << "Error: Could not open shopping_list.txt" << endl;
    }
}
vector<string> ShoppingList::getSavedShoppingLists() {
    // Return the list of saved shopping list names
    return savedShoppingLists;
}