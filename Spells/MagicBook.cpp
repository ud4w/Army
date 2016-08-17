#include "MagicBook.h"

MagicBook::MagicBook(){
    this->book = new std::set<Spell *, compare> ();
    book->insert(new DamageSpell());
    book->insert(new HealSpell());
    book->insert(new TotalHeal());
    book->insert(new FatalDamage());
    this->it = book->begin();
}
MagicBook::~MagicBook(){
    for ( std::set<Spell *, compare> ::iterator it = book->begin(); it != book->end(); it++ ) {
        delete *it;
    }
    delete book;
}

std::set<Spell *, compare> *MagicBook::getBook() const{
    return book;
}

Spell *MagicBook::takeNextSpell(){
    Spell *spell;
    
    if ( it != book->end() ) {
        spell = *it;
        it++;
    } else {
        it = book->begin();
        spell = *it;
        it++;
    }
    
    return spell;
}

Spell *MagicBook::takeSpell(spellKind kind){
    std::set<Spell *, compare> ::iterator result = std::find_if(book->begin(), book->end(), findBySpellKind(kind));
    
    if ( result != book->end() ) {
        Spell *spell = *result;
        return spell;
    } else {
        throw unavailableSpellException();
    }
}


std::ostream& operator<<(std::ostream& out, MagicBook &book){
        std::set<Spell *, compare> ::iterator it = book.getBook()->begin();
        
        for ( ; it != book.getBook()->end(); it++ ) {
        std::cout << *(*it) << std::endl;
        }
    
    return out;
}

