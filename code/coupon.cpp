#include "coupon.h"

using namespace std;

Coupon::Coupon(const string& name, double discount, const string& expirationDate)
    : name(name), discount(discount), expirationDate(expirationDate) {}

string Coupon::getName() const {
    return name;
}

void Coupon::setName(const string& name) {
    this->name = name; // Set the name of the coupon
}

double Coupon::getDiscount() const {
    return discount;
}

string Coupon::getExpirationDate() const {
    return expirationDate;
}
