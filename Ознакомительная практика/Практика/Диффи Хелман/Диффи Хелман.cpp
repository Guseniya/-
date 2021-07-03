// Диффи Хелман.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "math.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int p, g, a, b, A, B, k;
	{
		cout << "Введите три числа\n";
		cout << "(через пробелы) и нажмите Enter.\n";
		cin >> g >> a >> p >> b;
		A = pow(g, a) % p;
		cout << A << endl;
		B = pow(g, b) % p;
		cout << B << endl;
	}
	{
		if (pow(B, a) == pow(A, b))
			k;
		else
			"Алгоритм не верный\n";
	}
}





