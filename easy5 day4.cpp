#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() = 0; 
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double area() override {
        return side * side;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return M_PI * radius * radius;
    }
};

int main() {
    Shape* shape1 = new Square(4.0);
    Shape* shape2 = new Circle(3.0);

    cout << "Area of Square: " << shape1->area() << endl;
    cout << "Area of Circle: " << shape2->area() << endl;

    delete shape1;
    delete shape2;

    return 0;
}

