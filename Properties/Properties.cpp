#include "Properties.h"

Properties::Properties(Unit *parent, const std::string &name, int hp){
    this->name = name;
    this->hitPointsLimit = hp;
    this->hitPoints = hp;
    this->parent =parent;
}

Properties::~Properties(){}

void Properties::ensureIsAlive(){
        if ( getHitPoints() == 0 ) {
                throw DeadUnitEcxeption();
        }
}

int Properties::getHitPointsLimit() const{
    return hitPointsLimit;
}

int Properties::getHitPoints() const{
    return hitPoints;
}

std::string Properties::getName() const{
    return name;
}

Unit *Properties::getParent() const {
    return parent;
}

int Properties::getMagicPower() const{}
int Properties::getMagicPowerLimit() const{}
void Properties::addMp(int mp){}
void Properties::useMp(int spellCost){}

void Properties::setHitPointsLimit(int hp){
    this->hitPointsLimit = hp;
}

void Properties::setHitPoints(int hp){
    this->hitPoints = hp;
}

void Properties::setName(std::string &name){
    this->name = name;
}

void Properties::addHitPoints(int hp){
    ensureIsAlive();
    
    int newHp = hitPoints + hp;
    
    if ( newHp >= hitPointsLimit ) {
        setHitPoints(hitPointsLimit);
        return;
    }
    setHitPoints(newHp);
}

void Properties::takeDamage(int dmg){
    ensureIsAlive();
    
    int newHp = hitPoints - dmg;
    
    if ( newHp <= 0 ) {
        parent->notifyIsDead();
        parent->notifyObserverIsDead();
        setHitPoints(0);
        return;
    }
    setHitPoints(newHp);
}

void Properties::takeMagicDamage(int dmg) {
    takeDamage(dmg);
}

