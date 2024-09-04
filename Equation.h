#ifndef EQUATION_H
#define EQUATION_H

class Equation {
public:
    // Виртуальный деструктор для правильного удаления производных объектов
    virtual ~Equation() {}

    // Чисто виртуальная функция для вычисления корней
    virtual void solve() const = 0;

    // Чисто виртуальная функция для отображения уравнения
    virtual void display() const = 0;
};

#endif 