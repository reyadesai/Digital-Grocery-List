#ifndef ALLERGEN_H
#define ALLERGEN_H

#include <string>

using namespace std;

class Allergen {
public:
    Allergen(const string& name);

    // Getter for allergen name
    string getName() const;

    // Setter for allergen name
    void setName(const string& name);

private:
    string name;
};

#endif
