#include "Unit.h"


Unit::Unit(const std::string &name, int hp, int dmg){}
Unit::~Unit(){
        delete property;
        delete skill;
}

Properties *Unit::getProperty() const{
        
        return property;
}

void Unit::setProperty(Properties *newProperty) {
        delete this->property;
        
        this->property = newProperty;
}

Skills *Unit::getSkill() const{
        return skill;
}

void Unit::setSkill(Skills *newSkill){
        delete this->skill;
        
        this->skill = newSkill;
}

bool Unit::getIsUndead() const{
        return this->isUndead;
}

void Unit::changeIsUndead(){
        this->isUndead = !isUndead;
}

void Unit::addHitPoints(int hp){
        getProperty()->addHitPoints(hp);
}
void Unit::takeMagicDamage(int dmg){
        getProperty()->takeMagicDamage(dmg);
}
void Unit::takeDamage(int dmg){
        getProperty()->takeDamage(dmg);
}
void Unit::attack(Unit *enemy){
        getSkill()->attack(enemy);
        enemy->counterAttack(this);
}
void Unit::counterAttack(Unit *enemy){
        getSkill()->counterAttack(enemy);
}

void Unit::infect(Unit *victim){
        
}

void Unit::changeState(){
        
        getSkill()->changeState();
}

void Unit::notifyIsDead() {
        std::set<Observer *>::iterator it = getObservers().begin();

        for ( ; it != getObservers().end(); it++ ) {
                ((Unit *)(*it))->getProperty()->addHitPoints(Unit::getProperty()->getHitPointsLimit() / 7);
                (*it)->removeObservable(this);
        }
}

void Unit::notifyObserverIsDead() {
        std::set<Observable *>::iterator it = getObservables().begin();

        for ( ; it != getObservables().end(); it++ ) {
                (*it)->removeObserver(this);
        }
}



std::ostream& operator<<(std::ostream& out, Unit &unit){
                out << "Unit name: " << unit.getProperty()->getName() << " [maxHP: "
                        << unit.getProperty()->getHitPointsLimit() << " / currentHP: "
                        << unit.getProperty()->getHitPoints() << "]" << "\n"
                        << "Dmg: " << unit.getSkill()->getDamage() << "\n";
        return out;
}

