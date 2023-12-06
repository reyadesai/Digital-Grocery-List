#include "gtest/gtest.h"
#include "code/allergen.h"
#include "code/userProfile.h"
#include "code/coupon.h" 
#include "code/browse.h"
#include "code/food.h"
#include "code/login.h"
#include "code/shoppingList.h"
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

//Browse

TEST(BrowseTest, testCon) {
    EXPECT_NO_THROW(Browse test);
}//21

TEST(BrowseTest, testShowCatalog) {
    Browse test;
    EXPECT_NO_THROW(test.showCatalog());
}//22


//Food

TEST(FoodTest, testCon) {
    EXPECT_NO_THROW(Food test("Beef", "meat", 0, 1, 3.0));
}//23

TEST(FoodTest, testCon2){
EXPECT_NO_THROW(Food test);
} //24

TEST(FoodTest, testGetName) {
    Food test("Beef", "meat", 0, 1, 3.0);
    EXPECT_EQ(test.getName(), "Beef");
} //25

TEST(FoodTest, testGetType) {
    Food test("Beef", "meat", 0, 1, 3.0);
    EXPECT_EQ(test.getType(), "meat");
} //26

TEST(FoodTest, testGetID) {
    Food test("Beef", "meat", 0, 1, 3.0);
    EXPECT_EQ(test.getID(), 0);
} //27

TEST(FoodTest, testGetQtty) {
    Food test("Beef", "meat", 0, 1, 3.0);
    EXPECT_EQ(test.getQTY(), 1);
} //28

TEST(FoodTest, testGetPrice) {
    Food test("Beef", "meat", 0, 1, 3.0);
    EXPECT_EQ(test.getPrice(), 3.0);
} //29

//Login

TEST(LoginTest, testUserLoginGency) {
    login test;
    EXPECT_EQ(test.userLogin(), 0);
}//30

TEST(LoginTest, testUserLoginQuit) {
    login test;
    EXPECT_EQ(test.userLogin(), 1);

} //31

TEST(LoginTest, testUserLoginReset) {
    login test;
    EXPECT_EQ(test.userLogin(), 2);

} //32

//ShoppingList
TEST(SLTest, testCon) {
    EXPECT_NO_THROW(ShoppingList Test);
}//33

TEST(SLTest, testCon2) {
    EXPECT_NO_THROW(ShoppingList Test("Test"));
} //34

TEST(SLTest, testAddItem) {
    ShoppingList test;
    //EXPECT_EQ(test.displayItems(), "Item: Beef, Quantity: 3, Price: $9\n");
    EXPECT_NO_THROW(test.addItem("Beef", 3, 9));
}//35

TEST(SLTest, testEditItem1) {
    ShoppingList test;
    test.addItem("Beef", 3, 9);
    EXPECT_EQ(test.editItem("taco", 1), false);
} //36

TEST(SLTest, testEditItem2) {
    ShoppingList test;
    test.addItem("Beef", 3, 9);
    EXPECT_EQ(test.editItem("Beef", 1), true);
} //37

TEST(SLTest, testRemoveItem1) {
    ShoppingList test;
    test.addItem("Beef", 3, 9);
    EXPECT_EQ(test.removeItem("Beef"), true);
} //38

TEST(SLTest, testRemoveItem2) {
    ShoppingList test;
    test.addItem("Beef", 3, 9);
    EXPECT_EQ(test.removeItem("taco"), false);
} //39

TEST(SLTest, testDisplayItems) {
    ShoppingList test;
    test.addItem("Beef", 3, 9);
    EXPECT_NO_THROW(test.displayItems());
} //40

TEST(SLTest, testCalculateTotalPrice) {
    ShoppingList test;
    test.addItem("Beef", 3.0, 9);
    EXPECT_EQ(test.calculateTotalPrice(), 27);
} //41
 
TEST(SLTest, testAddToShoppingList) {
    ShoppingList test;
    UserProfile Gency("Gency");
    EXPECT_NO_THROW(test.addToShoppingList(Gency));
} //42

TEST(SLTest, testRemoveFromShoppingList) {
    ShoppingList test;
    test.addItem("Beef", 3.0, 9);
    UserProfile Gency("Gency");
    EXPECT_NO_THROW(test.removeFromShoppingList());
} //43

TEST(SLTest, testDisplayShoppingList) {
    ShoppingList test;
    test.addItem("Beef", 3, 9);
    EXPECT_NO_THROW(test.displayShoppingList());
} //44

TEST(SLTest, testEditShoppinglist) {
    ShoppingList test;
    test.addItem("Beef", 3, 9);
    EXPECT_NO_THROW(test.editShoppingList());
} //45

TEST(SLTest, testApplyCoupons) {
    ShoppingList test;
    UserProfile Gency("Gency");
    Coupon Special("Special", 50);
    Gency.addCoupon(Special);
    EXPECT_EQ(test.applyCoupons(Gency.getCoupons()), 50);
} //46