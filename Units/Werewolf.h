#ifndef WEREWOLF_H
#define WEREWOLF_H

#include "Unit.h"
#include "../Skills/WerewolfSkills.h"
#include "../Properties/WolfProperties.h"

#include "../exceptions.h"

class Werewolf : public Unit {
    public:
        Werewolf(const std::string &name = "Werewolf", int hp = 100, int dmg = 50);
        virtual ~Werewolf();
        
        virtual void infect(Unit *victim);
        virtual void attack(Unit *enemy);
};

#endif
