#include <iostream>
using namespace std;
int main() {
    char character = 'A';
    char *ptr = &character;
    cout << "The value of the char is: " << *ptr << endl;
    
    return 0;
}

