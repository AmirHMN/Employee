#include <cstring>
#include "Person.h"

Person::Person() {}

Person::Person(const string &name, const string &id, const Address &address) : name(name), id(id), address(address) {
    if (!validate()) {
        cout << "invalid id";
        exit(1);
    }
}

//copy constructor
Person::Person(const Person &person) {
    this->name = person.name;
    this->id = person.id;
    this->address = person.address;
}

//setters and getters
string Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    this->name = name;
}

string Person::getId() const {
    return id;
}

void Person::setId(const string &id) {
    this->id = id;
    if (!validate()) {
        cout << "invalid id";
        exit(1);
    }
}

Address Person::getAddress() const {
    return address;
}

void Person::setAddress(const Address &address) {
    this->address = address;
}

//iostream operators
ostream &operator<<(ostream &cout, const Person &person) {
    cout << "Name: " << person.name << " - id: " << person.id << " - address: " << person.address;
    return cout;
}

istream &operator>>(istream &cin, Person &person) {
    cin >> person.name >> person.id >> person.address;
    return cin;
}

//assignment operator
Person &Person::operator=(const Person &person) {
    this->name = person.name;
    this->id = person.id;
    this->address = person.address;
    return *this;
}

bool Person::validate() {
    //checks if the ID has 8 to 10 digits
    if (id.length() < 8 || id.length() > 10)return false;
    //checks that first 2 digits be between 84-99
    if (id.substr(0, 2) < "84" || id.substr(0, 2) > "99") return false;
    //check for non-numerical character -> 8 digits : 1 char / 9 digits : 2 char / 10 digits : 3 char (placed after first 2 digits)
    switch (id.length()) {
        case 8:
            if (id[2] >= '0' && id[2] <= '9')return false;
            break;
        case 9:
            if ((id[2] >= '0' && id[2] <= '9') || (id[3] >= '0' && id[3] <= '9'))
                return false;
            break;
        case 10:
            if ((id[2] >= '0' && id[2] <= '9') || (id[3] >= '0' && id[3] <= '9') || (id[4] >= '0' && id[4] <= '9'))
                return false;
            break;
    }
    //check for 5 last digits be smaller than 4 or bigger than 6
    for (int i = id.length() - 5; i < id.length(); ++i) {
        if ((id[i] >= '4' && id[i] <= '6') || (id[i] < '0' || id[i] > '9'))
            return false;
    }
    return true;
}

