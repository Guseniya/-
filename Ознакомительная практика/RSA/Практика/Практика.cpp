// Практика.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int p, q, n, f, e, d, k;
    {
        cout << "Введите два числа\n";
        cout << "(через пробелы) и нажмите Enter.\n";
        cin >> p >> q;
        n = p * q;
        f = (p - 1) * (q - 1);
        cout << n << endl;
        cout << f << endl;
    }
    {
        for ((e > 1)& (e% e == 0)& (e < f)& (f% e == 1))
            cout << e << endl;
        {
            cout << "{" << e << ";" << n << "}" << "Открытый ключ " << endl;
        }
    }
    {
        d = ((k * f) + 1) / e;
        cout << d << endl;
        cout << "{" << d << ";" << n << "}" << "Закрытый ключ " << endl;
        {
            cout << "Шифрование" << endl;
        }
    }
    int M, C;
    {
        cout << "Введите число " << endl;
        cin >> M;
        C = pow(M, e) % n;
        cout << C << endl;
    }
}
    


    





    