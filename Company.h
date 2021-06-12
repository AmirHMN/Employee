#ifndef ADDRESS_COMPANY_H
#define ADDRESS_COMPANY_H

#include "Boss.h"

class Company {
private:
    int budget;
    Boss *boss;
    Employee **employee;
public:
    //constructor
    Company(int budget, Boss *boss, Employee **employee);

    //copy constructor
    Company(const Company &company);

    //destructor
    ~Company();

    Employee& maxEfficiency();

    double averageEfficiency();

    void changeBoss();

    void gift();
};


#endif //ADDRESS_COMPANY_H
