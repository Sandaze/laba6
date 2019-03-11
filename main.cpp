#include <iostream>
#include <laba2.cpp>
#include <laba3.cpp>
#include <laba4.cpp>
#include <laba5.cpp>
#include <string>
#include <aboutavtor.cpp>
#include <algorithm>
int main()
{
    using namespace std;
    /* русский язык */
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"Russian");
    int Enter;
    do {
    wcout<<L"+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
    wcout<<L"+              Введите номер цифры чтобы, открыть нужный файл:              +"<<endl;
    wcout<<L"+                    1.Лабораторная №2-Решение уравнения                    +"<<endl;
    wcout<<L"+                    2.Лабораторная №3-Улучшенное решение уравнения         +"<<endl;
    wcout<<L"+                    3.Лабораторная №4-Работа с массивами                   +"<<endl;
    wcout<<L"+                    4.Лабораторная №5-Обработка строк                      +"<<endl;
    wcout<<L"+                    5.Об авторе                                            +"<<endl;
    wcout<<L"+                    6.ВЫХОД                                                +"<<endl;
    wcout<<L"+                                                                           +"<<endl;
    wcout<<L"+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +"<<endl;
    cin>>Enter;

    switch (Enter)
    {

    case 1:
        laba2();
        break;
    case 2:
        laba3();
        break;
    case 3:
        laba4();
        break;
    case 4:
        laba5();
        break;
    case 5:
        aboutavtor();
        break;
    case 6:
        wcout<<L"ДО свидания"<<endl;
         exit(EXIT_SUCCESS);

    default:
        wcout<<L".----------------------------------------------------------------------------------."<<endl;
        wcout<<L"|                            ОШИБКА ВЫ ВЫБРАЛИ НЕ СУЩЕСТВУЮЩУЮ СТРАНИЦУ            |"<<endl;
        wcout<<L".----------------------------------------------------------------------------------."<<endl;
        exit(EXIT_FAILURE);
        }
    }
    while(Enter!=6);
    return 0;
}
