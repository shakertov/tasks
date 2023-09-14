#include <iostream>

using namespace std;

int main() {
	
	/* Объявляем переменные */
	char language;
	int time_of_year = 0;
	
	/* Выводим основные сообщения */
	cout << "This program outputs the names of the months for a given time of year." << endl;
	cout << "To continue, select your preferred language - RU or ENG" << endl;
	
	cout << "Эта программа выводит названия месяцев по заданному времени года." << endl;
	cout << "Для продолжения выберите предпочитаемый язык" << endl;
	
	/* Принимаем язык пользователя */
	cin >> language;
	
	if(language == "RU") {
		cout << "Введите время года. 1 - зима, 2 - весна, 3 - лето, 4 - осень." << endl;
		cin >> time_of_year;
		switch(time_of_year) {
			case 1:
				cout << "Декабрь. Январь. Февраль.";
			break;
			case 2:
				cout << "Март. Апрель. Май.";
			break;
			case 3:
				cout << "Июнь. Июль. Август.";
			break;
			case 4:
				cout << "Сентябрь. Октябрь. Ноябрь.";
			break;
			default:
				cout << "Некорректный ввод времени года. Введите в диапозоне от 1 до 4.";
			break;
		}
	}
	else if(language == "ENG") {
		cout << "Enter the time of year. 1 - winter, 2 - spring, 3 - summer, 4 - autumn." << endl;
		cin >> time_of_year;
		switch(time_of_year) {
			case 1:
				cout << "December. January. February.";
			break;
			case 2:
				cout << "March. April. May.";
			break;
			case 3:
				cout << "June. July. August.";
			break;
			case 4:
				cout << "September. October. November.";
			break;
			default:
				cout << "Incorrect input of the time of year. Enter in the range from 1 to 4.";
			break;
		}
	}
	else {
		cout << "The program supports only two languages - RU or ENG" << endl;
		cout << "Программа поддерживает только два языка - RU или ENG" << endl;
	}
	
	return 0;
	
}