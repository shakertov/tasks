/*
По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.
Формат входных данных
Вводится натуральное число.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:
50
Sample Output:
1 4 9 16 25 36 49
*/

#include <iostream>

using namespace std;

int main() {
	// Комментарий
	setlocale(LC_ALL, "Russian");

	int n, i = 1, q = 0;
	cin >> n;

	while (q <= n) {
		q = i * i;
		i = i + 1;
		if (q <= n)
			cout << q << " ";
		else
			return 0;
	}
	
}