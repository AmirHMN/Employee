#include "Person.h"
#ifndef ADDRESS_EMPLOYEE_H
#define ADDRESS_EMPLOYEE_H


class Employee : public Person{
private:
    int hourWork;
    int salaryPerHour;
    int wordToDo;
    int workDone;
public:
    // constructor
    Employee(const string &name, const string &id, const Address &address, int hourWork, int salaryPerHour , int workToDo , int workDone);
};


#endif //ADDRESS_EMPLOYEE_H
