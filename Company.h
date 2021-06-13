#ifndef ADDRESS_COMPANY_H
#define ADDRESS_COMPANY_H

#include "Boss.h"

class Company {
public:
    int budget;
    Boss *boss;
    Employee **employee;
public:
    //constructor
    Company(int budget, Boss * boss, Employee **employee);

    //copy constructor
    Company(const Company &company);

    //destructor
    ~Company();

    Employee* maxEfficiency();

    double averageEfficiency();

    void changeBoss();

    void gift();

    void payForService();

    bool isEnoughBudget();

    void writeOnFile();

    friend ostream &operator<<(ostream &os, const Company &c1);
    friend istream &operator>>(istream &is, Company &company);
};


#endif //ADDRESS_COMPANY_H
