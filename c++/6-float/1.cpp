/*
Дано положительное действительное число X. Выведите его дробную часть.

Формат входных данных

Вводятся положительное действительное число.

Формат выходных данных
Выведите ответ на задачу.

Sample Input:
17.9
Sample Output:
0.9
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
    }

    cout << x;

}
