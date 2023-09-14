/*
Даны длины сторон треугольника. Вычислите площадь треугольника.
Формат входных данных
Вводятся три положительных числа.
Формат выходных данных
Выведите ответ на задачу.

Sample Input:
3
4
5
Sample Output:
6
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    double a, b, c, p = 0, s = 0;

    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0) {
        p = a / 2.0 + b / 2.0 + c / 2.0; // полупериметр
        s = sqrt(p * (p - a) * (p - b) * (p - c));
    }

    cout << s;

}