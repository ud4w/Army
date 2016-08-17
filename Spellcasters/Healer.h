#ifndef HEALER_H
#define HEALER_H

#include "SpellCaster.h"
#include "../Spells/HealSpell.h"

class Healer : public SpellCaster {
    public:
        Healer(const std::string &name = "Healer", int dmg = 50, int hp = 100, int mp = 120);
        virtual ~Healer();
        
        virtual void useSpell(Unit *target); 
};

#endif // HEALER_H
