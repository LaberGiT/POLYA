#include <iostream>
#include <cmath>
using namespace std;
#include <windows.h>

float coren(float x, float n)
{
    return pow(x, n);
}

class menu
{

public:
    int I;
    float a,b1, u, v,u2,v2;
    float Vnum,Vres;

public:
    template <typename T>
    void sravnenie(float a, T b)
    {
        if (a >= b)
        {
            cout << "(a >= b - TRUE)\tПервое число больше ИЛИ равно второму числу" << endl;
        }
        else
        {
            cout << "((a >= b - FALSE)\tВторое число больше первого" << endl;
        }

    }
    void Vvod_Rac()
    {
        cout << "\nВведите числитель и знаменатель для рационального числа" << endl;
        cout << "Числитель: ";
        cin >> u;
        cout << "знаменатель: ";
        cin >> v;
        a = u / v;

    }
    void Vvod_Rac2()
    {
        cout << "\nВведите числитель и знаменатель для второго рационального числа:" << endl;
        cout << "Числитель - ";
        cin >> u2;
        cout << "знаменатель - ";
        cin >> v2;
        b1 = u2 / v2;
        
    }
    void Vvod_int()
    {
        cout << "Введите целое число";
        cin >> I;
    }
    void stepen()
    {
        cout << "Введите вещественное число - ";
        cin >> Vnum;
        Vvod_Rac();
        Vres = coren(Vnum, a);
        cout << "Результат = " << Vres << endl;
    }
    void bolshemenshe1()
    {
        Vvod_Rac();
        Vvod_Rac2();
        sravnenie(a, b1);
    }
    void bolshemenshe2()
    {
        Vvod_Rac();
        Vvod_int();
        sravnenie(a, I);
    }

};
