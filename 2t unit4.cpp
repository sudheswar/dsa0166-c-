#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int id;
public:
    virtual void getData() {
        cout << "Enter name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter ID: ";
        cin >> id;
    }
    virtual void displayData() const {
        cout << "Name: " << name << "\nID: " << id << endl;
    }
    virtual float bonus() const {
        return 0.0;
    }
};
class Admin : public Person {
protected:
    float adminBonus;
public:
    void getData() override {
        Person::getData();
        cout << "Enter Admin bonus: ";
        cin >> adminBonus;
    }
    void displayData() const override {
        Person::displayData();
        cout << "Admin Bonus: $" << adminBonus << endl;
    }
    float bonus() const override {
        return adminBonus;
    }
};
class Account : public Person {
protected:
    float accountBonus;
public:
    void getData() override {
        Person::getData();
        cout << "Enter Account bonus: ";
        cin >> accountBonus;
    }
    void displayData() const override {
        Person::displayData();
        cout << "Account Bonus: $" << accountBonus << endl;
    }
    float bonus() const override {
        return accountBonus;
    }
};
class Master : public Admin, public Account {
public:
    void getData() override {
        Admin::getData(); 
    }
    void displayData() const override {
        Admin::displayData();
    }
    float bonus() const override {
        return Admin::bonus() + Account::bonus();
    }
};

int main() {
    Master employee;
    cout << "Enter employee data:" << endl;
    employee.getData();
    cout << "\nEmployee Details:" << endl;
    employee.displayData();
    cout << "Total Bonus: $" << employee.bonus() << endl;
    return 0;
}

