#include "Berserker.h"

Berserker::Berserker(const std::string name, int hp, int dmg) : Unit(name, hp, dmg){
    this->property = new Properties(this, name, hp);
    this->skill = new Skills(this, dmg);
    this->isUndead = false;
}
Berserker::~Berserker(){}

void Berserker::attack(Unit *enemy){
    Unit::attack(enemy);
}

void Berserker::takeMagicDamage(int dmg){}
