#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <set>
#include "Observable.h"
#include "../exceptions.h"

class Observable;

class Observer{
    private:
        std::set<Observable *> observables;
        
    public:
        Observer();
        virtual ~Observer();
        
        const std::set<Observable *> &getObservables() const;
        
        virtual void addObservable(Observable *obj);
        virtual void removeObservable(Observable *obj);
        virtual void notifyObserverIsDead() = 0;
};

#endif // OBSERVER_H
