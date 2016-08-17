#ifndef SPELLCASTERPROPERTIES_H
#define SPELLCASTERPROPERTIES_H

#include "Properties.h"

class SpellCasterProperties : public Properties {
    private:
        int mp;
        int mpLimit;
    public:
        SpellCasterProperties(Unit *parent, const std::string &name = "Name", int hp = 100, int mp = 120);
        virtual ~SpellCasterProperties();
        
        virtual int getMagicPower() const;
        virtual int getMagicPowerLimit() const;
        virtual void addMp(int mp);
        virtual void useMp(int spellCost);
};

#endif // SPELLCASTERPROPERTIES_H
