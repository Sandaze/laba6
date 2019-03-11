#include <iostream>
#include <math.h>
#include <windows.h>
#include <string>
#include <algorithm>


int laba5()
{
    using namespace std;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"Russian");
    string FirstString,SecondString;
    int RepeatingSymbol;

    wcout << L"++++Введите  первую строку++++"<<endl;//
    cin>>FirstString;
    wcout <<L"++++Введите  вторую строку++++"<<endl;
    cin>>SecondString;
    // Начало цикла
    for(int j=0;j<FirstString.length();j++)         //перебор первой строки
    {

        int Checker2=0;
        for(int i=0;i<SecondString.length();i++){   //перебор второй строки
            if(FirstString[j]==SecondString[i]){    //сравнение всех букв из первой стрроки со второй
                Checker2=Checker2+1;
            }

        }
        if(Checker2>=1){
            RepeatingSymbol=1;
        }
        Checker2=0;
    }
    if(RepeatingSymbol){                //Сортировка второй строки в порядке обратно  алфовитному
        wcout<<L"есть повторяющиеся символы"<<endl;
        sort(SecondString.begin(),SecondString.end(),greater<char>());
        cout<<SecondString;


    }
    else{                   //Сортировка первой строки в алфовитном порядке
        wcout<<L"Повтора нету"<<endl;

   sort(FirstString.begin(),FirstString.end());
   cout<<FirstString;
    }

return 0;
}
