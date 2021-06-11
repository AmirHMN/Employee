#include "Employee.h"

Employee::Employee(const string &name, const string &id, const Address &address, int hourWork, int salaryPerHour , int workToDo , int workDone)
        : Person(name, id, address), hourWork(hourWork), salaryPerHour(salaryPerHour) , wordToDo(workToDo) , workDone(workDone) {}
