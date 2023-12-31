/*
Симметричное число

Дано четырехзначное число. Определите, является ли его десятичная запись симметричной. Если число симметричное, то выведите 1, иначе выведите любое другое целое число. Число может иметь меньше четырех знаков, тогда нужно считать, что его десятичная запись дополняется слева незначащими нулями.

Формат входных данных

Вводится единственное число.

Формат выходных данных

Выведите одно целое число - ответ на задачу.

Sample Input 1:
2002
Sample Output 1:
1
Sample Input 2:
2008
Sample Output 2:
37
*/
#include <iostream>

int main() {
    int n, a, b, c, d, r, s, w;
	std::cin >> n;
	a = n / 1000;
	b = n / 100 % 10;
	c = n % 100 / 10;
	d = n % 10;

	r = (a - d) * (a - d);
	s = (b - c) * (b - c);

	w = r + s + 1;

	std::cout << w;
    return 0;
}