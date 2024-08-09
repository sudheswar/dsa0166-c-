#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}
    int area() {
        return this->width * this->height; 
    }
    void displayDimensions() {
        cout << "Width: " << this->width << ", Height: " << this->height << endl; 
    }
    void setDimensions(int w, int h) {
        this->width = w;  
        this->height = h; 
    }
    bool isEqualTo(const Rectangle& other) {
        return (this->width == other.width && this->height == other.height); 
    }
};

int main() {
    Rectangle rect1(10, 20);
    Rectangle rect2(10, 20);

    rect1.displayDimensions();
    rect2.displayDimensions();

    if (rect1.isEqualTo(rect2)) {
        cout << "rect1 is equal to rect2" << endl;
    } else {
        cout << "rect1 is not equal to rect2" << endl;
    }

    rect1.setDimensions(15, 25);
    rect1.displayDimensions();

    return 0;
}

