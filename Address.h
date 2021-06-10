#include <iostream>

using namespace std;
#ifndef ADDRESS_ADDRESS_H
#define ADDRESS_ADDRESS_H


class Address {
private:
    string country;
    string city;
    string street;
public:
    //constructors
    Address();
    Address(string, string, string);


    //iostream operators
    friend ostream &operator<<(ostream &, const Address &);
    friend istream &operator>>(istream &,Address &);


    // setter functions
    void setCountry(const string &);
    void setCity(const string &);
    void setStreet(const string &);


    //getter functions
    string getCountry();
    string getCity();
    string getStreet();
};


#endif //ADDRESS_ADDRESS_H
