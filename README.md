 

# Grocery List

 
  Authors: [Benjamin Huynh](https://github.com/bhuynh123) [Shruti Suvarna](https://github.com/shrusuvarna)  [Reya Desai](https://github.com/reyadesai)  [Karen Alvarez](https://github.com/karenalv)


## Project Description
 The project in general is important because it will teach us skills that are necessary in the real-world, one major skill being collaboration. It allows us to learn more and apply our knowledge of search functions through a database through algorithms and data storage methods and we will learn how to effectively work with a larger group of people and to manage our time to get work done. We will also learn how to work on larger projects, which will be different from our typical labs/programming assignments we have been assigned. Lastly, we chose to do a grocery list because it is something used everyday by a large population. Learning to create something so practical is what grabbed our interest. In this project, we will be utilizing a variety of technologies and tools. A few include but are not limited to C++, UI design, inheritance, polymorphism, search algorithms, data structures, and VS Code. For the grocery list, the user will be first be prompted to mention the store they are creating the list for. Then they will be asked to add an item to their grocery list, including the name quantity, category, and importance, which will then be displayed onto the screen. Upon completion of the list, they will be able to view their entire cart. The user will have the power to browse and search through the catalog, add from catalog to basket, remove from the basket, check basket, checkout basket, changing quantity of an item, category it falls into and prioritizing item. The grocery list offers several features for the user. The user will be able to create different lists for each store they go to, where they can add/remove items as they please, as well as changing the quantity of items they may want several of. They will also be able to sort their items in different categories such as Dairy, Fruits, Vegetables, etc. and sort those by priority. Upon completing their list, the user will be able to view the whole list, outputting all the items, including their quantity, category, and priority. The grocery list will also have a feature in which the user can save past lists. We will probably utilize a data structure such as an array or vector to store these old lists so a user can access them whenever they want.
We will also use a shopping cart feature that allows users to add items from the grocery list. The shopping cart can also hold information about item quantities and prices. We will specifically implement features to add, remove, and view items in the cart. We are also going to need to implement validation checks to make sure that users provide valid input, such as valid item names, quantities, and prices.
 > ## Phase II

## User Interface Specification


### Navigation Diagram

<img width="903" alt="PNG image" src="https://github.com/cs100/final-project-ssuva003-rdesa022-bhyun053-kalva088/assets/146493032/145e2e3e-4b3d-4108-a0ad-55cff1faa256">

The Navigation Diagram shows how the user interacts with their profile to edit grocery lists, allergens, coupons, or view old lists. First, the user will be asked to choose a profile, along with showing allergies/coupons associated with that specific user. Then, they can choose from a list of stores they have to access an older list or create a new one. After the user edits/creates their list, they will view the total list at checkout, including the prices, location of items in store, and quantities. Lastly, the user can exit. 

### Screen Layouts

ADD SCREEN LAYOUT!

The program begins with prompting the user to eneter a username, where they will not be able to proceed until they enter the correct username, or select "!" to quit the program. Once they successfuly login, the user will be presented with four options, which inlcude manage allergens, manage coupons, next, or return to main menu. Firstly, manage allergens will allow the user to add a new allergen and remove an allergen. Once done managing, the user will be allowed to return to the main menu. Similarly, manage coupons will allow the user to add a new coupon, remove a coupon and even edit a previously added coupon by changing the percent off. Once again, the user will be allowed to return to the main menu once done managing coupons. Once returning to the main menu, the user can choose to proceed or quit. If they choose to proceed, they will first be prompted to name their new list. Upon naming the list, they will see the whole catalog, which is the list of items available to purchase. Then, the user will be able to browse the catalog, add to basket, remove from basket, edit quantity of item, view entire basket, checkout or quit. Browse catalog shows the list of items, then add to basket allows the user to enter an item they want to purchase, where they enter the name, quantity and price of the item aand if they enter an item that matches one of the user's allergens, the program will output a warning. Next, remove item simply removes the whole item the user enters from the list. Next, edit quantity allows the user to increase or decrease the amount of a certain item they intend to purchase. Following, view basket allows the user to view all the items they have entered to purchase. Then the user can either checkout, where they will see their total amount, including tax and the coupons applied. Lastly, during any step of the program, the user can select "7" to quit the program. 


## Class Diagram
<img width="596" alt="Screenshot 2023-12-05 at 9 40 07 PM" src="https://github.com/cs100/final-project-ssuva003-rdesa022-bhyun053-kalva088/assets/146493032/e0e22b8b-d595-47be-9b89-48f990d52466">

The UML diagram represents how different classes interact with each other in our program and each of our classes has one responsibility. Firstly, the shoppingList class allows the user to add, remove, display and edit items as well as calculating total prices. Next, the food class is responsible for handling all of the products, such as reducing the quantity of the items, setting the price, getting the name, type, ID, etc. The catalog and browse class are connected to the food class as the user will be able to view the items from the food class in the catalog. Next, the userProfile class is for different users who use the program. This sets the user's name and displays specific coupons and allergens for that person. This class also is related to the allergens and coupons class where the allergens and coupons are set. Lastly, the login class is what saves the username to access the program. 


 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
<img width="918" alt="screen layout 1" src="https://github.com/cs100/final-project-ssuva003-rdesa022-bhyun053-kalva088/assets/146493032/e3845490-1139-41ae-a3cd-48f2e62a69f0">
<img width="866" alt="screen layout 2" src="https://github.com/cs100/final-project-ssuva003-rdesa022-bhyun053-kalva088/assets/146493032/b9400b3b-33f4-4d97-811b-8bc9c1e49f3f">
<img width="679" alt="screen layout 3" src="https://github.com/cs100/final-project-ssuva003-rdesa022-bhyun053-kalva088/assets/146493032/02574376-3fb9-4830-a775-28fd0320949d">
<img width="823" alt="screen layout 4" src="https://github.com/cs100/final-project-ssuva003-rdesa022-bhyun053-kalva088/assets/146493032/e2823364-c7c5-4ff0-9903-6a8b2357c3ee">
<img width="672" alt="5" src="https://github.com/cs100/final-project-ssuva003-rdesa022-bhyun053-kalva088/assets/146493032/e433e2f8-3185-412c-889f-4d5985964c7a">
<img width="448" alt="5 1" src="https://github.com/cs100/final-project-ssuva003-rdesa022-bhyun053-kalva088/assets/146493032/49aaa2e4-02e5-478c-a172-5725393b703e">

<img width="631" alt="6" src="https://github.com/cs100/final-project-ssuva003-rdesa022-bhyun053-kalva088/assets/146493032/0c6669ad-2a43-4db4-80a7-324ac3ad36b9">

><img width="355" alt="7" src="https://github.com/cs100/final-project-ssuva003-rdesa022-bhyun053-kalva088/assets/146493032/4e4deeb6-f659-429c-813d-6948a7260c2a">
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
