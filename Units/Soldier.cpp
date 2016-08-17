#include "Soldier.h"

Soldier::Soldier(const std::string name, int hp, int dmg) : Unit(name, hp, dmg){
        this->property = new Properties(this, name, hp);
        this->skill = new Skills(this, dmg);
        this->isUndead = false;
}
Soldier::~Soldier(){}

 void Soldier::attack(Unit *enemy){
   Unit::attack(enemy);
}
