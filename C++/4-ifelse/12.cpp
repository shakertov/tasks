/*
Яша плавал в бассейне размером N×M метров и устал. В этот момент он обнаружил, что находится на расстоянии X метров от одного из длинных бортиков (не обязательно от ближайшего) и Y метров от одного из коротких бортиков. Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик?

Формат входных данных
Программа получает на вход числа N, M, X, Y.
Формат выходных данных
Программа должна вывести число метров, которое нужно проплыть Яше до бортика.

Sample Input:
23
52
8
43
Sample Output:
8
*/
#include <iostream>

using namespace std;

int main() {
	//Комментарий
	setlocale(LC_ALL, "Russian");

	int m, n, x, y, e, w;
	cin >> m >> n >> x >> y;

	if (m != 0 && n != 0) {
		if (m > n) {
			// Находим остатки координат
			e = n - x;
			w = m - y;
			x = (e > x) ? x : e;
			y = (w > y) ? y : w;
			if (x > y) {
				cout << y;
			}
			else {
				cout << x;
			}
		}
		else {
			e = m - x;
			w = n - y;
			x = (e > x) ? x : e;
			y = (w > y) ? y : w;
			if (x > y) {
				cout << y;
			}
			else {
				cout << x;
			}
		}
	}

}