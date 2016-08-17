#include "SpellCaster.h"

SpellCaster::SpellCaster(const std::string &name, int dmg, int hp, int mp) : Unit(name, dmg, hp) {
    this->property = new SpellCasterProperties(this, name, hp, mp);
    this->skill = new Skills(this, dmg);
    this->book = new MagicBook();
}

SpellCaster::~SpellCaster(){
    delete spell;
    delete book;
}

Spell *SpellCaster::getSpell() const {
    return spell;
}

bool SpellCaster::getIsHealer() const {
    return isHealer;
}

void SpellCaster::changeSpell(){
    delete spell;
    
    spell = book->takeNextSpell();
}
void SpellCaster::attack(Unit *enemy){
    Unit::attack(enemy);
}
void SpellCaster::useSpell(Unit *target){
    getProperty()->useMp(getSpell()->getCost());
    getSpell()->affects(target, getIsHealer());
}

std::ostream& operator<<(std::ostream& out, const SpellCaster &caster) {
    out << "Unit name: " << caster.getProperty()->getName() << " [maxHP: "
            << caster.getProperty()->getHitPointsLimit() << " / currentHP: "
            << caster.getProperty()->getHitPoints() << "]" << "\n"
            << "Dmg: " << caster.getSkill()->getDamage()
            << " MP: [ " << caster.getProperty()->getMagicPower()
            << "/" << caster.getProperty()->getMagicPowerLimit() << " ]" << "\n";
    return out; 
}
