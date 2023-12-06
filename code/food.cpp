#include <iostream>

#include "food.h"

using namespace std;

//constructor
Food::Food(const string name_, const string type_, const int id_, int quantity_, const double price_) {
    this->name = name_;
    this->type = type_;
    this->id = id_;
    this->qty = quantity_;
    this->price = price_;
}

Food::Food() {
    name = "";
    type = "";
    id = 0;
    qty = 0;
}

//destructor
Food::~Food() {}

//return name
string Food::getName() const {
    //cout << "work on getname" << endl;
    return name;
}

//return type EX: meat, dairy, vegetable
string Food::getType() const {
    //cout << "work on getname" << endl;
    return type;
}

//return item id
int Food::getID() const {
    //cout << "work on getid" << endl;
    return id;
}

//return QTY
int Food::getQTY() const {
    //cout << "work on getQTY" << endl;
    return qty;
}

//return price
double Food::getPrice() const {
    return price;
}



ostream& operator<<(std::ostream& os, const Food& food) {
    os << "Name: " << food.name << ", Type: " << food.type << ", ID: " << food.id << ", QTY: " << food.qty << ", Price: " << food.price;
    return os;
}

