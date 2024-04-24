
#include <iostream>
#include<cmath>
using namespace std;


// Function prototypes
double calculateTriangleArea(double base, double height);
double calculateRectangleArea(double length, double width);
double calculateSquareArea(double side);

int main() {
    int choice;
    double base, height, length, width, side;

    cout << "Select a shape to calculate its area:" << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Square" << endl;
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
            break;
        case 2:
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
            break;
        case 3:
            cout << "Enter side length of the square: ";
            cin >> side;
            cout << "Area of the square: " << calculateSquareArea(side) << endl;
            break;
        default:
            cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
            break;
    }

    return 0;
}

// Function definitions
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double side) {
    return side * side;
}






