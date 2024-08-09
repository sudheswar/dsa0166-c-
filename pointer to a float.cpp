#include <iostream>
using namespace std;
int main() {
    float number = 3.14;
    float *ptr = &number;
    cout << "The value of the float is: " << *ptr << endl;
     return 0;
}

