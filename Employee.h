#include <ostream>
#include "Person.h"

#ifndef ADDRESS_EMPLOYEE_H
#define ADDRESS_EMPLOYEE_H


class Employee : public Person {
private:
    int hourWork;
    int salaryPerHour;
    int workToDo;
    int workDone;
public:
    // constructor
    Employee();
    Employee(const string &name, const string &id, const Address &address, int hourWork, int salaryPerHour,
             int workToDo, int workDone);

    //copy constructor
    Employee(const Employee &employee);


    // setters and getters
    int getHourWork() const;

    void setHourWork(int hourWork);

    int getSalaryPerHour() const;

    void setSalaryPerHour(int salaryPerHour);

    int getWorkToDo() const;

    void setWorkToDo(int workToDo);

    int getWorkDone() const;

    void setWorkDone(int workDone);

    //iostream operators
    friend ostream &operator<<(ostream &os, const Employee &employee);

    friend istream &operator>>(istream &is, Employee &employee);

    //assignment operator
    Employee operator=(const Employee&);

    //override validate
    virtual bool validate();


    virtual double calculateSalary() const;

    double efficiency() const;
};


#endif //ADDRESS_EMPLOYEE_H
