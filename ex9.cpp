#include <iostream>
#include "ex9.h"

void sorting(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1] && (arr[j] <=0 || arr[j+1] <= 0))
                std::swap(arr[j], arr[j + 1]);
            else if (arr[j] < arr[j + 1] && (arr[j] > 0 && arr[j+1] > 0))
                std::swap(arr[j+1], arr[j]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void task9()
{
    const int n{15};
    int arr[n]{};

    std::cout << "Array: " << std::endl;
    for (int i{0}; i < n; i++) {
        std::cin >> arr[i];
    }
    sorting(arr, n);
    std::cout << "Sorted array: " << std::endl;
    printArray(arr, n);
}