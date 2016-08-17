#include "Werewolf.h"

Werewolf::Werewolf(const std::string &name, int hp, int dmg) :Unit(name, hp, dmg) {
    this->property = new WolfProperties(this, name, hp);
    this->skill = new WerewolfSkills(this, dmg);
    this->isUndead = true;
}
Werewolf::~Werewolf(){}

void Werewolf::infect(Unit *victim){
    if ( victim->getIsUndead() ) {
        throw UnacceptableUnitTypeException();
    }
    
    int dmg = victim->getSkill()->getDamage();
    int currentHp = victim->getProperty()->getHitPoints();
    int hpLim = victim->getProperty()->getHitPointsLimit();
    std::string newName = victim->getProperty()->getName() + " is Werewolf now";
    
    victim->setProperty(new WolfProperties(victim, newName, hpLim));
    victim->setSkill(new WerewolfSkills(victim, dmg));
    
    victim->getProperty()->setHitPoints(currentHp);
    
    victim->changeIsUndead();
}

void Werewolf::attack(Unit *enemy){
    Unit::attack(enemy);
}
