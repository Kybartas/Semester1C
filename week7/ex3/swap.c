#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){

    int tempx = *x;
    int tempy = *y;
    
    *x = tempy;
    *y = tempx;

}


int main(){

    int x = 0;
    int y = 3;
    swap(&x, &y);

    return 0;
}