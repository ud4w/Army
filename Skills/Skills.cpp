#include "Skills.h"

Skills::Skills(Unit *parent, int dmg){
    this->damage = dmg;
    this->parent = parent;
}
Skills::~Skills(){}

Unit *Skills::getParent() const {
    return parent;
}

int Skills::getDamage() const{
    return damage;
}

bool Skills::getIsWolf() const {}

void Skills::setDamage(int dmg){
    this->damage = dmg;
}

void Skills::changeState(){}

void Skills::attack(Unit *enemy){
    enemy->getProperty()->takeDamage(getDamage());
}

void Skills::counterAttack(Unit *enemy){
    enemy->getProperty()->takeDamage(getDamage() / 2);
}
