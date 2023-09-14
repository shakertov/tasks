/*
Дано три числа. Упорядочите их в порядке неубывания.
Формат входных данных
Вводятся три числа.
Формат выходных данных
Выведите ответ на задачу.

Sample Input:
1
2
1
Sample Output:
1 1 2
*/
#include <iostream>

using namespace std;

int main() {
	//Комментарий
	setlocale(LC_ALL, "Russian");

	int a, b, c, f, s, t;
	cin >> a >> b >> c;

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
	cout << f << " " << s << " " << t;
}