#include "SpellCasterProperties.h"


SpellCasterProperties::SpellCasterProperties(Unit *parent, const std::string &name, int hp, int mp)
: Properties(parent, name, hp), mp(mp), mpLimit(mp) {}

SpellCasterProperties::~SpellCasterProperties(){}

int SpellCasterProperties::getMagicPower() const{
    return mp;
}

int SpellCasterProperties::getMagicPowerLimit() const{
    return mpLimit;
}
void SpellCasterProperties::addMp(int mana){
    ensureIsAlive();
    
    int totalMp = mp + mana;
    
    if ( totalMp >= mpLimit ) {
        mp = mpLimit;
        return;
    }
    mp = totalMp;
}

void SpellCasterProperties::useMp(int spellCost){
    ensureIsAlive();
    
    if ( spellCost > mp ) {
        throw OutOfManaException();
    }
    
    mp -= spellCost;
}
