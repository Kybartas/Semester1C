#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * createArray(int size, int low, int high);

int main(){

    createArray(10, 0, 8);

    return 0;
}

int * createArray(int size, int low, int high){

    int *arr = calloc(size, sizeof(int));

    srand(time(0));

    for(int i = 0; i < size; i++){

        *(arr + i) = (rand() % (high - low + 1) + low);

    }

    return arr;

}