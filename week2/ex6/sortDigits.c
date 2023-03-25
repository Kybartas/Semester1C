#include <stdio.h>

int main(){

int x, xcopy, digits=0, num=0, rem;

printf("eneter an integer to get sorted");
scanf("%d", &x);
xcopy = x;

while (xcopy > 0){

    xcopy = xcopy / 10;
    digits++;
}

for (int i = 0; i < digits; i++){

    rem = x % 10;

}

return 0;
}