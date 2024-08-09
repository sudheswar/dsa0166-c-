#include <iostream>
using namespace std;
class TrianglePattern {
public:
    TrianglePattern() {
        number = 0;
    }
    TrianglePattern(int num) {
        number = num;
        displayPattern();
    }
    void displayPattern() {
        if (number <= 0) {
            cout << "Invalid number. Please enter a positive integer." << endl;
            return;
        }
        for (int i = 1; i <= number; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
private:
    int number;
};
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    TrianglePattern pattern(num);
    return 0;
}

