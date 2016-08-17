#ifndef NECROMANCER_H
#define NECROMANCER_H

#include "SpellCaster.h"

class Necromancer : public SpellCaster {
    public:
        Necromancer(const std::string &name = "Necromancer", int dmg = 50, int hp = 100, int mp = 120);
        virtual ~Necromancer();
        
        virtual void attack(Unit *enemy);
        virtual void useSpell(Unit *target);
};

#endif // NECROMANCER_H
