#include <iostream>
using namespace std;

class TrianglePattern {
private:
    int rows;

public:
    TrianglePattern() : rows(0) {}
    TrianglePattern(int n) : rows(n) {
        printPattern();
    }
    void printPattern() const {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int num;
    cout << "Enter the number of rows for the triangle pattern: ";
    cin >> num;
    TrianglePattern pattern(num);

    return 0;
}

