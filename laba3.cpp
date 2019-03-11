#include <iostream>
#include<string>
#include<math.h>
#include <windows.h>
int laba3()
{
    using namespace std;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"Russian");
    wcout<<L"++++Лабораторная работа №3++++"<<endl;
    wcout<<L"++++Белкин Андрей Группа:ПКС17-1++++"<<endl<<endl;
    wcout<<L"++++Начало работы++++"<<endl;
     double a,b,c,Answer;
     cout<<"Enter a,b,c"<<endl;
     cin>>a>>b>>c;
     if((a<-1000||a>1000)||(b<-1000||b>1000)||(c<-1000||c>1000))
        {
          do
            {
         wcout<<L"Вы ввели некорректно,введите повторно:"<<endl;
         cin>>a>>b>>c;
            }
         while((a<-1000||a>1000)||(b<-1000||b>1000)||(c<-1000||c>1000));
        }

         Answer=log(b)/log(10)/(a+c);
         cout<<Answer<<endl;



 return 0;
}





