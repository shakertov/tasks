/*
Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада в конце года. Вклад составляет X рублей Y копеек. Определите размер вклада через год.

При решении этой задачи нельзя пользоваться условными инструкциями и циклами.

Формат входных данных
Программа получает на вход целые числа P, X, Y.
Формат выходных данных
Программа должна вывести два числа: величину вклада через год в рублях и копейках. Дробная часть копеек отбрасывается.

Sample Input:
12
179
0
Sample Output:
200 48
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    double rate, rub, kop;

    cin >> rate >> rub >> kop;

    rate = rate / 100;

    rub = rub * 100; // kopeek
    rub = rub + kop; // kopeek
    rub = rub * rate + rub;

    rub = rub / 100;
    kop = rub * 100 - trunc(rub) * 100;

    rub = trunc(rub);
    kop = trunc(kop);

    cout << rub << " " << kop;

}