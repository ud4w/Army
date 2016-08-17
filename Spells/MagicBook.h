#ifndef MAGICBOOK_H
#define MAGICBOOK_H

#include <set>
#include <algorithm>
#include "Spell.h"
#include "DamageSpell.h"
#include "HealSpell.h"
#include "TotalHeal.h"
#include "FatalDamage.h"

#include "../exceptions.h"

struct compare {
    bool operator() (Spell *l, Spell *r) {
        return l->getSpellKind() < r->getSpellKind();
    }
};

struct findBySpellKind {
    private:
        spellKind kind;
        
    public:
    findBySpellKind(spellKind kind) : kind(kind) {}
    
    bool operator() (Spell *spell) {
        return spell->getSpellKind() == kind;
    }
};

class MagicBook {
    private:
        std::set<Spell *, compare> *book;
        std::set<Spell *, compare> ::iterator it;
        
    public:
        MagicBook();
        ~MagicBook();
        
        std::set<Spell *, compare> *getBook() const;
        Spell *takeNextSpell();
        Spell *takeSpell(spellKind kind);
};

std::ostream& operator<<(std::ostream& out, MagicBook &book);

#endif // MAGICBOOK_H
