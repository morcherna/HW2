#include "ex1.h"
void swap(int *ptra, int *ptrb){
    int temp = *ptra;
    *ptra = *ptrb;
    *ptrb = temp;
}
void task1(){
        int a = 0;
        std::cin >> a;
        std::cout << "Enter b: " << std::endl;
        int b = 0;
        std::cin >> b;
        int *ptra = &a;
        int *ptrb = &b;

        swap(ptra, ptrb);

        std::cout <<"a = " << a << std::endl;
        std::cout <<"b = " << b << std::endl;
}
