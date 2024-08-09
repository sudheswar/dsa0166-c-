#include <iostream>
using namespace std;
class SeriesSum {
public:
    SeriesSum() {
        number = 0;
    }
    SeriesSum(int num) {
        number = num;
        calculateSum();
    }
    void calculateSum() {
        if (number <= 0) {
            cout << "Invalid number. Please enter a positive integer." << endl;
            return;
        }
        int sum = 0;
        for (int i = 1; i <= number; ++i) {
            sum += i;
        }
        cout << "The sum of the series from 1 to " << number << " is " << sum << endl;
    }
private:
    int number;
};
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    SeriesSum series(num);
    return 0;
}

