#include "Boss.h"

//constructor
Boss::Boss(const string &name, const string &id, const Address &address, int hourWork, int salaryPerHour, int workToDo,
           int workDone, int numberOfEmployees) : Employee(name, id, address, hourWork, salaryPerHour, workToDo,
                                                           workDone), numberOfEmployees(numberOfEmployees) {}

//copy constructor
Boss::Boss(const Boss &boss) : Employee(boss) {
    numberOfEmployees = boss.numberOfEmployees;
}

//setters and getters
int Boss::getNumberOfEmployees() const {
    return numberOfEmployees;
}

void Boss::setNumberOfEmployees(int numberOfEmployees) {
    Boss::numberOfEmployees = numberOfEmployees;
}

//assignment operator
Boss &Boss::operator=(const Boss &boss) {
    Employee::operator=(boss);
    numberOfEmployees = boss.numberOfEmployees;
}

ostream &operator<<(ostream &os, const Boss &boss) {
    os << static_cast<const Employee &>(boss) << " - numbers of employees : " << boss.numberOfEmployees;
}

istream &operator>>(istream &is, Boss &boss) {
    is >> static_cast<Employee &>(boss) >> boss.numberOfEmployees;
}
