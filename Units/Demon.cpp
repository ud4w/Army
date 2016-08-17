#include "Demon.h"

Demon::Demon(Warlock *master, const std::string name, int hp, int dmg) : Soldier(name, hp, dmg){
    this->isUndead = true;
    this->master = master;
    master->setSlave(this);
}

Demon::~Demon(){
    master = NULL;
}
