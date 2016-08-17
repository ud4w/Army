#include "Necromancer.h"

Necromancer::Necromancer(const std::string &name, int dmg, int hp, int mp) : SpellCaster(name, dmg, hp, mp){
    this->spell = new DamageSpell();
    this->isUndead = false;
    this->isHealer = false;
}
Necromancer::~Necromancer(){}

void Necromancer::attack(Unit *enemy){
        SpellCaster::attack(enemy);
        addObservable(enemy); 
}
void Necromancer::useSpell(Unit *target){
        SpellCaster::useSpell(target);
        addObservable(target);
}
