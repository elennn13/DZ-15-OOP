#include "LinearEquation.hpp"
#include "QuadraticEquation.hpp"

int main() {
    setlocale(LC_ALL, "ru");
    LinearEquation linEq(2, -4);
    linEq.display();
    linEq.solve();

    QuadraticEquation quadEq(1, -3, 2);
    quadEq.display();
    quadEq.solve();

    return 0;
}