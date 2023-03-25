#include <stdio.h>

int main(){

int n, sum = 0;
float avg;

scanf("%d", &n);
int arr[n];

for (int i = 0; i < n; i++){
scanf("%d", &arr[i]);
}
int max = arr[1], min = arr[1];

for (int i =0; i < n; i++){
sum += arr[i];
if(arr[i] > max) max = arr[i];
if(arr[i] < min) min = arr[i];
}
avg = ((float)sum / n);

printf("min - %d\n", min);
printf("max - %d\n", max);
printf("sum - %d\n", sum);
printf("avg - %lf\n", avg);

return 0;
}