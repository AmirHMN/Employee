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


// setters and getters
int Employee::getHourWork() const {
    return hourWork;
}

void Employee::setHourWork(int hourWork) {
    this->hourWork = hourWork;
}

int Employee::getSalaryPerHour() const {
    return salaryPerHour;
}

void Employee::setSalaryPerHour(int salaryPerHour) {
    this->salaryPerHour = salaryPerHour;
}

int Employee::getWorkToDo() const {
    return workToDo;
}

void Employee::setWorkToDo(int workToDo) {
    this->workToDo = workToDo;
}

int Employee::getWorkDone() const {
    return workDone;
}

void Employee::setWorkDone(int workDone) {
    this->workDone = workDone;
}
