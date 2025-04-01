#include "Observer.hpp"
#ifndef subject_hpp
#define subject_hpp

class Subject
{
public:
    virtual void subscribe(Observer *ob) = 0;
    virtual void unsubscribe(Observer *ob) = 0;
    virtual void notifyChanges() = 0;
};

#endif