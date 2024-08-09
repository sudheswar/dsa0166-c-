#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }
    void printDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;
public:
    void setRollNumber(int rn) {
        rollNumber = rn;
    }
    void printStudentDetails() {
        printDetails();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s;
    s.setDetails("John Doe", 20);
    s.setRollNumber(123);
    s.printStudentDetails();
    return 0;
}

