#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate area of a rectangle
double areaRectangle(double length, double width) {
    return length * width;
}

// Function to calculate area of a square
double areaSquare(double side) {
    return side * side;
}

// Function to calculate area of a triangle
double areaTriangle(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate area of a circle
double areaCircle(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate area of a parallelogram
double areaParallelogram(double base, double height) {
    return base * height;
}

// Function to calculate area of a trapezium
double areaTrapezium(double a, double b, double height) {
    return 0.5 * (a + b) * height;
}

// Function to calculate area of an ellipse
double areaEllipse(double a, double b) {
    return M_PI * a * b;
}

int main() {
    cout << "Area of Rectangle: " << areaRectangle(5, 10) << endl;
    cout << "Area of Square: " << areaSquare(4) << endl;
    cout << "Area of Triangle: " << areaTriangle(6, 8) << endl;
    cout << "Area of Circle: " << areaCircle(7) << endl;
    cout << "Area of Parallelogram: " << areaParallelogram(5, 12) << endl;
    cout << "Area of Trapezium: " << areaTrapezium(6, 10, 5) << endl;
    cout << "Area of Ellipse: " << areaEllipse(7, 5) << endl;
    
    return 0;
}
