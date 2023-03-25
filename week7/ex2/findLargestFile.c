#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * findLargest(int count, char *files[]){

    char *fileName = calloc(100, sizeof(char));
    long int fileSize = 0;

    for(int i = 1; i < count; i++){

        FILE *fp = fopen(files[i], "r");

        if(fp){

            fseek(fp, 0, SEEK_END);

            if(ftell(fp) > fileSize){
                strcpy(fileName, files[i]);
                fileSize = ftell(fp);
            }

        }

        fclose(fp);

    }

    return fileName;

}

int main(int argc, char *argv[]){

    findLargest(argc, argv);

    return 0;
}
