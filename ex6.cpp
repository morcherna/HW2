#include "ex6.h"
void printArray(double arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void sorting (double arr[], int n){
    int k = 0;
    for (int i = 0; i < n/2; i++){
        double temp = arr[i];
        arr[i] = arr[n/2 + i];
        arr[n/2 + i] = temp;
        k++;
    }
    std::cout << "number of permutations: " << k << std::endl;
}


void task6(){
    int k = 0;
    int n = 14;
    double arr[n];

    std::cout << "Array: " << std::endl;
    for (int i{0}; i < n; i++) {
        std::cin >> arr[i];
    }
    sorting(arr, n);
    std::cout << "Sorted array: " << std::endl;
    printArray(arr, n);
    std::cout << "number of permutations: " << k << std::endl;
}
