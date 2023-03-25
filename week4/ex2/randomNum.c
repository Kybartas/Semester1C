#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int array[1000];
int a, b, c;

printf("enter a, b and c:\na & b = interval for random numbers\nc = amount of generated numbers");
scanf("%d %d %d", &a, &b, &c);

srand(time(NULL));


for(int i = 0; i < c; i++){
    
    array[i] = rand() % (b + 1 - a) + a;
    printf("%d\n", array[i]);

}

return 0;
}