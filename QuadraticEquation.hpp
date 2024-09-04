#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

#include "Equation.h"
#include <iostream>
#include <cmath>

class QuadraticEquation : public Equation {
private:
    double a; // ����������� ��� x^2
    double b; // ����������� ��� x
    double c; // ��������� ����

public:
    // �����������
    QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

    // ����� ��� ������� ���������
    void solve() const override {
        double discriminant = b * b - 4 * a * c;
        if (discriminant > 0) {
            double x1 = (-b + sqrt(discriminant)) / (2 * a);
            double x2 = (-b - sqrt(discriminant)) / (2 * a);
            std::cout << "������� ����������� ���������: x1 = " << x1 << ", x2 = " << x2 << std::endl;
        }
        else if (discriminant == 0) {
            double x = -b / (2 * a);
            std::cout << "������� ����������� ���������: x = " << x << std::endl;
        }
        else {
            std::cout << "���������� ��������� �� ����� ������������ �������." << std::endl;
        }
    }

    // ����� ��� ����������� ���������
    void display() const override {
        std::cout << "���������� ���������: " << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
    }
};

#endif // QUADRATIC_EQUATION_H