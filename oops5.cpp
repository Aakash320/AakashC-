#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    void setDimensions(double len, double wid) {
        length = len;
        width = wid;
    }

    double getArea() {
        return length * width;
    }

    double getPerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);
    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;
    return 0;
}