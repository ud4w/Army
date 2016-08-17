#ifndef WARLOCK_H
#define WARLOCK_H

#include "SpellCaster.h"
#include "../Units/Demon.h"
#include "../Spells/DamageSpell.h"

class Demon;

class Warlock : public SpellCaster {
    private:
        Demon *slave;
        
    public:
        Warlock(const std::string &name = "Warlock", int dmg = 50, int hp = 100, int mp = 120);
        virtual ~Warlock();
        
        Demon *getSlave() const;
        void setSlave(Demon *demon);
        void callDemon();
        void freeDemon();
        
        virtual void attack(Unit *enemy);
        virtual void useSpell(Unit *target); 
};

#endif // WARLOCK_H
