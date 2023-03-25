#include <stdio.h>

int main(){

int a, b, c, t;
scanf("%d %d %d", &a, &b, &c);

for(int i = 0; i < c-2; i++){

t = a;
a = a + b;
b = t;

}
printf("%d\n", a);

return 0;
}