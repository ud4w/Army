#include "FatalDamage.h"

FatalDamage::FatalDamage(int cost, int power) : Spell(cost, power){
    this->kind = fatalDamage;
}
FatalDamage::~FatalDamage(){}

void FatalDamage::affects(Unit *unit, bool parent){
    if ( parent ) {
        unit->getProperty()->setHitPoints(unit->getProperty()->getHitPoints() / 2);
    } else {
        unit->getProperty()->setHitPoints(0);
    }
}
