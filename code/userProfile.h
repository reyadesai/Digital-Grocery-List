#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <string>
#include <vector>
#include "coupon.h" 
#include "allergen.h"

class UserProfile {
public:
    UserProfile(const std::string& name);

    std::string getName() const;
    void setName(const std::string& name);
    
    void showCoupons();
    void addCoupon(const Coupon& coupon);
    std::vector<Coupon> getCoupons() const;
    void removeCoupon(const Coupon& coupon);
    
    // Allergen-related functions
    void addAllergen(const Allergen& allergen);
    void removeAllergen(const Allergen& allergen);
    std::vector<Allergen> getAllergens() const;
    void showAllergens();
    
    void editAllergens();
 
    void editCoupons();

    

private:
    std::string name;
    std::vector<Coupon> userCoupons;
    std::vector<Allergen> userAllergens; // Vector to store allergens
};

#endif
