#ifndef WIZARD_H
#define WIZARD_H

#include "SpellCaster.h"
#include "../Spells/DamageSpell.h"

class Wizard : public SpellCaster {
    public:
        Wizard(const std::string &name = "Wizard", int dmg = 50, int hp = 100, int mp = 120);
        virtual ~Wizard();
        
        virtual void useSpell(Unit *target); 
};

#endif // WIZARD_H
