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

    //setters and getters
    const string &getName() const;

    void setName(const string &name);

    const string &getId() const;

    void setId(const string &id);

    const Address &getAddress() const;

    void setAddress(const Address &address);


};


#endif //ADDRESS_PRESON_H
