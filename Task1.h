#pragma once
#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    // Встановлює значення ширини та висоти
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }

    // Повертає площу прямокутника
    double getArea() {
        return width * height;
    }
};

void task1() {
    std::cout << "=== Task 1: Rectangle ===" << std::endl;
    Rectangle rect;
    rect.setDimensions(5.0, 3.0);
    std::cout << "Width: 5.0, Height: 3.0" << std::endl;
    std::cout << "Area: " << rect.getArea() << std::endl;
    std::cout << std::endl;
}