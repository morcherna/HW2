#include <iostream>
#include "ex10.h"

void task10()
{
    size_t n, m;
    std::cout <<"Size arr1: "<< std::endl; std::cin >>n;
    std::cout <<"Size arr2: "<< std::endl; std::cin >>m;

    double*arr1 = new double[n], max_arr1=0;
    double*arr2 = new double[m], max_arr2=0;

    std::cout<<"arr1:"<< std::endl;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> arr1[i];
        if (i==0 || arr1[i]>max_arr1)
            max_arr1=arr1[i];
    }
    std::cout << "max elem in arr1: " << max_arr1 << std::endl;

    std::cout<<"arr2:"<<std::endl;
    for (size_t i = 0; i < m; i++)
    {
        std::cin >> arr2[i];
        if (i==0 || arr2[i]>max_arr2)
            max_arr2 = arr2[i];
    }
    std::cout << "max elem in arr2: " << max_arr2 << std::endl;

    std::cout <<"New arr1:" << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        if (arr1[i]==max_arr1) arr1[i]=max_arr2;
        std::cout <<arr1[i]<<" ";
    }
    std::cout <<"\n";

    std::cout << "New arr2:" << std::endl;
    for (size_t i = 0; i < m; i++)
    {
        if (arr2[i]==max_arr2) arr2[i]=max_arr1;
        std::cout <<arr2[i]<<" ";
    }
    std::cout <<"\n";

    delete[]arr2;
    delete[]arr1;
}