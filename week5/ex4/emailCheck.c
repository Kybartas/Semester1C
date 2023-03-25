#include <stdio.h>
#include <string.h>

int main(){

    int indexAt=0, indexDot=0;
    char email[50];

    
    scanf("%s", email);

    for(int i = 0; i < strlen(email); i++){

        if(email[i] == '@' && i != 0){
            indexAt = i;
            break;
        }

    }

    for(int i = indexAt; i < strlen(email); i++){
        if(email[i] == '.'){
            indexDot = i;
            break;
        }
    }

    if(indexAt == 0){
        printf("1incorrect input\n");
    } else if(indexDot == 0){
        printf("2incorrect input\n");
    } else if(email[indexAt+1] == '@'){
        printf("3incorrect input\n");
    } else if (email[indexDot+1] == '.'){
        printf("4incorrect input\n");
    } else if (email[indexAt+1] == '.'){
        printf("incorrect input\n");
    }


    printf("%d %d", indexAt, indexDot);

    return 0;
}