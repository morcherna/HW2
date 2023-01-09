#include <iostream>
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"
#include "ex4.h"
#include "ex5.h"
#include "ex6.h"
#include "ex7.h"
#include "ex8.h"
#include "ex9.h"
#include "ex10.h"
#include "ex11.h"
#include "ex12.h"
#include "ex13.h"
#include "ex14.h"
#include "ex15.h"

int main() {

    int num;
    std::cout << "Enter the number of task (from 1 to 15):" << std::endl;
    std::cin >> num;
    if (num == 1){
        task1();
    }
    else if (num == 2)
    {
        task2();
    }
    else if (num == 3)
    {
        task3();
    }
    else if (num == 4)
    {
        task4();
    }
    else if (num == 5)
    {
        task5();
    }
    else if (num == 6)
    {
        task6();
    }
    else if (num == 7)
    {
        task7();
    }
    else if (num == 8)
    {
        task8();
    }
    else if (num == 9)
    {
        task9();
    }
    else if (num == 10)
    {
        task10();
    }
    else if (num == 11)
    {
        matrix();
    }
    else if (num == 12)
    {
        matrix_1();
    }
    else if (num == 13)
    {
        task13();
    }
    else if (num == 14)
    {
        task14();
    }
    else if (num == 15)
    {
        task15();
    }

    return 0;
}
