#ifndef ALLERGEN_H
#define ALLERGEN_H

#include <string>

class Allergen {
private:
    std::string name;

public:
    Allergen(const std::string& name);

    // Getter for the allergen name
    std::string getName() const;
};

#endif  // ALLERGEN_H
