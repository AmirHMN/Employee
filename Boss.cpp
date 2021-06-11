#include "Boss.h"

//constructor
Boss::Boss(const string &name, const string &id, const Address &address, int hourWork, int salaryPerHour, int workToDo,
           int workDone, int numberOfEmployees) : Employee(name, id, address, hourWork, salaryPerHour, workToDo, workDone) , numberOfEmployees(numberOfEmployees){}
