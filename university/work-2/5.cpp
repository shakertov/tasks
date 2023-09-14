#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	// Структура данных для адрессной книги
	struct addressbook
	{
		char secondname[50];
		char firstname[50];
		char middlename[50];
		char city[50];
		char street[100];
		int house;
		int flat;
		int index;
	};
	// Количество жителей
	int n;
	int house_number;
	char street[100];
	char city[50];
	cout << "Введите кол-во жителей:\n";
	cin >> n; addressbook ab[n];
	// Цикл ввода данных в файл
	for(int i = 0; i < n; i++)
	{
		// Вводим данные
		cout << "Фамилия:\n";
		cin >> ab[i].secondname;
		cout << "Имя:\n";
		cin >> ab[i].firstname;
		cout << "Отчество:\n";
		cin >> ab[i].middlename;
		cout << "Город:\n";
		cin >> ab[i].city;
		cout << "Улица:\n";
		cin >> ab[i].street;
		cout << "Дом:\n";
		cin >> ab[i].house;
		cout << "Квартира:\n";
		cin >> ab[i].flat;
	}
	// Пользователь вводит значение Города, Улицы, Дома
	cout << "Введите поиск город:\n";
	scanf("%s", city);
	cout << "Введите поиск по улице:\n";
	scanf("%s", street);
	cout << "Введите поиск по дому:\n";
	scanf("%i", &house_number);
	for(int i = 0; i < n; i++)
	{
		if(!strcmp(ab[i].city, city) && !strcmp(ab[i].street, street) && ab[i].house == house_number)
		{
			cout << "Нашлось:\n";
			cout << ab[i].secondname << " " << ab[i].firstname << " " << ab[i].middlename << endl;
			find = TRUE;
		}
		else
		{
			cout << "Ничего не найдено согласно условию";
		}
	}
		
	return 0;
}