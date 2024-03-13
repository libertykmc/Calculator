#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "");
	int a, b, i;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	system("cls");
	cout << "Выберите действие" << endl;
	cout << "1. Вычислить сумму" << endl;
	cout << "2. Вычислить произведение" << endl;
	cout << "3. Вычислить разность" << endl;
	cout << "4. Найти частное" << endl;
	cin >> i;
	switch (i) {
	case(1): {
		system("cls");
		cout << "Сумма равна " << a + b;
		break;
	};
	case(2): {
		system("cls");
		cout << "Произведение равно " << a*b; break;
	}
	case(3): {
		system("cls");
		cout << "Разность равна " << a - b; break;
	}
	case(4): {
		system("cls");
		if (b == 0) { cout << "Делить на ноль нельзя "; break; }
		else cout << "Частное равно " << a / b; break;
	}
	}
	return 0;
}