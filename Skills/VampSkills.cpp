#include "VampSkills.h"


VampSkills::VampSkills(Unit *parent, int dmg ) : Skills(parent, dmg) {}
VampSkills::~VampSkills(){}

void VampSkills::stealHP(Unit *enemy){
    Skills::getParent()->addHitPoints(enemy->getProperty()->getHitPoints() / 8);
}

void VampSkills::attack(Unit *enemy){
    Skills::attack(enemy);
    stealHP(enemy);
}
void VampSkills::counterAttack(Unit *enemy){
    Skills::counterAttack(enemy);
    stealHP(enemy);
}
