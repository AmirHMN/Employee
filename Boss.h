#include "Employee.h"
#ifndef ADDRESS_BOSS_H
#define ADDRESS_BOSS_H


class Boss : public Employee{
private:
    int numberOfEmployees;
public:

    //constructor
    Boss(const string &name, const string &id, const Address &address, int hourWork, int salaryPerHour, int workToDo,
         int workDone , int numberOfEmployees);

    //copy constructor
    Boss(const Boss &boss);

    //setters and getters
    int getNumberOfEmployees() const;

    void setNumberOfEmployees(int numberOfEmployees);

    //assignment operator
    Boss& operator=(const Boss &);
};


#endif //ADDRESS_BOSS_H
