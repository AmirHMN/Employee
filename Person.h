#include "Address.h"

#ifndef ADDRESS_PRESON_H
#define ADDRESS_PRESON_H


class Person {
private:
    string name;
    string id;
    Address address;
public:
    //constructors
    Person();
    Person(const string &name, const string &id, const Address &address);

    //copy constructor
    Person(const Person &person);
};


#endif //ADDRESS_PRESON_H
