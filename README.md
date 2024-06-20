 

# Grocery List

 
  Authors: [Benjamin Huynh](https://github.com/bhuynh123) [Shruti Suvarna](https://github.com/shrusuvarna)  [Reya Desai](https://github.com/reyadesai)  [Karen Alvarez](https://github.com/karenalv)


## Project Description
 The project in general is important because it will teach us skills that are necessary in the real-world, one major skill being collaboration. It allows us to learn more and apply our knowledge of search functions through a database through algorithms and data storage methods and we will learn how to effectively work with a larger group of people and to manage our time to get work done. We will also learn how to work on larger projects, which will be different from our typical labs/programming assignments we have been assigned. Lastly, we chose to do a grocery list because it is something used everyday by a large population. Learning to create something so practical is what grabbed our interest. In this project, we will be utilizing a variety of technologies and tools. A few include but are not limited to C++, UI design, inheritance, polymorphism, search algorithms, data structures, and VS Code. For the grocery list, the user will be first be prompted to mention the store they are creating the list for. Then they will be asked to add an item to their grocery list, including the name quantity, category, and importance, which will then be displayed onto the screen. Upon completion of the list, they will be able to view their entire cart. The user will have the power to browse and search through the catalog, add from catalog to basket, remove from the basket, check basket, checkout basket, changing quantity of an item, category it falls into and prioritizing item. The grocery list offers several features for the user. The user will be able to create different lists for each store they go to, where they can add/remove items as they please, as well as changing the quantity of items they may want several of. They will also be able to sort their items in different categories such as Dairy, Fruits, Vegetables, etc. and sort those by priority. Upon completing their list, the user will be able to view the whole list, outputting all the items, including their quantity, category, and priority. The grocery list will also have a feature in which the user can save past lists. We will probably utilize a data structure such as an array or vector to store these old lists so a user can access them whenever they want.
We will also use a shopping cart feature that allows users to add items from the grocery list. The shopping cart can also hold information about item quantities and prices. We will specifically implement features to add, remove, and view items in the cart. We are also going to need to implement validation checks to make sure that users provide valid input, such as valid item names, quantities, and prices.
 > ## Phase II

## User Interface Specification


### Navigation Diagram

<img width="828" alt="1" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/639e8bdb-a1b0-4530-b023-5fca2dba330f">


The Navigation Diagram shows how the user interacts with their profile to edit grocery lists, allergens, coupons, or view old lists. First, the user will be asked to choose a profile, along with showing allergies/coupons associated with that specific user. Then, they can choose from a list of stores they have to access an older list or create a new one. After the user edits/creates their list, they will view the total list at checkout, including the prices, location of items in store, and quantities. Lastly, the user can exit. 

### Screen Layouts

<img width="366" alt="2" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/45181d1e-de00-4cc1-bbd7-aba68cf6accf">

<img width="601" alt="3" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/6511469f-6ae7-4106-ac40-d7d61b23efc0">


The program begins with prompting the user to eneter a username, where they will not be able to proceed until they enter the correct username, or select "!" to quit the program. Once they successfuly login, the user will be presented with four options, which inlcude manage allergens, manage coupons, next, or return to main menu. Firstly, manage allergens will allow the user to add a new allergen and remove an allergen. Once done managing, the user will be allowed to return to the main menu. Similarly, manage coupons will allow the user to add a new coupon, remove a coupon and even edit a previously added coupon by changing the percent off. Once again, the user will be allowed to return to the main menu once done managing coupons. Once returning to the main menu, the user can choose to proceed or quit. If they choose to proceed, they will first be prompted to name their new list. Upon naming the list, they will see the whole catalog, which is the list of items available to purchase. Then, the user will be able to browse the catalog, add to basket, remove from basket, edit quantity of item, view entire basket, checkout or quit. Browse catalog shows the items and the user has the option to view all items or by different categories such as meats, vegetables, fruit, dairy, seasoning and miscellaneous. Then add to basket allows the user to enter an item they want to purchase, where they enter the name, quantity and price of the item aand if they enter an item that matches one of the user's allergens, the program will output a warning. Next, remove item simply removes the whole item the user enters from the list. Next, edit quantity allows the user to increase or decrease the amount of a certain item they intend to purchase. Following, view basket allows the user to view all the items they have entered to purchase. Then the user can either checkout, where they will see their total amount, including tax and the coupons applied. Lastly, during any step of the program, the user can select "7" to quit the program. 


## Class Diagram

<img width="593" alt="4" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/7d04228e-2f22-42c6-9cca-2f4b1068ba79">

The UML diagram represents how different classes interact with each other in our program and each of our classes has one responsibility. Firstly, the shoppingList class allows the user to add, remove, display and edit items as well as calculating total prices. Next, the food class is responsible for handling all of the products, such as reducing the quantity of the items, setting the price, getting the name, type, ID, etc. The catalog and browse class are connected to the food class as the user will be able to view the items from the food class in the catalog. Next, the userProfile class is for different users who use the program. This sets the user's name and displays specific coupons and allergens for that person. This class also is related to the allergens and coupons class where the allergens and coupons are set. Lastly, the login class is what saves the username to access the program. 


 
 > ## Final deliverable
 
 ## Screenshots
<img width="823" alt="5" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/e82cec55-df2e-4953-8a42-a4e4b07796b5">
<img width="830" alt="6" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/7f6bb062-4616-45f2-9dab-d244e67d009f">
<img width="321" alt="7" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/ad77a311-df42-4771-8998-0c7de4727932">
<img width="828" alt="8" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/f0e9454a-24c6-4133-8ebd-d489406eaa40">
<img width="831" alt="9" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/8ebef64c-7b76-4186-9a8d-dc62c112bc53">
<img width="740" alt="10" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/230e589a-1534-41e0-84bc-da7a7bbbcf32">
<img width="676" alt="11" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/83058fcf-eee9-45e3-82ca-1bed1d8e5468">
<img width="446" alt="12" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/23cd36ec-f9cf-42fb-b49a-ad5bb3f6d5cc">
<img width="627" alt="13" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/731b8997-2544-4f1b-941a-2f1f4b54b488">
<img width="359" alt="14" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/22aab0ed-4b65-4d16-9650-9bd7bdf92332">

 ## Installation/Usage
 > 1. Clone Repository
>  2. Enter correct directory (cd <name of folder>)
>  3. Run cmake . and make
>  4. To compile main, run the command ./bin/test
>  5. Login with "Gency" and follow the code from there
 ## Testing
 The first test ran was valgrind using the command valgrind ./bin/glist.
<img width="832" alt="15" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/962d6061-6e72-4236-b243-0225f059b3c2">

 
 The second would be series of units tests that cover every function the the code.
 The command to run the tests is ./bin/test.
 <img width="831" alt="16" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/f74d1327-40b6-4583-a27b-6743e00b366d">

<img width="828" alt="17" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/8bed20f9-8f86-4b76-ada2-f4dacef7652d">


The third test we used was just running the code as using every function as if it were in an alpha or beta testing phase with multiple users, exactly like how the demo will go.

<img width="828" alt="18" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/b41a14ed-a6f0-4932-95fa-074cf7614492">

<img width="824" alt="19" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/bfd29445-6291-4288-b793-0b61699f71e9">
<img width="829" alt="20" src="https://github.com/reyadesai/Digital-Grocery-List/assets/146493032/1a425c40-0949-4714-ba96-906247c1900e">


 
