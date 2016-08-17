#ifndef WOLFPROPERTIES_H
#define WOLFPROPERTIES_H

#include "Properties.h"

class WolfProperties : public Properties {
    public:
        WolfProperties(Unit *parent, const std::string &name = "Name", int hp = 100);
        virtual ~WolfProperties();
        
        virtual void takeMagicDamage(int dmg);
};

#endif // WOLFPROPERTIES_H
