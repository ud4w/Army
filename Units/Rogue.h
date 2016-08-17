#ifndef ROGUE_H
#define ROGUE_H

#include "Unit.h"

class Rogue : public Unit {
    public:
        Rogue(const std::string name = "Roguee", int hp = 100, int dmg = 50);
        virtual ~Rogue();
        
        virtual void attack(Unit *enemy);
};

#endif
