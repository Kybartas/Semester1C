#include <stdio.h>

int digitcount(int x){

    int digits=0;

    while (x > 0){
        x = x / 10;
        digits++;
    }

    return digits;
}

int main(){

int num, ats=0;

while(num >= 0){
    scanf("%d", &num);
    if(digitcount(num) > digitcount(ats)){
        ats = num;
    }
}

printf("%d - daugiausiai skaitmenu turintis ivestas sk", ats);

return 0; 
}