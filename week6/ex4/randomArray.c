#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateArray(int data[], int size, int low, int high);

int main(){

    int data[100];

    srand(time(0));
    generateArray(data, 20, 1, 10);

    return 0;
}

void generateArray(int data[], int size, int low, int high){

    for(int i = 0; i < size; i++){

        data[i] = (rand() % (high - low + 1)) + low;
        printf("%d ", data[i]);
    }

}