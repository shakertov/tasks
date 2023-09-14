#include <iostream>
using namespace std;

int main()
{​​​​​​​
	int m[5][4], string, count=0, max=0;
	
	//Цикл заполнения
	for(int i = 0; i<5; i++)
	{​​​​​​​
		for(int z = 0; z < 4; z++)
		{​​​​​​​
			cout<<"Input actual value for matrix m[" << i << "][" << z << "]:" << endl;
			cin>>m[i][z];
		}​​​​​​​
	}​​​​​​​

	//Цикл перебора
	for(int i = 0; i < 5; i++)
	{​​​​​​​
		for(int z = 0; z < 4; z++)
		{​​​​​​​
			if(m[i][z] == 0)
			{​​​​​​​
				count += 1;
			}​​​​​​​
		}​​​​​​​
		if( max < count)
		{​​​​​​​
			max = count;
			string = i;
		}​​​​​​​
	}​​​​​​​



	for(int r = 0; r < 5 ; r++)
	{​​​​​​​
		for(int f = 0; f < 4; f++)
		{​​​​​​​
			if(f % 4 == 0) cout << endl;
			cout << m[r][f] << ";";
		}​​​​​​​
	}​​​​​​​

	cout << endl;

	//Цикл удаления строки
	for(int k = string; k < 4; k++)
	{​​​​​​​
		for(int s = 0; s < 4; s++)
		{​​​​​​​
			m[k][s] = m[k+1][s];
		}​​​​​​​
	}​​​​​​​

	for(int t = 0; t < 5; t++)
	{​​​​​​​
		for(int d = 0; d < 4; d++)
		{​​​​​​​
			if(d % 4 == 0) cout << endl;
			cout << m[t][d] << ";";
		}​​​​​​​
	}​​​​​​​
}​​​​​​​