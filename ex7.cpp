#include "ex7.h"
void number_of_locmin(int arr[], int n){
    int k=0;
    for (int i = 0; i < n; i++ ){
        int mid_indx = (i + i+2)/2;
        if ((mid_indx == 0 || arr[mid_indx-1] > arr[mid_indx]) && (mid_indx == n-1 || arr[mid_indx+1] > arr[mid_indx]))
            k++;
    }
    std::cout << "numder of loc min: " << k << std::endl;
}

void task7(){
    std::cout << "Enter the size of array" << std::endl;
    int n=0;
    std::cin >> n;
    int arr[n];

    std::cout << "Array: " << std::endl;
    for (int i{0}; i < n; i++) {
        std::cin >> arr[i];
    }
    number_of_locmin(arr, n);
}
