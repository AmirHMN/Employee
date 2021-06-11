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

