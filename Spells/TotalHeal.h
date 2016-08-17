#ifndef TOTALHEAL_H
#define TOTALHEAL_H

#include "Spell.h"

class TotalHeal : public Spell{
    public:
        TotalHeal(int cost = 100, int power = 1);
        virtual ~TotalHeal();
        
        virtual void affects(Unit *unit, bool parent);
};

#endif // TOTALHEAL_H
