#include <iostream>
using namespace std;
class Shape {
public:
    virtual void display() const = 0; 
};
class Rectangle : public Shape {
protected:
    double length;
    double width;

public:
    Rectangle(double l = 0.0, double w = 0.0) : length(l), width(w) {}

    double area() const {
        return length * width;
    }

    void display() const override {
        cout << "Rectangle area: " << area() << endl;
    }
};
class Cuboid : public Rectangle {
private:
    double height;

public:
    Cuboid(double l, double w, double h) : Rectangle(l, w), height(h) {}

    double volume() const {
        return area() * height;
    }

    void display() const override {
        Rectangle::display(); 
        cout << "Cuboid volume: " << volume() << endl;
    }
};

int main() {
    double length, width, height;
    cout << "Enter length, width, and height of the cuboid: ";
    cin >> length >> width >> height;
    Cuboid cuboid(length, width, height);
    cuboid.display();

    return 0;
}

