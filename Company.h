#ifndef ADDRESS_COMPANY_H
#define ADDRESS_COMPANY_H
#include "Boss.h"

class Company {
private:
    int budget;
    Boss * boss;
    Employee** employee;
public:
    Company(int budget , Boss * boss , Employee** employee);
};


#endif //ADDRESS_COMPANY_H
