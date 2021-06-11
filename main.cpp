#include <iostream>
#include "Employee.h"

int main() {
    Address ad("iran", "tehran", "shohada");
    Employee e("ali", "98*bc12321", ad, 5, 35, 80, 65);
    Employee e2("mahdi", "88*bc12321", ad, 5, 35, 80, 65);
    e = e2;

    cout << e;
    return 0;
}
