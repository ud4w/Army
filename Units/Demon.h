#ifndef DEMON_H
#define DEMON_H

#include "Soldier.h"
#include "../Spellcasters/Warlock.h"

class Warlock;

class Demon : public Soldier {
    private:
        Warlock *master;
        
    public:
        Demon(Warlock *master, const std::string name = "Demon", int hp = 100, int dmg = 50);
        virtual ~Demon();
};

#endif // DEMON_H
