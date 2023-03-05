/*
 * task1.cpp -- код программы для подсчёта значения формулы V0t+(at^2)/2
 *Задание: Составить блок-схему для вычисления значения выражения по заданной
 *формуле.
 *Предусмотреть блоки начала и конца алгоритма, ввода данных, проверку
 *вычислимости с учётом вводимых значений (области допустимых значений),
 *вывод результатов.
 * Роман Кравчук <10184695@stud.op.edu.ua>
 */



#include <iostream>
#include <stdio.h>
#include <math.h>

int v0, t, a, result;

void task1()
{
    std::cout << "Введите V0:";
    std::cin >> v0;
    std::cout << "Введите t:";
    std::cin >> t;
    std::cout << "Введите a:";
    std::cin >> a;
    result = v0*t+((a*(pow(t,2)/2)));

}

int
main()
{
    setlocale(0,"ru");
    std::cout << "Лабораторная работа1. Задание 31" << std::endl;
    std::cout << "v0*t+(at^2)/2" << std::endl;
   task1();
   std::cout << "result is:" << result << std::endl;
   return 0;
}
