#include "Wizard.h"

Wizard::Wizard(const std::string &name, int dmg, int hp, int mp) : SpellCaster(name, dmg, hp, mp) {
    this->spell = new DamageSpell();
    this->isUndead = false;
    this->isHealer = false;
}
Wizard::~Wizard(){}

void Wizard::useSpell(Unit *target){
    SpellCaster::useSpell(target);
}
