CMAKE_MINIMUM_REQUIRED(VERSION 3.20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
add_subdirectory(googletest)


ADD_EXECUTABLE(glist
    code/allergen.cpp
    # code/browse.cpp
    code/userProfile.cpp
    code/shoppingList.cpp
    code/food.cpp
    code/coupon.cpp
    code/catalog.cpp
    code/main.cpp
    code/login.cpp
)
ADD_EXECUTABLE(test
test.cpp
code/allergen.cpp
# code/browse.cpp
code/userProfile.cpp
code/shoppingList.cpp
code/food.cpp
code/coupon.cpp
code/catalog.cpp
code/login.cpp
)

target_link_libraries(test gmock gtest gtest_main)
# target_link_libraries(test simpleLibrary)