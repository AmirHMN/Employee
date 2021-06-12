#include "Address.h"

#ifndef ADDRESS_PRESON_H
#define ADDRESS_PRESON_H


class Person {
protected:
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
    string getName() const;

    void setName(const string &name);

    string getId() const;

    void setId(const string &id);

    Address getAddress() const;

    void setAddress(const Address &address);

    //iostream operators
    friend ostream &operator<<(ostream &, const Person &);

    friend istream &operator>>(istream &, Person &);

    //assignment operator
    Person &operator=(const Person &);

    virtual bool validate();
};


#endif //ADDRESS_PRESON_H
