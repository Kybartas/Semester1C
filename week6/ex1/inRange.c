#include <stdio.h>

int isInRange(int number, int low, int high);

int main(){

    if(isInRange(1,0,10) == 1){

        printf("true");

    } else printf ("false");

    return 0;
}

int isInRange(int number, int low, int high){

    if(number >= low && number <= high){
        return 1;
    } else return 0;

}