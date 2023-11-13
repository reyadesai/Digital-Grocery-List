#include "coupon.h"

Coupon::Coupon(const std::string& name, double discount, const std::string& expirationDate)
    : name(name), discount(discount), expirationDate(expirationDate) {}

std::string Coupon::getName() const {
    return name;
}

void Coupon::setName(const std::string& name) {
    this->name = name; // Set the name of the coupon
}

double Coupon::getDiscount() const {
    return discount;
}

std::string Coupon::getExpirationDate() const {
    return expirationDate;
}
