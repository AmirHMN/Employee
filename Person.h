#include "Address.h"

#ifndef ADDRESS_PRESON_H
#define ADDRESS_PRESON_H


class Person {
private:
    string name;
    string id;
    Address address;
public:
    Person();
    Person(const string &name, const string &id, const Address &address);
};


#endif //ADDRESS_PRESON_H
