#include <stdio.h>

int main(){

    int n;
    printf("Type a number: ");
    scanf("%d", &n);

    (n%2==0) ? printf("the number is even")
            : printf("the number is not even");

return 0;
}