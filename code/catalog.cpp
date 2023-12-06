#include <iostream>

#include "catalog.h"

#include "food.h"

 

 Food* catalog::generateCatalog(){

    Food* dataBase = new Food[33];

    //beef
    dataBase[0] = Food("beef", "meat", 1, 9, 30.00);

    dataBase[1] = Food("chicken", "meat", 2, 9, 27.99);

    dataBase[2] = Food("pork", "meat", 3, 9, 18.99);

    dataBase[3] = Food("fish", "meat", 4, 9, 23.00);

    dataBase[4] = Food("duck", "meat", 5, 9, 45.00);

    dataBase[5] = Food("lamb", "meat", 6, 9, 17.99);

    dataBase[6] = Food("eggs", "meat", 7, 9, 3.50);

    dataBase[7] = Food("carrot", "vegetable", 8, 9, 5.99);

    dataBase[8] = Food("broccoli", "vegetable", 9, 9, 4.99);

    dataBase[9] = Food("onions", "vegetable", 10, 9, 2.50);

    dataBase[10] = Food("lettuce", "vegetable", 11, 9, 1.50);

    dataBase[11] = Food("garlic", "vegetable", 12, 9, 1.99);

    dataBase[12] = Food("spinach", "vegetable", 13, 9, 6.00);

    dataBase[13] = Food("artichoke", "vegetable", 14, 9, 4.00);

    dataBase[14] = Food("arugula", "vegetable", 15, 9, 7.99);

    dataBase[15] = Food("apples", "fruit",  16, 9, 3.79);

    dataBase[16] = Food("oranges", "fruit", 17, 9, 2.89);

    dataBase[17] = Food("grapes", "fruit", 18, 9, 6.90);

    dataBase[18] = Food("strawberries", "fruit", 19, 9, 4.00);

    dataBase[19] = Food("blueberries", "fruit", 20, 9, 4.00);

    dataBase[20] = Food("milk", "dairy", 21, 9, 8.70);

    dataBase[21] = Food("butter", "dairy", 22, 9, 5.60);

    dataBase[22] = Food("yogurt", "dairy", 23, 9, 1.89);

    dataBase[23] = Food("salt", "seasoning", 24, 9, 3.50);

    dataBase[24] = Food("pepper", "seasoning", 25, 9, 3.50);

    dataBase[25] = Food("msg", "seasoning", 26, 9, 3.50);

    dataBase[26] = Food("soy sauce", "seasoning", 27, 9, 2.89);

    dataBase[27] = Food("Gency's Gigantic Guava Guice", "misc", 28, 9, 700);
    
    dataBase[28] = Food("Shruti's Savory Sicilian Spaghetti", "misc", 29, 9, 250);
    
    dataBase[29] = Food("Reya's Redonkulous Rigatoni", "misc", 30, 9, 580);

    dataBase[30] = Food("Karen's Krazy Korean BBQ", "misc", 31, 9, 420);

    dataBase[31] = Food("Ben", "misc", 32, 9, .01);

    dataBase[32] = Food("Samyak's Superlative Salmon Sushi", "misc", 33, 9, 9000);


    return dataBase;
    
 }

 

