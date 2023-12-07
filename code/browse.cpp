#include "browse.h"
#include "catalog.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <array>//for show catalog

Browse::Browse(){}

Browse::~Browse(){}

void Browse::showCatalog(){
    const int size = 33;
    Food* dataBase[size];
    catalog catDataBase;
    catDataBase.generateCatalog(dataBase);
    while(true){
        cout<< "What items would you like displayed?"<<endl;
        cout<<"1. All items"<<endl;
        cout<<"2. Meats"<<endl;
        cout<<"3. Vegetables"<<endl;
        cout<<"4. Fruit"<<endl;
        cout<<"5. Dairy"<<endl;
        cout<<"6. Seasoning"<<endl;
        cout<<"7. miscellaneous"<<endl;
        cout<< endl;
        int userInput;
        cin>>userInput;
        int counter =1;
        int arraySize = 33;
        if(userInput ==1){
            cout<< "All items"<<endl;
            for(int i =0; i< arraySize; i++){
                cout<< counter<<". "<< "Name: " << dataBase[i]->getName() << ", Type: " << dataBase[i]->getType() << ", ID: " << dataBase[i]->getID() << ", QTY: " << dataBase[i]->getQTY() << ", Price: " << dataBase[i]->getPrice()<<endl;//
                counter++;
            }
        }
        else if(userInput ==2){
            cout<< "Meats"<<endl;
            sort(dataBase, dataBase + arraySize, [](const Food *a, const Food *b) {
                return a->getName() < b->getName();
            });
            for(int i =0; i< arraySize; i++){
                if(dataBase[i]->getType()== "meat"){
                    cout<< counter<<". "<< "Name: " << dataBase[i]->getName() << ", Type: " << dataBase[i]->getType() << ", ID: " << dataBase[i]->getID() << ", QTY: " << dataBase[i]->getQTY() << ", Price: " << dataBase[i]->getPrice()<<endl;//change
                    counter++;
                }
                else{
                    continue;
                }
            }
        }
        else if(userInput ==3){
            cout<< "Vegetables"<<endl;
            //bool foundVegetable = false;//veg or no :3
            sort(dataBase, dataBase + arraySize, [](const Food *a, const Food *b) {
                return a->getName() < b->getName();
            });
            for(int i =0; i< arraySize; i++){
                if(dataBase[i]->getType()== "vegetable"){
                    cout<< counter<<". "<< "Name: " << dataBase[i]->getName() << ", Type: " << dataBase[i]->getType() << ", ID: " << dataBase[i]->getID() << ", QTY: " << dataBase[i]->getQTY() << ", Price: " << dataBase[i]->getPrice()<<endl;
                    counter++;
                    //foundVegetable = true;
                }
                else{
                    continue;
                }
               
            }
        }
        else if(userInput ==4){
            cout<< "Fruit"<<endl;
            sort(dataBase, dataBase + arraySize, [](const Food *a, const Food *b) {
                return a->getName() < b->getName();
            });
            for(int i =0; i< arraySize; i++){
                if(dataBase[i]->getType()== "fruit"){
                    cout<< counter<<". "<< "Name: " << dataBase[i]->getName() << ", Type: " << dataBase[i]->getType() << ", ID: " << dataBase[i]->getID() << ", QTY: " << dataBase[i]->getQTY() << ", Price: " << dataBase[i]->getPrice()<<endl;
                    counter++;
                }
                else{
                    continue;
                }
            }
        }
        else if(userInput ==5){
            cout<< "Dairy"<<endl;
            sort(dataBase, dataBase + arraySize, [](const Food *a, const Food *b) {
                return a->getName() < b->getName();
            });
            for(int i =0; i< arraySize; i++){
                if(dataBase[i]->getType()== "dairy"){
                    cout<< counter<<". "<< "Name: " << dataBase[i]->getName() << ", Type: " << dataBase[i]->getType() << ", ID: " << dataBase[i]->getID() << ", QTY: " << dataBase[i]->getQTY() << ", Price: " << dataBase[i]->getPrice()<<endl;
                    counter++;
                }
                else{
                    continue;
                }
            }
        }
        else if(userInput ==6){
            cout<< "Seasoning"<<endl;
            sort(dataBase, dataBase + arraySize, [](const Food *a, const Food *b) {
                return a->getName() < b->getName();
            });
            for(int i =0; i< arraySize; i++){
                if(dataBase[i]->getType()== "seasoning"){
                    cout<< counter<<". "<< "Name: " << dataBase[i]->getName() << ", Type: " << dataBase[i]->getType() << ", ID: " << dataBase[i]->getID() << ", QTY: " << dataBase[i]->getQTY() << ", Price: " << dataBase[i]->getPrice()<<endl;
                    counter++;
                }
                else{
                    continue;
                }
            }
        }
        else if(userInput ==7){
            cout<< "miscellaneous"<<endl;
            sort(dataBase, dataBase + arraySize, [](const Food *a, const Food *b) {
                return a->getName() < b->getName();
            });
            for(int i =0; i< arraySize; i++){
                if(dataBase[i]->getType()== "misc"){
                    cout<< counter<<". " << "Name: " << dataBase[i]->getName() << ", Type: " << dataBase[i]->getType() << ", ID: " << dataBase[i]->getID() << ", QTY: " << dataBase[i]->getQTY() << ", Price: " << dataBase[i]->getPrice()<<endl;
                    counter++;
                }
                else{
                    continue;
                }
            }
        }
        else if((userInput >7) ||(userInput<1)){
            cout<< "Your input was not a valid selection. Please reenter a new number to display items.";
            cout<< endl;
        }
        cout<< "Would you like to display the items again? Enter 'Y' or 'N'"<<endl;;
        char choice;
        cin>>choice;
        choice = tolower(choice);
        if(choice != 'y' && choice!='n'){
            cout<< "Invalid input, Exiting program"<<endl;
            break;
        }
        if(choice == 'n'){
            break; 
        }
    }
    for (unsigned i = 0; i < 33; i++) {
        delete dataBase[i];
    }
    
}
