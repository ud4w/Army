#ifndef FATALDAMAGE_H
#define FATALDAMAGE_H

#include "Spell.h"

class FatalDamage : public Spell{
    public:
        FatalDamage(int cost = 100, int power = 2);
        virtual ~FatalDamage();
        
        virtual void affects(Unit *unit, bool parent);
};

#endif // FATALDAMAGE_H
