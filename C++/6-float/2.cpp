/*
Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.
Формат входных данных
Вводится положительное действительное число.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:
1.79
Sample Output:
7
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    double x;

    cin >> x;

    if (x > 0) {
        x = x - trunc(x);
        x = x * 10;
        x = trunc(x);
    }

    cout << x;

}