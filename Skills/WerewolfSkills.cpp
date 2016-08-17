#include "WerewolfSkills.h"


WerewolfSkills::WerewolfSkills(Unit *parent, int dmg) : Skills(parent, dmg) {
    this->isWolf = false;
}
WerewolfSkills::~WerewolfSkills(){}

void WerewolfSkills::changeCondition(){
    this->isWolf = !isWolf;
}

bool WerewolfSkills::getIsWolf() const {
    return isWolf;
}

void WerewolfSkills::changeState(){
    std::string add = " is Wolf currently";

    if ( !getIsWolf() ) {
        int newHpLimit = getParent()->getProperty()->getHitPointsLimit() * 2;
        int newHp = getParent()->getProperty()->getHitPoints() * 2;
        int newDmg = getDamage() * 2;
        std::string newName = getParent()->getProperty()->getName() + add;
        
        getParent()->getProperty()->setHitPointsLimit(newHpLimit);
        getParent()->getProperty()->setHitPoints(newHp);
        setDamage(newDmg);
        getParent()->getProperty()->setName(newName);
        
        changeCondition();
    } else {
        int newNameSise = getParent()->getProperty()->getName().size() - add.size();
        int newHpLimit = getParent()->getProperty()->getHitPointsLimit() / 2;
        int newHp = getParent()->getProperty()->getHitPoints() / 2;
        int newDmg = getDamage() / 2;
        std::string newName = getParent()->getProperty()->getName();
        newName.resize(newNameSise);
        
        getParent()->getProperty()->setHitPointsLimit(newHpLimit);
        getParent()->getProperty()->setHitPoints(newHp);
        setDamage(newDmg);
        getParent()->getProperty()->setName(newName);
        
        changeCondition();
    }
}
