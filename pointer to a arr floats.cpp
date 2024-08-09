#include <iostream>
using namespace std;
int main() {
    float floats[] = {3.14f, 2.718f, 1.618f, 4.669f};
    float *ptr = floats;
    cout << "The values of the array are: ";
    for (int i = 0; i < 4; ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}
