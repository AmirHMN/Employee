#include "Address.h"

Address::Address() {}

Address::Address(string co, string ci, string st) : country(co), city(ci), street(st) {};

ostream &operator<<(ostream &cout, const Address &address) {
    cout << "country : " << address.country << " - city : " << address.city << " - street : " << address.street;
    return cout;
}

istream &operator>>(istream &cin, Address &address) {
    std::cout << "Enter country:" << endl;
    cin >> address.country;
    std::cout << "Enter city:" << endl;
    cin >> address.city;
    std::cout  << "Enter street:" << endl;
    cin >> address.street;
    return cin;
}

void Address::setCountry(const string & country) {
    this->country = country;
}

void Address::setCity(const string & city) {
this->city= city;
}

void Address::setStreet(const string & street) {
this->street = street;
}

string Address::getCountry() {
    return country;
}

string Address::getCity() {
    return city;
}

string Address::getStreet() {
    return street;
}
