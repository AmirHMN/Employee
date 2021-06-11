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

Employee Company::maxEfficiency() {
    Employee *max;
    max = employee[0];
    for (int i = 1; i < boss->getNumberOfEmployees(); ++i) {
        if (employee[i]->efficiency() > max->efficiency())
            max = employee[i];
    }
    return *max;
}

double Company::averageEfficiency() {
    double avr = 0;
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        avr += employee[i]->efficiency();
    }
    return avr;
}




