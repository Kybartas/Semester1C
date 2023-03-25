#include <stdio.h>

int main(){

int a, b, c, i, dbd=0, mbk=1;

scanf("%d %d %d", &a, &b, &c);

for(i=1; i <= a && i <= b && i <= c; i++){
if(a%i==0 && b%i==0 && c%i==0) dbd = i;
}

while(!(mbk%a==0 && mbk%b==0 && mbk%c==0)){
mbk++;
}




printf("DBD = %d\n", dbd);
printf("MBK = %d", mbk);

return 0;
}