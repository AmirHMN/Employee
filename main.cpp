#include <iostream>
#include "Employee.h"

int main() {
    Employee e("ali" , "96*12323" ,*(new Address) , 1 , 5 ,25 , 20);
    cout << e.efficiency();
    return 0;
}
