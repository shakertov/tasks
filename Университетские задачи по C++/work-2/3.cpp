#include <iostream>

using namespace std;

int main ()
{
	char tor[24];
	
	for(int i = 0; i < 24; i++)
	{
		tor[i] = rand() % 26 + 65;
		cout << tor[i] << "; ";
	}
}