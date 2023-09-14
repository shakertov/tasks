/*
Шахматный слон ходит по диагонали. Даны две различные клетки шахматной доски, определите, может ли слон попасть с первой клетки на вторую одним ходом.

Формат входных данных
Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
Формат выходных данных
Программа должна вывести YES, если из первой клетки ходом слона можно попасть во вторую или NO в противном случае.

Sample Input:
4
4
5
5
Sample Output:
YES
*/
#include <iostream>

using namespace std;

int main() {
	//Комментарий
	setlocale(LC_ALL, "Russian");

	int a, b, c, d, row, string;
	cin >> a >> b >> c >> d;

	row = (a - c > 0) ? (a - c) : -(a - c);
	string = (b - d > 0) ? (b - d) : -(b - d);

	if (row == string) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}