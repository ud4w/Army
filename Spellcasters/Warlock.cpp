#include "Warlock.h"

Warlock::Warlock(const std::string &name, int dmg, int hp, int mp) : SpellCaster(name, dmg, hp, mp){
    this->spell = new DamageSpell();
    this->isUndead = false;
    this->isHealer = false;
    this->slave = NULL;
}
Warlock::~Warlock(){
    if ( slave != NULL ) {
        freeDemon();
    }
}

Demon *Warlock::getSlave() const{
    return slave;
}

void Warlock::setSlave(Demon *demon){
    slave = demon;
}

void Warlock::callDemon(){
    SpellCaster::getProperty()->useMp(60);
    
    if ( slave != NULL ) {
        freeDemon();
    }
    
    slave = new Demon(this);
}

void Warlock::freeDemon(){
    delete slave;
    slave = NULL;
}

void Warlock::attack(Unit *enemy){
    if ( slave != NULL ) {
        slave->attack(enemy);
        SpellCaster::attack(enemy);
    } else {
        SpellCaster::attack(enemy);
    }
}

void Warlock::useSpell(Unit *target){
    SpellCaster::useSpell(target);
}
