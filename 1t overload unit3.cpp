#include <iostream>
using namespace std;

class CubeCalculator {
private:
    int limit;

public:
    CubeCalculator() : limit(0) {}
    CubeCalculator(int n) : limit(n) {
        displayCubes();
    }
    void displayCubes() const {
        for (int i = 1; i <= limit; ++i) {
            cout << "Cube of " << i << " is " << i * i * i << endl;
        }
    }
};

int main() {
    int num;
    cout << "Enter the integer up to which cubes should be displayed: ";
    cin >> num;
    CubeCalculator calculator(num);

    return 0;
}

