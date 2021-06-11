#include <iostream>
#include "Employee.h"
int main() {
    Address ad("iran" , "tehran" , "shohada");
    Employee e("ali" , "98abc12321" , ad, 5 , 8 , 4 , 7 );
    cout << e;
    return 0;
}
