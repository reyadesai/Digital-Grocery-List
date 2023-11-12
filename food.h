#ifndef FOOD_H
#define FOOD_H

using namespace std;

class Food {

    protected:

        string name;
        string type;
        int id;
        //quantity
        int qty;

    public: 
        //constructs each individual food item, all stay the same except quantity
        Food(const string , const string , const int , int );

        Food();
        
        ~Food();

        //return name
        string getName() const;
        //return type EX: meat, dairy, vegetable
        string getType() const;
        //return item id
        int getID() const;
        //return QTY
        int getQTY() const;
        //changes QTY formula: qty = qty - change
        //need to add safeguards: can't input negative value
        void reduceQTY(int change);

};

#endif