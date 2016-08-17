#ifndef SPELL_H
#define SPELL_H

#include <iostream>
#include "../Units/Unit.h"
// #include "../Spellcasters/SpellCaster.h"



enum spellKind {healSpell, damageSpell, totalHeal, fatalDamage};

class Spell {
    private:
        int cost;
        int power;
        
    protected:
        spellKind kind;
        
    public:
        Spell(int cost, int power);
        virtual ~Spell();
        
        int getSpellKind () const;
        int getCost() const;
        int getPower() const;
        
        virtual void affects(Unit *unit, bool parent)=0;
};

std::ostream& operator<<(std::ostream& out, Spell &spell);

#endif
