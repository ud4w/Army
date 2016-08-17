#ifndef DAMAGESPELL_H
#define DAMAGESPELL_H

#include "Spell.h"

class DamageSpell : public Spell{
    public:
        DamageSpell(int cost = 20, int power = 60);
        virtual ~DamageSpell();
        
        virtual void affects(Unit *unit, bool parent);
};

#endif
