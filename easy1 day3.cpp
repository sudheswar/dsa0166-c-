#include <iostream>
using namespace std;
class CubeCalculator {
public:
    CubeCalculator(int num) : number(num) {
        cout << "Constructor: CubeCalculator object is created." << endl;
    }
    ~CubeCalculator() {
        cout << "Destructor: CubeCalculator object is being deleted." << endl;
        displayCubes();
    }
    void displayCubes() {
        cout << "Cubes of numbers from 1 to " << number << " are:" << endl;
        for (int i = 1; i <= number; ++i) {
            cout << "Cube of " << i << " is " << (i * i * i) << endl;
        }
    }
private:
    int number;
};
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    CubeCalculator calculator(num);
    return 0;
}

