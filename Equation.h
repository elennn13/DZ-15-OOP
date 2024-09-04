#ifndef EQUATION_H
#define EQUATION_H

class Equation {
public:
    // ����������� ���������� ��� ����������� �������� ����������� ��������
    virtual ~Equation() {}

    // ����� ����������� ������� ��� ���������� ������
    virtual void solve() const = 0;

    // ����� ����������� ������� ��� ����������� ���������
    virtual void display() const = 0;
};

#endif 