#include <stdio.h>
#include <math.h>

int calc(int a, int b, int c, int result[]){

int D, results;

    D = (b * b) - (4 * a * c);

    if(D > 0){

        results = 2;
        result[0] = (-b + sqrt(D) ) / (2 * a);
        result[1] = (-b - sqrt(D) ) / (2 * a);

    } else if (D == 0){

        results = 1;
        result[0] = -(b / (2 * a));

    }

    return results;
}

void output(int arr[], int results){
    
    if (results == 2){
        printf("1: %d \n", arr[0] );
        printf("2: %d \n", arr[1] );
    } else if (results == 1){
        printf("%d \n", arr[0]);
    } else{
        printf("atsakymu nera");
    }
    
}

int main(){

    int a, b, c, arr[2];

    while(1){
    printf("\n iveskite skaicius a b c kvad form skaiciuot\n");
    scanf("%d %d %d", &a, &b, &c);
    output(arr, calc(a,b,c,arr));
    }

return 0;
}