#include "Company.h"

Company::Company(int budget, Boss *boss, Employee **employee) : budget(budget) {
    boss = new Boss();
    cin >> *boss;
    *employee = new Employee[boss->getNumberOfEmployees()];
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        employee[i] = new Employee[1];
    }
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        cin >> *employee[i];
    }
}

//copy constructor
Company::Company(const Company &company) {
    budget = company.budget;
    boss = new Boss();
    boss = company.boss;
    *employee = new Employee[boss->getNumberOfEmployees()];
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        employee[i] = new Employee[1];
    }
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        employee[i] = company.employee[i];
    }
}

//destructor
Company::~Company() {
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        delete[] employee[i];
    }
    delete employee;
    delete boss;
}

Employee &Company::maxEfficiency() {
    Employee *max;
    max = employee[0];
    //found employee has max efficiency
    for (int i = 1; i < boss->getNumberOfEmployees(); ++i) {
        if (employee[i]->efficiency() > max->efficiency())
            max = employee[i];
    }
    return *max;
}

double Company::averageEfficiency() {
    double avr = 0;
    // average of efficiency of all employees
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        avr += employee[i]->efficiency();
    }
    return avr;
}

void Company::changeBoss() {
    Employee *temp;
    if (boss->efficiency() < 40) {
        for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
            if (employee[i]->efficiency() == maxEfficiency().efficiency()) {
                int numberOfEmployee = boss->getNumberOfEmployees();
                temp = boss;
                boss = dynamic_cast<Boss *>(employee[i]);
                employee[i] = temp;
                boss->setNumberOfEmployees(numberOfEmployee);
                break;
            }
        }
    }
}

void Company::gift() {
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        if (employee[i]->getId().substr(0, 2) < "90") // 5 hour gift for earlier than 90th years
            employee[i]->setHourWork(employee[i]->getHourWork() + 5);
        if (employee[i]->efficiency() == maxEfficiency().efficiency())//10 hours gift for max efficiency
            employee[i]->setHourWork(employee[i]->getHourWork() + 10);
    }
}

void Company::payForService() {
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        if (employee[i]->getAddress().getCity() != "Tehran") // 7 hours gift for who aren't in tehran
            employee[i]->setHourWork(employee[i]->getHourWork() + 7);
    }
}

bool Company::isEnoughBudget() {
    double sumOfSalary = 0;
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        sumOfSalary += employee[i]->calculateSalary();
    }
    if (sumOfSalary > budget)return false;
    return true;
}




