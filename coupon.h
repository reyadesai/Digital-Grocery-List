#ifndef __COUPON_H__
#define __COUPON_H__

#include <string>
using namespace std;

class Coupon {
public:
Coupon(const std::string& name, double discount, const std::string& expirationDate = "N/A"); // Provide a default value for the expiration date
std::string getName() const;
void setName(const std::string& name);
double getDiscount() const;
std::string getExpirationDate() const;

private:
std::string name;
double discount;
std::string expirationDate;




};
#endif
