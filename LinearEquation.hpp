#ifndef LINEAR_EQUATION_H
#define LINEAR_EQUATION_H

#include "Equation.h"
#include <iostream>

class LinearEquation : public Equation {
private:
    double a; // ����������� ��� x
    double b; // ��������� ����

public:
    // �����������
    LinearEquation(double a, double b) : a(a), b(b) {}

    // ����� ��� ������� ���������
    void solve() const override {
        if (a != 0) {
            double x = -b / a;
            std::cout << "������� ��������� ���������: x = " << x << std::endl;
        }
        else {
            if (b == 0) {
                std::cout << "�������� ��������� ����� ���������� ����� �������." << std::endl;
            }
            else {
                std::cout << "�������� ��������� �� ����� �������." << std::endl;
            }
        }
    }

    // ����� ��� ����������� ���������
    void display() const override {
        std::cout << "�������� ���������: " << a << "x + " << b << " = 0" << std::endl;
    }
};
#endif // LINEAR_EQUATION_H