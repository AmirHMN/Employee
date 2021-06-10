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

//setters and getters
const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    this->name = name;
}

const string &Person::getId() const {
    return id;
}

void Person::setId(const string &id) {
    this->id = id;
}

const Address &Person::getAddress() const {
    return address;
}

void Person::setAddress(const Address &address) {
    this->address = address;
}

//iostream operators
ostream &operator<<(ostream &cout, const Person &person) {
    cout << "Name: " << person.name << " id: " << person.id << endl << "address: " << person.address;
}

istream &operator>>(istream &cin, Person &person) {
    cin >> person.name >> person.id >> person.address;
}

//assignment operator
Person &Person::operator=(const Person &person) {
    this->name = person.name;
    this->id = person.id;
    this->address = person.address;
}


