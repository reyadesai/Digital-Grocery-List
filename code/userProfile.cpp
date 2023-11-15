#include "userProfile.h"

using namespace std;

UserProfile::UserProfile(const string& name) : name(name) {
}

string UserProfile::getName() const {
    return name;
}

void UserProfile::setName(const string& name) {
    this->name = name;
}

void UserProfile::addCoupon(const Coupon& coupon) {
    userCoupons.push_back(coupon);
}

void UserProfile::removeCoupon(const Coupon& coupon) {
    for (auto it = userCoupons.begin(); it != userCoupons.end(); ++it) {
        if (it->getName() == coupon.getName()) {
            userCoupons.erase(it);
            break;
        }
    }
}

vector<Coupon> UserProfile::getCoupons() const {
    return userCoupons;
}

void UserProfile::addAllergen(const Allergen& allergen) {
    userAllergens.push_back(allergen);
}

void UserProfile::removeAllergen(const Allergen& allergen) {
    for (auto it = userAllergens.begin(); it != userAllergens.end(); ++it) {
        if (it->getName() == allergen.getName()) {
            userAllergens.erase(it);
            break;
        }
    }
}

vector<Allergen> UserProfile::getAllergens() const {
    return userAllergens;
}
