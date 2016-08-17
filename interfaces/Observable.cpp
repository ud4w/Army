#include "Observable.h"

Observable::Observable(){}
Observable::~Observable(){
    std::set<Observer *>::iterator it = observers.begin();
    
    for ( ; it != observers.end(); it++ ) {
        (*it)->removeObservable(this);
    }
}

const std::set<Observer *> &Observable::getObservers() const{
    return observers;
}
void Observable::addObserver(Observer *obj){
    observers.insert(obj);
}
void Observable::removeObserver(Observer *obj){
    observers.erase(obj);
}
