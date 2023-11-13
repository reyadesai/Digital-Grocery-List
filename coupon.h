#ifndef __COUPON_H__
#define __COUPON_H__

#include <string>
using namespace std;

class Coupon {
public:
Coupon(const string& name, double discount, const string expirationDate);
string getName() const;
double getDiscount() const;
string getExpirationDate() const;

private:
string name;
double discount;
string expirationDate;




};
#endif
