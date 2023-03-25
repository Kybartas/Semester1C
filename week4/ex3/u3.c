#include <stdio.h>
#include <math.h>

int main(){

    int s=0, n=0, x=0;

    printf("enter two numbers s and n for excersise 3\n");
    scanf("%d %d", &s, &n);

    int a[n];

    printf("enter %d numbers to complete array\n", n);

    for(int i = 0; i < n; i++){
        scanf("%d", &x);

        if(x >= 0){
            a[i] = x;
        } else printf("enter non negative numbers only\n"), i--;
    }

    int z=0, result;

    for(int i = 0; i < n; i++){
        for(int i = 0; i < n; i++){
            
            result = a[z] * a[i];
            if(result == s){
                printf("%d and %d = %d\n", a[z], a[i], s);
            }

        }
    z++;
    }
    
    return 0;
}