#ifndef PRIEST_H
#define PRIEST_H

#include "SpellCaster.h"
#include "../Spells/HealSpell.h"

class Priest : public SpellCaster {
    public:
        Priest(const std::string &name = "Priest", int dmg = 50, int hp = 100, int mp = 120);
        virtual ~Priest();
        
        virtual void attack(Unit *enemy);
        virtual void useSpell(Unit *target); 
};

#endif // PRIEST_H
