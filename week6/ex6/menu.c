#include <stdio.h>

int showMenu(char *menuTitle, char *menuOptions[], int menuSize, char *inputMsg);

int main(){

    char *menuItems[3][50] = {"Steak", "Fish", "Pizza"};

    while(1){

        int num = showMenu("Lunch menu", *menuItems, 3, "Select your meal");

        if(num <= 3 && num > 0){
            break;
        }
    }
    

    return 0;
}

int showMenu(char *menuTitle, char *menuOptions[], int menuSize, char *inputMsg){

    int num;

    printf("%s\n", menuTitle);

    for(int i = 0; i < menuSize; i++){

        printf("%d. %s\n", i+1, menuOptions[i]);

    }

    printf("%s\n", inputMsg);
    scanf("%d", &num);

    return num;
}