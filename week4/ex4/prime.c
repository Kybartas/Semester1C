#include <stdio.h>

int check_prime(int num){

    for (int i = 2; i <= num - 1; i++){ 
        if(num % i == 0) return 0;
    }
   return 1;

}

int check_duplicate(int primes[], int z){

    for(int j = 0; j < z; j++){
        if(primes[z] ==  primes[j]) return 1;
    }
    return 0;
}

int main(){

    int a[100] = {0};
    int primes[100] = {0};
    int prime, z=0, i=0;

    while(1){
        scanf("%d", &a[i]);
        if(a[i] < 0) break;
        i++;
    }
    a[i]=0;
    i--;

    while(i >= 0){
        prime = check_prime(a[i]);
        if(prime == 1){
            primes[z] = a[i];
            if(check_duplicate(primes, z) == 0){
                printf("prime - %d\n", a[i]);
            }
        }
        i--;
        z++;
    }

    return 0;
}