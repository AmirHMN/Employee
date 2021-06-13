#include <fstream>
#include <iostream>
#include "Company.h"
#include <algorithm>

Company::Company(int budget, Boss *b, Employee **emp) : budget(budget) {
    boss = new Boss(*b);
    employee = new Employee *[boss->getNumberOfEmployees()];
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        employee[i] = new Employee(*emp[i]);
    }
}

//copy constructor
Company::Company(const Company &company) {
    budget = company.budget;
    boss = company.boss;
    employee = new Employee *[boss->getNumberOfEmployees()];
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        employee[i] = new Employee(*company.employee[i]);
    }
}

//destructor
Company::~Company() {
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        delete employee[i];
    }
    delete[] employee;
    delete boss;
}

Employee *Company::maxEfficiency() {
    Employee *max = employee[0];
    //found employee has max efficiency
    for (int i = 1; i < boss->getNumberOfEmployees(); ++i) {
        if (employee[i]->efficiency() > max->efficiency())
            max = employee[i];
    }
    return max;
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

    if (boss->efficiency() < 40.0) {
        Employee *max = maxEfficiency();
        for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
            if (employee[i]->efficiency() == max->efficiency()) {
                int numberOfEmployee = boss->getNumberOfEmployees();
                Employee *temp = boss;
                boss = static_cast<Boss *>(employee[i]);
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
        if (employee[i]->efficiency() == maxEfficiency()->efficiency())//10 hours gift for max efficiency
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

//write on file : name - id - efficiency - total salary
void Company::writeOnFile() {
    ofstream write("details.txt");

    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        write << employee[i]->getName() << " " << employee[i]->getId() << " " << employee[i]->efficiency() << " "
              << employee[i]->calculateSalary() << endl;
    }
}

ostream &operator<<(ostream &os, const Company &company) {
   
}

istream &operator>>(istream &is, Company &company) {
    is >> company.budget;
    is >> *company.boss;
    for (int i = 0; i < company.boss->getNumberOfEmployees(); ++i) {
        is >> *company.employee[i];
    }
    return is;
}




