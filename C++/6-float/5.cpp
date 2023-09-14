/*
Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада через год. Вклад составляет X рублей Y копеек. Определите размер вклада через K лет.
Формат входных данных
Программа получает на вход целые числа P, X, Y, K .
Формат выходных данных
Программа должна вывести два числа: величину вклада через K лет в рублях и копейках. Дробное число копеек по истечение года отбрасывается. Перерасчет суммы вклада (с отбрасыванием дробных частей копеек) происходит ежегодно.
Примечание
В этой задаче часто возникают проблемы с точностью. Если они возникли у вас - попробуйте решить задачу в целых числах.

Sample Input:
12
179
0
5
Sample Output:
315 43
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    double rate, rub, kop, y, step = 0;

    cin >> rate >> rub >> kop >> y;

    rate = rate / 100;

    rub = rub * 100;
    rub = rub + kop;

    // Формула для сложного процента
    while (step < y) {
        step++;
        rub = rub * (1 + rate); // double
        rub = trunc(rub);
    }

    kop = int(rub) % 100;
    rub = int(rub) / 100;

    cout << rub << " " << kop;

}