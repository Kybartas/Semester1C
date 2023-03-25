#include <stdio.h>
#include <stdlib.h>

int splitData(int *source, int size, int split, int *arr1[], int *arr2[]){

    if(*arr1 == NULL && *arr2 == NULL){

        *arr1 = calloc(split, sizeof(int));
        *arr2 = calloc(size - split, sizeof(int));

        memcpy(*arr1, source, split * sizeof(int));
        memcpy(*arr2, source + split, (size-split) * sizeof(int));

        return 0;

    } else {

        return -1;

    }

}

int main(){

    int array[] = {1, 2, 3, 4, 5, 6};
    int *arr1 = NULL;
    int *arr2 = NULL;
    
    splitData(array, 6, 3, &arr1, &arr2);

    return 0;
}