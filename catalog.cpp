#include <iostream>

#include "catalog.h"
 
 

 Food* catalog::generateCatalog(){

    Food* dataBase = new Food[35];

    //beef
    dataBase[0] = Food("beef", "meat", 1, 9);

    dataBase[1] = Food("chicken", "meat", 2, 9);

    dataBase[2] = Food("pork", "meat", 3, 9);

    dataBase[3] = Food("fish", "meat", 4, 9);

    dataBase[4] = Food("duck", "meat", 5, 9);

    dataBase[5] = Food("lamb", "meat", 6, 9);

    dataBase[6] = Food("eggs", "meat", 7, 9);

    dataBase[7] = Food("carrot", "vegetable", 8, 9);

    dataBase[8] = Food("broccli", "vegetable", 9, 9);

    dataBase[9] = Food("onions", "vegetable", 10, 9);

    dataBase[10] = Food("lettuce", "vegetable", 11, 9);

    dataBase[11] = Food("garlic", "vegetable", 12, 9);

    dataBase[12] = Food("spinach", "vegetable", 13, 9);

    dataBase[13] = Food("spinach", "vegetable", 14, 9);

    dataBase[14] = Food("arugula", "vegetable", 15, 9);

    dataBase[15] = Food("apples", "fruit",  16, 9);

    dataBase[16] = Food("oranges", "fruit", 17, 9);

    dataBase[17] = Food("grapes", "fruit", 18, 9);

    dataBase[18] = Food("strawberries", "fruit", 19, 9);

    dataBase[19] = Food("blueberries", "fruit", 20, 9);

    dataBase[20] = Food("milk", "dairy", 21, 9);

    dataBase[21] = Food("butter", "dairy", 22, 9);

    dataBase[22] = Food("yogurt", "dairy", 23, 9);

    dataBase[23] = Food("salt", "seasoning", 24, 9);

    dataBase[24] = Food("pepper", "seasoning", 25, 9);

    dataBase[25] = Food("msg", "seasoning", 26, 9);

    dataBase[26] = Food("soy sauce", "seasoning", 27, 9);

    dataBase[27] = Food("Gency's Gigantic Guava Guice", "misc", 28, 9);
    
    dataBase[28] = Food("Shruti's Savory Sicilian Spaghetti", "misc", 29, 9);
    
    dataBase[29] = Food("Reya's Redonkulous Rigatoni", "misc", 30, 9);

    dataBase[30] = Food("Karen's Krazy Korean BBQ", "misc", 31, 9);

    dataBase[31] = Food("Ben", "misc", 32, 9);


    return dataBase;
 }