#include "userProfile.h"
#include "iostream"

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

void UserProfile::showAllergens() {
    for(unsigned i = 0; i < userAllergens.size(); i++) {
        cout << (userAllergens.at(i)).getName() << endl;
    }
    cout << endl;
}

void UserProfile::editAllergens() {
    int choice;

    do{
        cout << "Edit Allergens:" << endl;
        cout << "1. Add a new allergen" << endl;
        cout << "2. Remove an allergen" << endl;
        cout << "3. Back to main menu" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        if (choice == 1) {
            string newAllergenName;
            cout << "Enter the new allergen: ";
            cin >> newAllergenName;
            userAllergens.push_back(Allergen(newAllergenName));
            cout << "Allergen added successfully." << endl;
        }
        else if (choice == 2) {
            if (!userAllergens.empty()) {
                int allergenChoice;
                cout << "Select an allergen to remove:" << endl;
                for (size_t i = 0; i < userAllergens.size(); ++i) {
                    cout << i + 1 << ". " << userAllergens[i].getName() << endl << endl;
                }
                cout << "Enter the number of the allergen to remove: ";
                cin >> allergenChoice;

                if (allergenChoice >= 1 && allergenChoice <= static_cast<int>(userAllergens.size())) {
                    userAllergens.erase(userAllergens.begin() + allergenChoice - 1);
                    cout << "Allergen removed successfully." << endl << endl;
                } else {
                    cout << "Invalid allergen choice. Please try again." << endl;
                }
            } 
            else {
                cout << "No allergens to remove." << endl;
            }
        } 
        else if (choice != 3) {
            cout << "Invalid choice. Please try again." << endl;
        }
            
    } while(choice != 3);
}

void UserProfile::showCoupons() {
    for(unsigned i = 0; i < userCoupons.size(); i++) {
        cout << "Name: "<< (userCoupons.at(i)).getName() << " Discount: -" << (userCoupons.at(i)).getDiscount() << "%" << endl; 
    }
    cout << endl;
}

void UserProfile::editCoupons() {
    if (userCoupons.empty()) {
        cout << "No coupons available to edit." << endl;
    } else {
        int choice;

        do {
            cout << "Edit Coupons Data:" << endl;
            cout << "1. Add a new coupon" << endl;
            cout << "2. Edit an existing coupon" << endl;
            cout << "3. Remove a coupon" << endl;
            cout << "4. Back to main menu" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            cout << endl;
            if (choice == 1) {
                string couponName;
                double discount;
                cout << "Enter the new coupon name: ";
                cin.ignore();
                getline(cin, couponName);
                cout << endl;
                cout << "Enter the discount percentage (ex. 10.0 for 10%): ";
                cin >> discount;
                cout << endl;
                userCoupons.push_back(Coupon(string(couponName), discount));

                cout << "Coupon added successfully." << endl << endl;
            } 
            else if (choice == 2) {
                if (userCoupons.empty()) {
                    cout << "No coupons available to edit." << endl;
                } else {
                    cout << "Select a coupon to edit:" << endl;
                    for (size_t i = 0; i < userCoupons.size(); ++i) {
                        cout << i + 1 << ". " << userCoupons[i].getName() << endl;
                    }
                    cout << endl;
                    cout << "Enter the coupon number to edit: ";
                    int couponNumber;
                    cin >> couponNumber;
                    cout << endl;
                    if (couponNumber > 0 && couponNumber <= userCoupons.size()) {
                        string updatedName;
                        double updatedDiscount;
                        cout << "Enter the updated coupon name: ";
                        cin.ignore();
                        getline(cin, updatedName);
                        cout << "Enter the updated discount percentage (ex. 10.0 for 10%): ";
                        cin >> updatedDiscount;

                        userCoupons[couponNumber - 1] = Coupon(updatedName, updatedDiscount / 100.0);
                        cout << "Coupon updated successfully." << endl << endl;
                    } else {
                        cout << "Invalid coupon number. Please try again." << endl;
                    }
                }
            } 
            else if (choice == 3) {
                if (userCoupons.empty()) {
                    cout << "No coupons available to remove." << endl;
                } 
                else {
                    cout << "Select a coupon to remove:" << endl;
                    for (size_t i = 0; i < userCoupons.size(); ++i) {
                        cout << i + 1 << ". " << userCoupons[i].getName() << endl;
                    }
                    cout << endl;
                    cout << "Enter the coupon number to remove: ";
                    int couponNumber;
                    cin >> couponNumber;
                    cout << endl;
                    if (couponNumber > 0 && couponNumber <= userCoupons.size()) {
                        userCoupons.erase(userCoupons.begin() + couponNumber - 1);
                        cout << "Coupon removed successfully." << endl << endl;;
                    } 
                    else {
                        cout << "Invalid coupon number. Please try again." << endl;
                    }
                }
            } 
            else if (choice != 4) {
                cout << "Invalid choice. Please try again." << endl;
            }
        } while (choice != 4);
    }
}