#include<iostream>
#include "ex11.h"


void right(int** a, int n, int m, int cnt){
    int t;
    for(; cnt > 0; --cnt){
        for(int i = 0; i < n; ++i){
            t = a[i][m - 1];
            for(int j = m - 1; j > 0; --j)
                a[i][j] = a[i][j - 1];
            a[i][0] = t;
        }
    }
}

int matrix()
{
    int n,m;
    std::cout<< "Enter the size: " <<std::endl;
    std::cin>>n>>m;
    int** a = new int* [n];
    std::cout<< "Enter the matrix: " << std::endl;
    for (int i=0; i<n; i++)
    {
        a[i]=new int [m];
        for (int j=0; j<m; j++)
        {
            std::cout<<"["<<i+1<<"]["<<j+1<<"] = " << std::endl;
            std::cin>>a[i][j];
        }
    }
    std::cout<<"Entered matrix:"<<std::endl;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
            std::cout<<a[i][j]<<" ";
        std::cout<<std::endl;

    }

    right(a, n, m, 1);
    std::cout<<"Changed matrix:"<<std::endl;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j)
            std::cout << a[i][j] << ' ';
        std::cout << std::endl;
    }
    std::cout << std::endl;



    return 0;
}