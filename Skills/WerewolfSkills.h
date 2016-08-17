#ifndef WEREWOLFSKILLS_H
#define WEREWOLFSKILLS_H

#include "Skills.h"

class WerewolfSkills : public Skills {
    private:
        bool isWolf;
        void changeCondition();
    public:
        WerewolfSkills(Unit *parent, int dmg = 50);
        virtual ~WerewolfSkills();
        
        virtual bool getIsWolf() const;
        virtual void changeState();
};

#endif //WEREWOLFSKILLS_H
