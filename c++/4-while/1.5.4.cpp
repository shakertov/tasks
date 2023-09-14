/*
Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
Формат входных данных
Вводится целое положительное число.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:
15
Sample Output:
3
*/

#include <iostream>

using namespace std;

int main() {
	// Комментарий
	setlocale(LC_ALL, "Russian");

	int n, i = 2;
	cin >> n;

	while (n % i != 0) {
		if (n == 1) break;
		i = i + 1;
	}

	if (n % i == 0) {
		cout << i;
	}
	
}