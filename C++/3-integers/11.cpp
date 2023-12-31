/*
Разность времен

Даны значения двух моментов времени, принадлежащих одним и тем же суткам: часы, минуты и секунды для каждого из моментов времени. Известно, что второй момент времени наступил не раньше первого. Определите, сколько секунд прошло между двумя моментами времени.

Формат входных данных

Программа на вход получает три целых числа: часы, минуты, секунды, задающие первый момент времени и три целых числа, задающих второй момент времени.

Формат выходных данных

Выведите число секунд между этими моментами времени.

Sample Input 1:
1
1
1
2
2
2
Sample Output 1:
3661
Sample Input 2:
1
2
30
1
3
20
Sample Output 2:
50
*/
#include <iostream>

int main() {
    int t, hf, hs, mf, ms, sf, ss;
	std::cin >> hf >> mf >> sf >> hs >> ms >> ss;
	t = (hs * 3600 + ms * 60 + ss) - (hf * 3600 + mf * 60 + sf);
	std::cout << t;
    return 0;
}