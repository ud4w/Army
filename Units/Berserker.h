#ifndef BERSERKER_H
#define BERSERKER_H

#include "Unit.h"

class Berserker : public Unit {
    public:
        Berserker(const std::string name = "Berserker", int hp = 150, int dmg = 75);
        virtual ~Berserker();
        
        virtual void attack(Unit *enemy);
        virtual void takeMagicDamage(int dmg);
};

#endif
