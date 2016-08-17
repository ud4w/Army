#include "Spell.h"

Spell::Spell(int cost, int power){
    this->cost = cost;
    this->power = power;
}
Spell::~Spell(){}

int Spell::getSpellKind () const {
    return kind;
}

int Spell::getCost() const{
    return cost;
}

int Spell::getPower() const{
    return power;
}

std::ostream& operator<<(std::ostream& out, Spell &spell) {
    out << "Spell cost: " << spell.getCost() << "\n"
            << "Spell power: " << spell.getPower();
    return out;
}
