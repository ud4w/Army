#include "HealSpell.h"

HealSpell::HealSpell(int cost, int power) : Spell(cost, power){
    this->kind = healSpell;
}

HealSpell::~HealSpell(){}

void HealSpell::affects(Unit *unit, bool parent){
    if ( parent ) {
        unit->addHitPoints(getPower());
    } else {
        unit->addHitPoints(getPower() / 2);
    }
}
