#include<iostream>
#include "ex12.h"


int matrix_1()
{
    int n,m;
    std::cout<< "Enter the size: " <<std::endl;
    std::cin>>n>>m;
    int** a = new int* [n];
    std::cout<< "Enter the matrix: " << std::endl;
    for (int k=0; k<n; k++)
    {
        a[k]=new int [m];
        for (int l=0; l<m; l++)
        {
            std::cout<<"["<<k+1<<"]["<<l+1<<"] = " << std::endl;
            std::cin>>a[k][l];
        }
    }
    std::cout<<"Entered matrix:"<<std::endl;
    for (int k=0; k<n; k++)
    {
        for (int l=0; l<m; l++)
            std::cout<<a[k][l]<<" ";
        std::cout<<std::endl;

    }


    int i,j, min_num=0, max_num=0, min=0, max=0, sum=0;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++) {
            if (i==0)
            {
                sum+=a[i][j];
                min+=a[i][j];
                max+=a[i][j];
            }
            else sum+=a[i][j];
        }
        if (sum>max)
        {
            max=sum;
            max_num=i;
        }
        if (sum<min)
        {
            min=sum;
            min_num=i;
        }
        sum=0;

    }
    i=min_num;
    std::cout<<"min stroka: "<<std::endl;
    for (j=0; j<n; j++) std::cout<<a[i][j]<<" "<<std::endl;
    std::cout<<"sum min = "<<min<<std::endl;
    i=max_num;
    std::cout<<"max stroka: "<<std::endl;
    for (j=0; j<n; j++) std::cout<<a[i][j]<<" "<<std::endl;
    std::cout<<"sum max = "<<max<<std::endl;
    return 0;
}