#include "allergen.h"

Allergen::Allergen(const std::string& name) : name(name) {}

std::string Allergen::getName() const {
    return name;
}

void Allergen::setName(const std::string& name) {
    this->name = name;
}
