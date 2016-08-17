#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <iostream>
#include "../Units/Unit.h"
#include "../Spells/Spell.h"
#include "../Spells/MagicBook.h"
#include "../Properties/SpellCasterProperties.h"
#include "../exceptions.h"


class SpellCaster : public Unit {
    protected:
        bool isHealer;
        Spell *spell;
        MagicBook *book;
    public:
        SpellCaster(const std::string &name, int dmg, int hp, int mp);
        virtual ~SpellCaster();
        
        Spell *getSpell() const;
        bool getIsHealer() const;
        
        virtual void changeSpell();
        virtual void attack(Unit *enemy);
        virtual void useSpell(Unit *target)=0;
};

std::ostream& operator<<(std::ostream& out, const SpellCaster& caster);

#endif
