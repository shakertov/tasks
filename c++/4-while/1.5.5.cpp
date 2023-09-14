/*
По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.
Формат входных данных
Вводится натуральное число.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:
50
Sample Output:
1 2 4 8 16 32
*/

#include <iostream>

using namespace std;

int main() {
	// Комментарий
	setlocale(LC_ALL, "Russian");

	int n, answer;
	cin >> n;

	answer = 1;

	while (answer <= n) {
		cout << answer << " ";
		answer = answer * 2;
	}


}