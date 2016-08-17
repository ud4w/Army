#include "DamageSpell.h"

DamageSpell::DamageSpell(int cost, int power) : Spell(cost, power) {
    this->kind = damageSpell;
}

DamageSpell::~DamageSpell(){}

void DamageSpell::affects(Unit *unit, bool parent){
    if ( parent ) {
        unit->takeMagicDamage(getPower() / 2);
    } else {
        unit->takeMagicDamage(getPower());
    }
}
