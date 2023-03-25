#include <stdio.h>

int main(){

int x, y, z, max;

printf("enter 3 intigers");
scanf("%d %d %d \n", &x, &y, &z);

max = x;
max = (max < y) ? y : max;
max = (max < z) ? z : max;


printf("%d", max);

return 0;
}