#include <stdio.h>

long getFileSize(char *fileName);

int main(){

    printf("%ld", getFileSize("file.txt"));

    return 0;
}

long getFileSize(char *fileName){

    FILE* fp;
    fp = fopen(fileName, "r");

    fseek(fp, 0, SEEK_END);

    return ftell(fp);
}