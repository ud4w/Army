#include <iostream>

#include "Units/Soldier.h"
#include "Units/Rogue.h"
#include "Units/Vampire.h"
#include "Units/Berserker.h"
#include "Units/Werewolf.h"
#include "Spellcasters/Healer.h"
#include "Spellcasters/Wizard.h"
#include "Spellcasters/Priest.h"
#include "Spellcasters/Warlock.h"
#include "Spellcasters/Necromancer.h"

#include "exceptions.h"

int main() {
    Unit *soldier = new Soldier();
    SpellCaster *necr = new Necromancer();
    Unit *werewolf = new Werewolf();
    
    std::cout << *necr << '\n';
    std::cout << *soldier << '\n';
    std::cout << *werewolf << '\n';
    
    necr->attack(soldier);
    werewolf->attack(soldier);
    
    // wolf->infect(soldier);
    // wolf->changeState();
    // soldier->changeState();
    // wolf->attack(soldier);
    std::cout << *necr << '\n';
    std::cout << *soldier << '\n';
    std::cout << *werewolf << '\n';


    delete soldier;
    delete necr;
    delete werewolf;
    
    return 0;
}
