#include <stdio.h>
#include <string.h>

int find_middle(int x, int y, int z){

    int min, mid, max;

    min = x;
    min = (min > y) ? y : min;
    min = (min > z) ? z : min;

    max = x;
    max = (max > y) ? max : y;
    max = (max > z) ? max : z;

    if(x != max && x!= min) mid = x;
    if(y != max && y!= min) mid = y;
    if(z != max && z!= min) mid = z;

    return mid;
}

int check_fileName(char fileName[]){

    char check[4] = {'t', 'x', 't', '.'};

    for(int i = 0; i < 4; i++){

        if(fileName[strlen(fileName) - 1 - i] != check[i]){
            return 0;
            break;
        }

    }
    return 1;
}

int main(){

    int x, y, z;
    char fileName[100];

    printf("enter 3 numbers (positive or negative) with no spaces seperated with ; \n");
    scanf("%d;%d;%d", &x, &y, &z);

    FILE * fp;

    while(1){

        printf("eneter name ending in .txt of file for printing results \n");
        scanf("%s", fileName);
        
        if(check_fileName(fileName)){
            break;
        }

    printf("incorrect.\n");

    }


    fp = fopen(fileName, "w");
    fprintf(fp, "%d", find_middle(x, y, z));

    return 0;
}