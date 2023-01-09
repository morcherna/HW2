#include "ex5.h"
void task5(){
    const int n = 6;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Enter arr[" << i << "] = "<< std::endl;
        std::cin >> arr[i];
    }
    int *result = new int[n];
    int *tmp_pl = new int[n];
    int *tmp_neg = new int[n];
    int count1 = 0;
    int count2=0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            tmp_neg[count1] = arr[i];
            count1++;
        }
        else{
            tmp_pl[count2] = arr[i];
            count2++;
        }
    }

    for (int i = 0; i < count1; i++){
        result[i] = tmp_neg[i];
    }
    for (int i = 0; i < count2; i++){
        result[count1 + i] = tmp_pl[i];
    }
    for (int i = 0; i < n; i++) {

        std::cout << result[i] << " ";
    }
}
