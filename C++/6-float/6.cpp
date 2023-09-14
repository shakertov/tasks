/*
Определите среднее значение всех элементов последовательности, завершающейся числом 0.

Формат входных данных

Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
Формат выходных данных
Выведите ответ на задачу.

Sample Input:
1
7
9
0
Sample Output:
5.66666666667
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int i = 0;
    double n, m = 0;

    cin >> n;

    while (n != 0) {
        
        i++;
        m = m + n;
        cin >> n;

    }
    m = m / i;
    cout << setprecision(11) << fixed << m;

}