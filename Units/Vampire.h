#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "../Skills/VampSkills.h"
#include "../exceptions.h"

class Vampire : public Unit {
    public:
        Vampire(const std::string &name = "Vampire", int hp = 100, int dmg = 60);
        virtual ~Vampire();
        
        virtual void infect(Unit *victim);
        virtual void attack(Unit *enemy);
};

#endif
