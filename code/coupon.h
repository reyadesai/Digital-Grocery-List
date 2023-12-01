#ifndef __COUPON_H__
#define __COUPON_H__

#include <string>
using namespace std;

class Coupon {
public:
Coupon(const string& name, double discount, const string& expirationDate = "N/A"); // Provide a default value for the expiration date
string getName() const;
void setName(const string& name);
double getDiscount() const;
string getExpirationDate() const;
//bool isApplicable(const std::vector<Food>& items) const;

private:
string name;
double discount;
string expirationDate;




};
#endif
