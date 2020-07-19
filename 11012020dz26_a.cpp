/*
а) предусмотреть округление по правилам, то есть, чтобы число 12, 341 округлялось до 12, 34, а число 12, 349 – до 12, 35.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	double a, b;
	cout << "Введите дробное число: ";
	cin >> a;
	b = int(a * 100 + 0.5) / 100.0;
	cout << "Дробное число округленное до двух знаков после запятой: " << b << "\n\n\n";
	return 0;
}