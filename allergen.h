#ifndef ALLERGEN_H
#define ALLERGEN_H

#include <string>

class Allergen {
public:
    Allergen(const std::string& name);

    // Getter for allergen name
    std::string getName() const;

    // Setter for allergen name
    void setName(const std::string& name);

private:
    std::string name;
};

#endif
