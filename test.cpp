#include "gtest/gtest.h"
#include "code/allergen.h"
using namespace std;

TEST(AllergensTest, testName) {
    Allergen beef("Beef");
    EXPECT_EQ("Beef", "Beef");
}