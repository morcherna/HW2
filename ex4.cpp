#include "ex4.h"
void printArray1(double arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void sorting1 (double arr[], int n){
    int k = 0;
    for(int i = 1; i < n; ++i)
    {
        for(int r = 0; r < n-i; r++)
        {
            if(arr[r] < arr[r+1])
            {
                double temp = arr[r];
                arr[r] = arr[r+1];
                arr[r+1] = temp;
                k++;
            }
        }
    }
    std::cout << "number of permutations: " << k << std::endl;
}


void task4(){

    int n = 12;
    double arr[n];

    std::cout << "Array: " << std::endl;
    for (int i{0}; i < n; i++) {
        std::cin >> arr[i];
    }
    sorting1(arr, n);
    std::cout << "Sorted array: " << std::endl;
    printArray1(arr, n);

}
