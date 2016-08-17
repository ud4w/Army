#ifndef HEALSPELL_H
#define HEALSPELL_H

#include "Spell.h"

class HealSpell : public Spell{
    public:
        HealSpell(int cost = 20, int power = 50);
        virtual ~HealSpell();
        
        virtual void affects(Unit *unit, bool parent);
};

#endif
