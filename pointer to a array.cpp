#include <iostream>
using namespace std;
int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int *ptr = numbers;
    cout << "The values of the array are: ";
    for (int i = 0; i < 5; ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}
