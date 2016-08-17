#ifndef SKILLS_H
#define SKILLS_H

#include <iostream>
#include <string>

#include "../Units/Unit.h"

class Unit;

class Skills {
    private:
        int damage;
        Unit *parent;
    public:
        Skills(Unit *parent, int dmg = 50);
        virtual ~Skills();
        
        Unit *getParent() const;
        int getDamage() const;
        virtual bool getIsWolf() const;
        void setDamage(int dmg);

        virtual void changeState();
        virtual void attack(Unit *enemy);
        virtual void counterAttack(Unit *enemy);
};

#endif
