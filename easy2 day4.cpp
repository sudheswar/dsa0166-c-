#include <iostream>
using namespace std;

class Base {
protected:
    int baseValue;
public:
    void setBaseValue(int bv) {
        baseValue = bv;
    }
    void printBaseValue() {
        cout << "Base Value: " << baseValue << endl;
    }
};

class Derived : private Base {
public:
    void setDerivedValue(int dv) {
        setBaseValue(dv);
    }
    void printDerivedValue() {
        printBaseValue();
    }
};

int main() {
    Derived d;
    d.setDerivedValue(42);
    d.printDerivedValue();
    return 0;
}

