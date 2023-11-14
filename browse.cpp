#include "browse.h"
#include "catalog.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <array>//for show catalog

void Browse::showCatalog(){
    Food* dataBase = catalog::generateCatalog();
    while(true){
        cout<< "What items would you like displayed?"<<endl;
        cout<<"1. All items"<<endl;
        cout<<"2. Meats"<<endl;
        cout<<"3. Vegetables"<<endl;
        cout<<"4. Fruit"<<endl;
        cout<<"5. Dairy"<<endl;
        cout<<"6. Seasoning"<<endl;
        cout<<"7. miscellaneous"<<endl;
        int userInput;
        cin>>userInput;
        int counter =1;
        int arraySize = 35;
        if(userInput ==1){
            for(int i =0; i< arraySize; i++){
                cout<< counter<<". "<< dataBase.at[i]<<endl;
                counter++;
            }
        }else if(userInput ==2){
            for(int i =0; i< arraySize; i++){
                if(dataBase.at(i).getType()== "meat"){
                    cout<< counter<<". "<< dataBase.at(i)<<endl;
                    counter++;
                }else{
                    cout<< "End of meat items."<<endl;
                }
            }
        }else if(userInput ==3){
            for(int i =0; i< arraySize; i++){
                if(dataBase.at(i).getType()== "vegetable"){
                    cout<< counter<<". "<< dataBase.at(i)<<endl;
                    counter++;
                }else{
                    cout<< "End of vegetable items."<<endl;
                }
            }
        }else if(userInput ==4){
            for(int i =0; i< arraySize; i++){
                if(dataBase.at(i).getType()== "fruit"){
                    cout<< counter<<". "<< dataBase.at(i)<<endl;
                    counter++;
                }else{
                    cout<< "End of fruit items."<<endl;
                }
            }
        }else if(userInput ==5){
            for(int i =0; i< arraySize; i++){
                if(dataBase.at(i).getType()== "dairy"){
                    cout<< counter<<". "<< dataBase.at(i)<<endl;
                    counter++;
                }else{
                    cout<< "End of dairy items."<<endl;
                }
            }
        }else if(userInput ==6){
            for(int i =0; i< arraySize; i++){
                if(dataBase.at(i).getType()== "seasoning"){
                    cout<< counter<<". "<< dataBase.at(i)<<endl;
                    counter++;
                }else{
                    cout<< "End of seasoning items."<<endl;
                }
            }
        }else if(userInput ==7){
            for(int i =0; i< arraySize; i++){
                if(dataBase.at(i).getType()== "misc"){
                    cout<< counter<<". "<< dataBase.at(i)<<endl;
                    counter++;
                }else{
                    cout<< "End of miscellaneous items."<<endl;
                }
            }
        }else if((userInput >7) ||(userInput<1)){
            cout<< "Your input was not a valid selection. Please reenter a new number to display items.";
            cout<< endl;
        }
        cout<< "Would you like to display the items again? Enter 'Y' or 'N'"<<endl;;
        char choice;
        cin>>choice;
        if(choice != 'y' && choice !='Y'){
            break; 
        }
    }
    delete[] dataBase;
}