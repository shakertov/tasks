/*
Последовательность Фибоначчи определяется так:
F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
По данному числу N определите N-е число Фибоначчи F(N).
Формат входных данных
Вводится натуральное число N.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:
6
Sample Output:
8
*/

#include <iostream>

using namespace std;

int main() {
	// Комментарий
	setlocale(LC_ALL, "Russian");

	int n, i = 1, f = 1, a = 0, b = 1;

	cin >> n;

	while (i < n) {
		if (n == 1) {
			f = 1;
			i++;
		}
		else if (n == 2) {
			f = 1;
			a = 1;
			b = f;
			i++;
		}
		else if (n > 2) {
			f = a + b;
			a = b;
			b = f;
			i++;
		}
	}

	cout << f;

	return 0;
}