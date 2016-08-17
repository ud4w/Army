#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"

class Soldier : public Unit{
    public:
        Soldier(const std::string name = "Soldier", int hp = 100, int dmg = 50);
        virtual ~Soldier();
        
        virtual void attack(Unit *enemy);
};

#endif
