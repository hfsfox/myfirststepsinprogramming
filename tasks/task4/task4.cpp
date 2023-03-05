/*
 * task4.cpp -- код программы для подсчёта того, проходит ли кирпич в прямоугольное отверстие
 * Роман Кравчук <10184695@stud.op.edu.ua>
 */

#include <iostream>
#include <stdio.h>
#include <math.h>

double A, B, W, L, H, DiagonalOfBrick,DiagonalOfHole;

void task4()
{
    std::cout << "введите ширину отверстия:" << std::endl;
    std::cin >> A;
    std::cout << "введите высоту отверстия:" << std::endl;
    std::cin >> B;
    std::cout << "введите ширину кирпича:" << std::endl;
    std::cin >> W;
    std::cout << "введите высоту кирпича:" << std::endl;
    std::cin >> H;
    std::cout << "введите длину кирпича:" << std::endl;
    std::cin >> L;
    DiagonalOfHole = sqrt(A*A+B*B); //подсчёт диагонали отверстия
    DiagonalOfBrick = sqrt(W*W+H*H); //подсчёт диагонали кирпича

    std::cout << (DiagonalOfBrick <= DiagonalOfHole ? "проходит" : "не проходит") << std::endl;

}

int
main()
{
   setlocale(0,"ru");
   std::cout << "Лабораторная работа 4, задание 66" <<std::endl;
   task4();
   return 0;
}
