#include "gtest/gtest.h"
#include "code/allergen.h"
#include "code/userProfile.h"
#include "code/coupon.h" 
using namespace std;

//Allergens
TEST(AllergensTest, testName) {
    Allergen beef("Beef");
    EXPECT_EQ(beef.getName(), "Beef");
} //1

TEST(AllergensTest, testsetName) {
    Allergen beef("cow");
    beef.setName("beef");
    EXPECT_EQ(beef.getName(), "beef");
} //2
//Coupons
TEST(CouponTest, testConstructor) {
    EXPECT_NO_THROW(Coupon Special("Special", 50));
} //3

TEST(CouponTest, testGetName) {
    Coupon Special("Special", 50);
    EXPECT_EQ(Special.getName(), "Special");
} //4

TEST(CouponTest, testSetName) {
    Coupon Special("Special", 50);
    Special.setName("special");
    EXPECT_EQ(Special.getName(), "special");
} //5

TEST(CouponTest, testGetDiscount) {
    Coupon Special("Special", 50);
    EXPECT_EQ(Special.getDiscount(), 50);
} //6

TEST(CouponTest, testGetExpirationDate) {
    Coupon Special("Special", 50);
    EXPECT_EQ(Special.getExpirationDate(), "N/A");
} //7

TEST(CouponTest, testGetExpirationDate2) {
    Coupon Special("Special", 50, "1/1/1");
    EXPECT_EQ(Special.getExpirationDate(), "1/1/1");
} //8

//UserProfile
TEST(UserProfTest, testGetName) {
    UserProfile Gency("Gency");
    EXPECT_EQ(Gency.getName(), "Gency");
} //9

TEST(UserProfTest, testSetName) {
    UserProfile Gency("gency");
    Gency.setName("Gency");
    EXPECT_EQ(Gency.getName(), "Gency");
} //10

TEST(UserProfileTest, testShowCoupons) {
    UserProfile Gency("gency");
    EXPECT_NO_THROW(Gency.showCoupons());
} //11

TEST(UserProfileTest, testaddCoupon) {
    UserProfile Gency("Gency");
    Coupon Special("Special", 50);
    Gency.addCoupon(Special);
    EXPECT_NO_THROW(Gency.showCoupons());
} //12

TEST(UserProfileTest, testGetCoupon) {
    UserProfile Gency("Gency");
    Coupon Special("Special", 50);
    Gency.addCoupon(Special);
    EXPECT_EQ(((Gency.getCoupons()).at(0)).getName(), "Special" );
} //13

TEST(UserProfileTest, testRemoveCoupon) {
    UserProfile Gency("Gency");
    Coupon Special("Special", 50);
    Gency.addCoupon(Special);
    Gency.removeCoupon(Special);
    EXPECT_ANY_THROW(Gency.getCoupons().at(0));
}//14

TEST(UserProfileTest, testAddAllergen) {
    UserProfile Gency("Gency");
    Allergen Beef("Beef");
    Gency.addAllergen(Beef);
    EXPECT_NO_THROW(Gency.getAllergens().at(0));
}//15

TEST(UserProfileTest, testRemoveAllergens) {
    UserProfile Gency("Gency");
    Allergen Beef("Beef");
    Gency.addAllergen(Beef);
    Gency.removeAllergen(Beef);
    EXPECT_ANY_THROW(Gency.getAllergens().at(0));

}//16

TEST(UserProfileTest, testGetAllergens) {
    UserProfile Gency("Gency");
    Allergen Beef("Beef");
    Gency.addAllergen(Beef);
    EXPECT_EQ(((Gency.getAllergens()).at(0)).getName(), "Beef");
}//17

TEST(UserProfileTest, testShowAllergens) {
    UserProfile Gency("Gency");
    Allergen Beef("Beef");
    Gency.addAllergen(Beef);
    EXPECT_NO_THROW(Gency.showAllergens());
}//18

TEST(UserProfileTest, testEditAllergens) {
    UserProfile Gency("Gency");
    EXPECT_NO_THROW(Gency.editAllergens());
}//19

TEST(UserProfileTest, testEditCoupons){
    UserProfile Gency("Gency");
    EXPECT_NO_THROW(Gency.editCoupons());
}//20

