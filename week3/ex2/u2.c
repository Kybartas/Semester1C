#include <stdio.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    for(int i =a; i <= b; i++){
        if(i % c == 1 && i > 0) printf("%d\n", i);
    }

return 0;
}