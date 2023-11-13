#include "coupon.h"



Coupon::Coupon(const string& name, double discount, const string expirationDate)
: name(name), discount(discount), expirationDate(expirationDate) {}

string Coupon::getName() const {
    return name;
}

double Coupon::getDiscount() const {
    return discount;
}

string Coupon::getExpirationDate() const {
    return expirationDate;
}