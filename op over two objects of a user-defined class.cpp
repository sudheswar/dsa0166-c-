#include <iostream>
#include <string>
class Person {
private:
std::string name;
int age;
public:
Person(const std::string& n, int a) : name(n), age(a) {}
bool operator==(const Person& other) const {
return (name == other.name && age == other.age);
}
void display() const {
std::cout << "Name: " << name << ", Age: " << age << std::endl;
}
};
int main() {
Person p1("sarathi", 19);
Person p2("sudhes", 19);
Person p3("shesha", 18);
p1.display();
p2.display();
p3.display();
if (p1 == p2) {
std::cout << "p1 and p2 are equal." << std::endl;
} else {
std::cout << "p1 and p2 are  equal." << std::endl;
}
if (p1 == p3) {
std::cout << "p1 and p3 are equal." << std::endl;
} else {
std::cout << "p1 and p3 are not equal." << std::endl;
}
return 0;
}
