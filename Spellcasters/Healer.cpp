#include "Healer.h"

#include "Healer.h"

Healer::Healer(const std::string &name, int dmg, int hp, int mp) : SpellCaster(name, dmg, hp, mp) {
    this->spell = new HealSpell();
    this->isUndead = false;
    this->isHealer = true;
}
Healer::~Healer(){}

void Healer::useSpell(Unit *target){
    SpellCaster::useSpell(target);
}
