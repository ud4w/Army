#include "Priest.h"

Priest::Priest(const std::string &name, int dmg, int hp, int mp) : SpellCaster(name, dmg, hp, mp) {
    this->spell = new HealSpell();
    this->isUndead = false;
    this->isHealer = true;
}

Priest::~Priest(){}

void Priest::attack(Unit *enemy){
    if ( enemy->getIsUndead() ) {
        Unit::getSkill()->setDamage(Unit::getSkill()->getDamage() * 2);
        Unit::attack(enemy);
        Unit::getSkill()->setDamage(Unit::getSkill()->getDamage() / 2);
    } else {
        Unit::attack(enemy);
    }
}

void Priest::useSpell(Unit *target){
    SpellCaster::useSpell(target);
}

