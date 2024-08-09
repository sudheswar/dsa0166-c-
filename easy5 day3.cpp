#include <iostream>
using namespace std;
class ReverseNumber {
public:
    ReverseNumber() {
        number = 0;
    }

    ReverseNumber(int num) {
        number = num;
        displayReverse();
    }
    void displayReverse() {
        int reversed = 0;
        int temp = number;
        while (temp != 0) {
            int digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        cout << "The reverse of the number " << number << " is " << reversed << endl;
    }
private:
    int number;
};

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    ReverseNumber reverse(num);
    return 0;
}

