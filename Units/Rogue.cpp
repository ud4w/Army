#include "Rogue.h"

Rogue::Rogue(const std::string name, int hp, int dmg ) : Unit(name, hp, dmg){
    this->property = new Properties(this, name, hp);
    this->skill = new Skills(this, dmg);
    this->isUndead = false;
}
Rogue::~Rogue(){}

void Rogue::attack(Unit *enemy){
        getSkill()->attack(enemy);
}
