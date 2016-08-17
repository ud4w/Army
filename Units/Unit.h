#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include <string>
#include "../interfaces/Observable.h"
#include "../Properties/Properties.h"
#include "../Skills/Skills.h"

#include "../exceptions.h"

class Properties;
class Skills;

class Unit : public Observable, public Observer {
    protected:
        bool isUndead;
        Properties *property;
        Skills *skill;
    public:
        Unit(const std::string &name, int hp, int dmg);
        virtual ~Unit();
        
        Properties * getProperty() const;
        Skills * getSkill() const;
        bool getIsUndead() const;
        
        void setProperty(Properties *newProperty);
        void setSkill(Skills *newSkill);
        void changeIsUndead();
        
        virtual void addHitPoints(int hp);
        virtual void takeMagicDamage(int dmg);
        virtual void takeDamage(int dmg);
        virtual void attack(Unit *enemy) = 0;
        virtual void counterAttack(Unit *enemy);
        virtual void infect(Unit *victim);
        virtual void changeState();
        virtual void notifyIsDead();
        virtual void notifyObserverIsDead();
};

std::ostream& operator<<(std::ostream& out, Unit &unit);

#endif
