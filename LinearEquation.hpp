#ifndef LINEAR_EQUATION_H
#define LINEAR_EQUATION_H

#include "Equation.h"
#include <iostream>

class LinearEquation : public Equation {
private:
    double a; // Коэффициент при x
    double b; // Свободный член

public:
    // Конструктор
    LinearEquation(double a, double b) : a(a), b(b) {}

    // Метод для решения уравнения
    void solve() const override {
        if (a != 0) {
            double x = -b / a;
            std::cout << "Решение линейного уравнения: x = " << x << std::endl;
        }
        else {
            if (b == 0) {
                std::cout << "Линейное уравнение имеет бесконечно много решений." << std::endl;
            }
            else {
                std::cout << "Линейное уравнение не имеет решений." << std::endl;
            }
        }
    }

    // Метод для отображения уравнения
    void display() const override {
        std::cout << "Линейное уравнение: " << a << "x + " << b << " = 0" << std::endl;
    }
};
#endif // LINEAR_EQUATION_H