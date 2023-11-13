#ifndef SHOPPINGLIST_H
#define SHOPPINGLIST_H

#include <string>
#include <vector>

class ShoppingList {
public:
    ShoppingList();  //initializes an empty shopping list
    ShoppingList(const std::string& name);
    void addItem(const std::string& itemName, int quantity, double price);
    bool editItem(const std::string& itemName, int newQuantity);
    bool removeItem(const std::string& itemName);
    void displayItems() const;
    double calculateTotalPrice() const;
    void saveToFile(std::ofstream& outFile) const;
    void loadFromDisk();
    static std::vector<std::string> getSavedShoppingLists(); // Static function to get saved shopping lists

private:
    struct ShoppingItem {
        std::string name;
        int quantity;
        double price;
        
    };

    std::vector<ShoppingItem> items;
    static std::vector<std::string> savedShoppingLists; 
};

#endif
