#include "TotalHeal.h"

TotalHeal::TotalHeal(int cost, int power) : Spell(cost, power){
    this->kind = totalHeal;
}
TotalHeal::~TotalHeal(){}

void TotalHeal::affects(Unit *unit, bool parent){
    if ( parent ) {
        unit->getProperty()->setHitPoints(unit->getProperty()->getHitPointsLimit());
    } else {
        unit->getProperty()->setHitPoints(unit->getProperty()->getHitPointsLimit() / 2);
    }
}
