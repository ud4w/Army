#ifndef VAMPSKILLS_H
#define VAMPSKILLS_H

#include "Skills.h"

class VampSkills : public Skills {
    private:
        virtual void stealHP(Unit *enemy);
    
    public:
        VampSkills(Unit *paent, int dmg =  60);
        virtual ~VampSkills();
        
        virtual void attack(Unit *enemy);
        virtual void counterAttack(Unit *enemy);
};

#endif
