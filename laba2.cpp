#include <iostream>
#include<string>
#include<math.h>
#include <windows.h>
int laba2()
{
    using namespace std;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"Russian");
     wcout<<L"++++Лабораторная работа №2++++"<<endl;
     wcout<<L"++++Белкин Андрей Группа:ПКС17-1++++"<<endl<<endl;
     wcout<<L"++++Начало работы++++"<<endl;
        double a,b,c,Answer;
     wcout<<L"++++Введите числа a,b и c соответсвенно:\n";
     cin>>a>>b>>c;
            Answer=log(b)/log(10)/(a+c);
            cout<<Answer<<endl;



 return 0;
}
