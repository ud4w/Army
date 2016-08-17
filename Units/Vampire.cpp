#include "Vampire.h"

Vampire::Vampire(const std::string &name, int hp, int dmg) : Unit(name, hp, dmg){
    this->property = new Properties(this, name, hp);
    this->skill = new VampSkills(this, dmg);
    this->isUndead = true;
}
Vampire::~Vampire(){}

void Vampire::infect(Unit *victim){
    if ( victim->getIsUndead() ) {
        throw UnacceptableUnitTypeException();
    }
    
    Unit *parent = victim->getSkill()->getParent();
    int dmg = victim->getSkill()->getDamage();
    std::string newName = victim->getProperty()->getName() + " is Vampire now";
    
    victim->getProperty()->setName(newName);
    victim->changeIsUndead();
    victim->setSkill(new VampSkills(parent, dmg));
}

void Vampire::attack(Unit *enemy){
    Unit::attack(enemy);
}
