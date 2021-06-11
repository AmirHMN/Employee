#include "Boss.h"

//constructor
Boss::Boss(const string &name, const string &id, const Address &address, int hourWork, int salaryPerHour, int workToDo,
           int workDone, int numberOfEmployees) : Employee(name, id, address, hourWork, salaryPerHour, workToDo,
                                                           workDone), numberOfEmployees(numberOfEmployees) {}

//copy constructor
Boss::Boss(const Boss &boss) : Employee(boss) {
    numberOfEmployees = boss.numberOfEmployees;
}

int Boss::getNumberOfEmployees() const {
    return numberOfEmployees;
}

void Boss::setNumberOfEmployees(int numberOfEmployees) {
    Boss::numberOfEmployees = numberOfEmployees;
}

//setters and getters