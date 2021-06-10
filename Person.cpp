#include <cstring>
#include "Person.h"

Person::Person() {}

Person::Person(const string &name, const string &id, const Address &address) : name(name), id(id), address(address) {}

//copy constructor
Person::Person(const Person &person) {
    this->name = person.name;
    this->id = person.id;
    this->address = person.address;
}


