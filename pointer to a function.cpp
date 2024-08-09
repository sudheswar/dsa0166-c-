#include <iostream>
using namespace std;
void sayHello() {
    cout << "Hello, World!" << endl;
}

void sayGoodbye() {
    cout << "Goodbye, World!" << endl;
}
int main() {
    void (*ptr)();
    ptr = &sayHello;
    (*ptr)();  
    ptr = &sayGoodbye;
    (*ptr)();  
     return 0;
}
