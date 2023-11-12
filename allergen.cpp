#include "allergen.h"

Allergen::Allergen(const std::string& name) : name(name) {}

std::string Allergen::getName() const {
    return name;
}
