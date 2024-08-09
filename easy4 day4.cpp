#include <iostream>
using namespace std;

class Base1 {
public:
    void printBase1() {
        cout << "This is Base1 class" << endl;
    }
};

class Base2 {
public:
    void printBase2() {
        cout << "This is Base2 class" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void printDerived() {
        cout << "This is Derived class" << endl;
    }
};

int main() {
    Derived d;
    d.printBase1();
    d.printBase2();
    d.printDerived();
    return 0;
}

