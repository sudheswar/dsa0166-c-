#include <iostream>
using namespace std;
int main() {
    double number = 9.81;
    double *ptr = &number;
    cout << "The value of the double is: " << *ptr << endl;
    return 0;
}

