#include <iostream>

using namespace std;

int main ()
{
	float sum_p = 0, sum_n = 0, n;
	float x, rat = 0;
	
	cout << "Введите коэффициент X: ";
	cin >> x;
	
	while(rat < x)
	{
		cout << "Введите число отрицательное или положительное: ";
		cin >> n;
		if(n > 0)
		{
			sum_p = sum_p + n;
		}
		else
		{
			sum_n = sum_n - n;
		}
		rat = sum_n / sum_p;
	}
	
	cout << "Сумма отрицательных чисел: " << sum_n << endl;
	cout << "Сумма положительных чисел: " << sum_p << endl;
	cout << "Значение их отношения: " << rat;
}