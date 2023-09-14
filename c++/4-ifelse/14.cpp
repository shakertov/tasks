/*
Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.

Формат входных данных
Программа получает на вход числа A1, B1, C1, A2, B2, C2.
Формат выходных данных
Программа должна вывести одну из следующих строчек:
Boxes are equal, если коробки одинаковые,
The first box is smaller than the second one, если первая коробка может быть положена во вторую,
The first box is larger than the second one, если вторая коробка может быть положена в первую,
Boxes are incomparable, во всех остальных случаях.
Sample Input 1:
1
2
3
3
2
1
Sample Output 1:
Boxes are equal
Sample Input 2:
2
2
3
3
2
1
Sample Output 2:
The first box is larger than the second one
*/
#include <iostream>

using namespace std;

int main() {
	//Комментарий
	setlocale(LC_ALL, "Russian");

	int a, b, c, m, n, l, f, s, t, ff, ss, tt;
	cin >> a >> b >> c >> m >> n >> l;

	if (a > b) { // 6 4 9 | 4 9 6
		if (b > c) {
			f = c;
			s = b;
			t = a;
		}
		else {
			if (a > c) {
				f = b;
				s = c;
				t = a;
			}
			else {
				f = b;
				s = a;
				t = c;
			}
		}
	}
	else { // a < b or a == b
		if (b > c) {
			if (a > c) {
				f = c;
				s = a;
				t = b;
			}
			else {
				f = a;
				s = c;
				t = b;
			}
		}
		else {
			f = a;
			s = b;
			t = c;
		}
	}
	if (m > n) { // a b c m n l
		if (n > l) {
			ff = l;
			ss = n;
			tt = m;
		}
		else {
			if (m > l) {
				ff = n;
				ss = l;
				tt = m;
			}
			else {
				ff = n;
				ss = m;
				tt = l;
			}
		}
	}
	else { // a < b or a == b
		if (n > l) {
			if (m > l) {
				ff = l;
				ss = m;
				tt = n;
			}
			else {
				ff = m;
				ss = l;
				tt = n;
			}
		}
		else {
			ff = m;
			ss = n;
			tt = l;
		}
	}
	
	if (f >= ff && s >= ss && t >= tt) {	// 2 2 3 | 3 2 1	
		if (f == ff && s == ss && t == tt) {
			cout << "Boxes are equal";
		}
		else {
			cout << "The first box is larger than the second one";
		}
	}
	else if (f <= ff && s <= ss && t <= tt) {
		if (f == ff && s == ss && t == tt) {
			cout << "Boxes are equal";
		}
		else {
			cout << "The first box is smaller than the second one";
		}
	}
	else {
		cout << "Boxes are incomparable";
	}
}