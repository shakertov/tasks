/*
Программа получает на вход последовательность целых неотрицательных чисел, каждое число записано в отдельной строке.
Последовательность завершается числом 0, при считывании которого программа должна закончить свою работу и вывести количество членов последовательности (не считая завершающего числа 0).
Числа, следующие за числом 0, считывать не нужно.
Формат входных данных
Вводится последовательность целых чисел, заканчивающаяся числом 0.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:
1
7
9
0
5
Sample Output:
3
*/

#include <iostream>

using namespace std;

int main() {
	// Комментарий
	setlocale(LC_ALL, "Russian");

	int n, i;

	cin >> n;
	i = 0;

	while (n != 0)
	{
		cin >> n;
		i++;
	}

	cout << i;
}