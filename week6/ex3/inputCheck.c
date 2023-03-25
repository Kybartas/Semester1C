#include <stdio.h>

int getPositiveNumber(char *msg);

int main(){

    printf("function returned: %d", getPositiveNumber("enter a positive number"));

    return 0;
}

int getPositiveNumber(char *msg){

    int x;

    while(1){

        printf("%s\n", msg);
        scanf("%d", &x);

        if(x > 0){
            break;
        }
        
    }

    return x;
}