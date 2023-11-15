#include "allergen.h"

using namespace std;

Allergen::Allergen(const string& name) : name(name) {}

string Allergen::getName() const {
    return name;
}

void Allergen::setName(const string& name) {
    this->name = name;
}
