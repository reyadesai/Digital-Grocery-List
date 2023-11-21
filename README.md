 

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

<img width="840" alt="Screenshot 2023-11-05 at 10 12 55 PM" src="https://github.com/cs100/final-project-ssuva003-rdesa022-bhyun053-kalva088/assets/146493032/ce2d086a-b07c-481d-9a1e-b82eb9a09c33">

The user will first be brought to the screen to choose their profile. Upon choosing, they will see their allergens and coupons associated with their profile, which they can edit at any time in order to make sure their preferences are up to date. If they choose to edit either one, they will be brought to a screen that allows them to modify their entries for both coupons and allergens. When done, the user will be prompted to choose a store they want to make a list for, where they can choose to make a new list, or choose an older saved list, which they can also edit. The older saved list serves as a time saver if they are in a rush and quickly need to access their go to items. When done, they will see a page that shows their whole list, including the prices of items with their locations and type of item. The user will have the option to save their list, or exit the page, and then will be shown a page stating "LIST COMPLETE"  


## Class Diagram
 <img width="686" alt="PNG image" src="https://github.com/cs100/final-project-ssuva003-rdesa022-bhyun053-kalva088/assets/146493032/5d35cf0c-9cd0-4d3e-a43a-e67984c739a5">

All the classes inherit from Store List, which is the class that contains our main components such as adding an item to the list, removing items, changing the quantity, sorting them and then viewing the whole list. The coupon class contains the coupon name and the amount off of the certain purchase. Allergens contains different allergies a user has and will provide warnings if the user purchases an item that contains the allergen. Saved lists allows the user to view older lists and budget shows the max amount of money the user wants to spend. Location shows where the item is in the specific store and item is allowing the user to enter details about the item the user wants on the list. Lastly, shopping list is a summary of all the details from the shopping experience, which includes the whole list, and adding or removing items from the list. 
 > ## Phase III
<img width="1040" alt="Screenshot 2023-11-20 at 4 10 22 PM" src="https://github.com/cs100/final-project-ssuva003-rdesa022-bhyun053-kalva088/assets/146493032/ebbdac17-b667-49f2-bcc2-8fa8987ede3a">


>    * For the single responsibility principle,we made sure that each class is responsible for a single aspect. For example, earlier our display function handled various responsibilities like user profiles, allergens and coupons but we modified it and broke it down into smaller classes so that each one was responsible for one aspect.Now, display is responsible for display related functions like displaying user info. We implemented the Open/Close principle as well. For this one we modified the food class to be an abstract class in which we declared an abstract method called CalculatePrice(). Meat and vegatables are subclasses of food that provide implementations for the CalculatePrice() method. This adheres to the Open/Close principle because if we wanted to add a new type of food like fruit we can create a new subclass without modifying the food class. We implemented the Liskov Substitution principle through the food class. We defined a superclass called food which captures the common behavior shared among its subclasses which are meat, fruit, veg, etc. We added processFood() to ensure that the function is able to process food regardless of its type. Using this principle allows us to ensure that the instances of the subclasses can be used interchangeably with the instances of the superclass. We used the interface-segregation principle to make sure that a class isn't forced to use implementations that it does not use. We broke the large interface into smaller interfaces. For example, display is now split up and allergens, coupons and shoppingList all have their own interfaces. Display can inherit from these classes. Using this principle allows us to ensure that any classes that deal with allergens,coupons, shopping lists,etc can only implement the interfaces that are relevant to it specifically. This way we don't have to deal with having one giant interface that forces classes to implement methods that they do not need. We implemented the Dependency Inversion Principle as well. This principle suggests that higher level modules should not depend on lower level modules and that both of them should depend on abstractions instead. To implement this , we added an interface called virtual ~CatalogInterface() and virtual ~Display Interface(). Catalog and Display depend on these abstractions that were just mentioned and we can use these in our main.cpp file or any other high level module that needs to have an interaction with Catalog or Display. Using this principle is good because the dependencies are inverted which makes it much more easier, and flexible to extend. We thought it would be good practice to include a virtual destructor since we are working with abstract classes and this is also a good practice to use when dealing with inheritance or polymorphism.

 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
