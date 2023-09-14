/*
Сумма цифр трехзначного числа

Дано целое трехзначное число. Найдите сумму его цифр.

Формат входных данных

На вход дается число от 100 до 999.

Формат выходных данных

Выведите одно целое число - ответ на задачу.

Sample Input:
476
Sample Output:
17
*/
#include <iostream>
using namespace std;
int main() {
    // put your code here
    int n, f, s, t, r;
    cin >> n;
    f = n / 100;
    s = n % 100 / 10;
    t = n % 10;
    r = f + s + t;
    cout << r;
    return 0;
}