#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number_width(int number){

    int width = 0;

    while(number > 0){

        number = number / 10;
        width++;
    }

    return width;
}


int main(){

    int x, y;

    char fileName[100] = {'i', 'n', '.', 't', 'x', 't'};
    FILE * fp;

    while(1){

        fp = fopen(fileName, "r");
        fscanf(fp, "%d,%d", &x, &y);

        if(1000 > x && x > 10){

            if(y / 1000 < 1){

                printf("width of number - %d", number_width(x) + number_width(y));
                break;

            } else {
                printf("enter no more than 3 numbers after comma\n");
                printf("enter name of file with new input\n");
                scanf("%s", fileName);
            }

        } else {
            printf("enter a number thats greater than 10 but less than 1000\n");
            printf("enter name of file with new input\n");
            scanf("%s", fileName);
        }
    }

    fclose(fp);

    return 0;
}