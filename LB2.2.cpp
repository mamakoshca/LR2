#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int a;
	cout << "Введите число: " << endl;
	cin >> a;
	cout << "Результат: " << (a / 100) * 100 << endl;
	return 0;
}
