#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "RU");
	int a, b, c;
	cout << "Введите первый катет: " << endl;
	cin >> a;
	cout << "Введите второй катет: " << endl;
	cin >> b;
	c = sqrt(a * a + b * b);
	cout << "Гипотенуза = " << c << endl;
	cout << "Периметр = " << a + b + c << endl;
	return 0;
}