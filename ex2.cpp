#include "ex2.h"
void swap1(int *ptra, int *ptrb){
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
}

void task2(){
    //создаем массив из рандомных значений:
    srand(time(NULL));
    int n = 0;
    std::cout << "Enter the size of the array" << std::endl;//просим пользователя ввести размер массива
    std::cin >> n;
    int arr[n];//создаем сам массив

    for (int i = 0; i<n; i++){//заполняем массив рандомными числами
        arr[i] = rand()%n+1;
        std::cout << arr[i];
        std::cout<< " " ;
    }
    std::cout << std::endl;
    int *pa = &arr[0]; //создаем указатель на первый элемент массива
    int *pla = &arr[n-1];//создам указатель на последний элемент массива
    swap1(pa, pla);//меняем их местами

    for (int i = 0; i < n; ++i)//выводим результат
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}