#include <iostream>
using namespace std;
int main() {
    char characters[] = "Hello";
    char *ptr = characters;
    cout << "The characters in the array are: ";
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    cout << endl;
    return 0;
}
