#include <iostream>
#include <windows.h>
int laba4()
{
    using namespace std;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"Russian");
    wcout<<L"++++Лабораторная работа №4++++"<<endl;
    wcout<<L"++++Белкин Андрей Группа:ПКС17-1++++"<<endl<<endl;
    wcout<<L"++++Начало работы++++"<<endl;
    int i,n,a;
    int sum;
a=0;
   wcout << L"Сколько элементов в массиве(от 0 до 20): ";
   wcin >> n;
   if(n<=0||n>20)
    {
       wcout<<L"Ошибка: Число вне диапозона"<<endl;
       return 1;
    }
   int UsersArr[20];
   int MyArr[20];
   for ( i=0; i < n; i++)
    {
       wcout<<i<<")";
   wcin >> UsersArr[ i ];
   wcout<<L"Вы ввели:"<<UsersArr[ i ]<<endl;

   if(UsersArr[i]%10==2)
        {
      MyArr[a]=UsersArr[i];
      sum=MyArr[a]+sum;
      a++;
        }
    }
    wcout<<L"Сумма вводимых чисел заканчивающихся на 2 равна:"<<sum;
    return 0;
}

