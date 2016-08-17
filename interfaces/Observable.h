#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <iostream>
#include <set>
#include "Observer.h"
#include "../exceptions.h"

class Observer;

class Observable {
    private:
        std::set<Observer *> observers;
        
    public:
        Observable();
        virtual ~Observable();
        
        const std::set<Observer *> &getObservers() const;
        virtual void addObserver(Observer *obj);
        virtual void removeObserver(Observer *obj);
        virtual void notifyIsDead() = 0;
};

#endif // OBSERVABLE_H
