#include <iostream>
#include "ex15.h"


int paskal(int n)
{
    int i,x;
    x = 1;
    for (i = 1;i <= n;i++)
    {
        x *= i;
    };

    return x;
}

int task15()
{
    int num , stroka , number;
    std::cout << "Enter the number of lines: " << std::endl;
    std::cin>>num;
    std::cout<<"1"<<"\n";
    for (stroka = 1; stroka < num; stroka++)
    {
        for (number = 0; number <= stroka; number++)
        {
            std::cout<<(paskal(stroka) / (paskal(number) * paskal(stroka - number)))<<" ";
        };
        std::cout<<"\n";
    };
    return 0;




}