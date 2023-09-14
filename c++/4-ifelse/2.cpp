/*
Даны два целых числа. Программа должна вывести единицу, если первое число больше второго, двойку, если второе больше первого, или ноль, если они равны.

Формат входных данных
Вводятся два числа.
Формат выходных данных
Выведите ответ на задачу.

Sample Input:
1
2
Sample Output:
2
*/
#include <iostream>

using namespace std;

int main() {
	//Комментарий
	setlocale(LC_ALL, "Russian");

	int a, b;
	cin >> a >> b;

	if (a > b) {
		cout << 1;
	}
	else if (a < b) {
		cout << 2;
	}
	else {
		cout << 0;
	}
}