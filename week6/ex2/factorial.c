#include <stdio.h>

int factorial(int number);
int getFactorial(int number);

int main(){

    printf("%d\n", getFactorial(-1));
    printf("%d\n", factorial(4));

    return 0;
}

int getFactorial(int number){

    if(number > 0){

        if(number >= 1){

            return number * getFactorial(number-1);

        } else return 1;

    } else return 0;

}

int factorial(int number){

    int x = number-1;

    while(x>1){

        number = number * x;
        x = x-1;

    }

    return number;

}