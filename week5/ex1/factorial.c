#include<stdio.h>

int main(){

    int x, factorial = 1;

    printf("enter a positive intiger\n");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){

        factorial = factorial * i; 

    }

    printf("factorial of given number = %d\n", factorial);

    FILE * fp;

    fp = fopen ("out.txt", "w");
    fprintf(fp, "%d", factorial);

    fclose(fp);

    return 0;
}