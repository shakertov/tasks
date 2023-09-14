/*
Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
Формат входных данных
Вводится натуральное число.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:
1
Sample Output 1:
YES
Sample Input 2:
2
Sample Output 2:
YES
*/

#include <iostream>

using namespace std;

int main() {
	// Комментарий
	setlocale(LC_ALL, "Russian");

	int n;
	bool result = true;
	cin >> n;

	while (result && (n > 1)) {
		if (n % 2 == 1) result = false;
		else n = n / 2;
	}

	if (result) cout << "YES";
	else cout << "NO";

	// bool isPower2(unsigned int x)
	//{
	//	return (x != 0) && !(x & (x - 1));
	//}
}