#ifndef PROPERTIES_H
#define PROPERTIES_H

#include <iostream>
#include <string>

#include "../Units/Unit.h"
#include "../exceptions.h"

class Unit;

class Properties {
    private:
        int hitPointsLimit;
        int hitPoints;
        std::string name;

    protected:
        void ensureIsAlive();
        Unit *parent;
        
    public:
        Properties(Unit *parent, const std::string &name = "Name", int hp = 100);
        virtual ~Properties();
        
        int getHitPointsLimit() const;
        int getHitPoints() const;
        std::string getName() const;
        Unit *getParent() const;
        
        void setHitPointsLimit(int hp);
        void setHitPoints(int hp);
        void setName(std::string &name);
        virtual int getMagicPower() const;
        virtual int getMagicPowerLimit() const;
        virtual void addMp(int mp);
        virtual void useMp(int spellCost);
        virtual void addHitPoints(int hp);
        virtual void takeDamage(int dmg);
        virtual void takeMagicDamage(int dmg);
};

#endif
