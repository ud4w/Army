#include "WolfProperties.h"

WolfProperties::WolfProperties(Unit *parent, const std::string &name, int hp) : Properties(parent, name, hp) {}
WolfProperties::~WolfProperties(){}

void WolfProperties::takeMagicDamage(int dmg){
    bool isWolf = getParent()->getSkill()->getIsWolf();
    if ( isWolf ) {
        Properties::takeDamage(dmg * 2);
    } else {
        Properties::takeDamage(dmg);
    }
}
