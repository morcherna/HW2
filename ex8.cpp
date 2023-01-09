#include "ex8.h"
void sum (int matr[]){
    int sum = 0;
    for(int i = 0 ; i < 15 ; i++ ){
        if(matr[i]==0) {
            for(i+=1; i<15 ; i++ ){
                if(matr[i]==0)
                    break;
                sum+=matr[i];
            }
            break;
        }
    }
    std::cout << "sum: " << sum << std::endl;
}
void task8(){
    int matr[4][5] = {{8,7,0,5,0 },
                      {0,1,8,4,0},
                      {1,0,15,5,0},
                      {0,0,1,8,5}};
    for(int i=0; i<4;i++){
        sum(matr[i]);
    }


}
