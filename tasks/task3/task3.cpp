/*
 * task3.cpp -- код программы для перевода введёного значения минут и секунд в секунды
 * Роман Кравчук <10184695@stud.op.edu.ua>
 */



#include <iostream>
#include <stdio.h>
#include <math.h>

int minutes, seconds, result;

void task()
{
    tryAgain:                                                                   //переход по метке в случае неправильного ввода
    std::cout << "Введите время в фомвте мм сс:" << std::endl;
    std::cin >> minutes;
    std::cin >> seconds;

    if(minutes > 60 || seconds > 60)                                            //проверка на то что введёные значения не больше 60
        {
            std::cout << "ошибка: значение не может быть больше 60" << std::endl;
            goto tryAgain;                                                      //метка перехода в начало программы ввода
        }
    else
    {
        result = (minutes*60)+seconds;
        std::cout<< result << std::endl;
    }
}

int
main()
{
    setlocale(0,"ru");
    std::cout << "Лабораторная работа 3. Задание 2 " << std::endl;
   task();
   return 0;
}
