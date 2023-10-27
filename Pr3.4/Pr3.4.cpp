// Lab_03_4.cpp
// < Ящишин Михайло >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 31
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if (x <= 0 && y <= 0 && y + x + R >= 0 || x >= 0 && y >= 0 && x * x + y * y <= R * R)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}