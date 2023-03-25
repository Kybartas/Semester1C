#include <stdio.h>
#include <math.h>

int main(){

    double x, y, z, absz;
    double ansA, ansB;
    printf("enter x, y and z to calculate formulas a) and b)");
    scanf("%lf %lf %lf", &x, &y, &z);

    ansA = x + (4 * y) + pow(z, 3);
    absz = fabs(z);
    ansB = (x + sqrt(y)) * (pow(z, 4) - absz + 46.3);

    printf("a) %lf\n", ansA);
    printf("b) %lf\n", ansB);

return 0;
}