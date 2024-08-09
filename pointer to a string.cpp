#include <iostream>
#include <string>
using namespace std;
int main() {
    string text = "Hello, World!";
    string *ptr = &text;
    cout << "The value of the string is: " << *ptr << endl;
    return 0;
}
