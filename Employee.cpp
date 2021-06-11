#include "Employee.h"

//constructor
Employee::Employee(const string &name, const string &id, const Address &address, int hourWork, int salaryPerHour,
                   int workToDo, int workDone)
        : Person(name, id, address), hourWork(hourWork), salaryPerHour(salaryPerHour), workToDo(workToDo),
          workDone(workDone) {}


//copy constructor
Employee::Employee(const Employee &employee) : Person(employee) {
    this->hourWork = employee.hourWork;
    this->salaryPerHour = employee.salaryPerHour;
    this->workDone = employee.workDone;
    this->workToDo = employee.workToDo;
}
