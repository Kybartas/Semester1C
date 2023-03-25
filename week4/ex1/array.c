#include <stdio.h>
#include <string.h>

void print_array(int a[], int size){

    printf("\n");
    for (int i = 0; i < size; i++){
        printf("%d", a[i]);
    }

}

void delete_num(int a[], int size, int position){

    for(int i = position; i < size; i++){
        a[i] = a[i+1];
    }

}

void insert_num(int a[], int size, int position, int number){

    for(int i = size-1; i > position; i--){
        a[i] = a[i-1];
    }
    a[position] = number;

}


int main(){

    int size = 10;

    //a
    int a[10] = {0};    

    //b
    print_array(a, size);

    //c
    a[0] = 1;
    a[3] = 2;
    a[9] = 3;

    //d
    size--;
    delete_num(a, size, 2);

    //e
    size++;
    insert_num(a, size, 6, 4);
    
    //f
    print_array(a, size);

    //g
    int x, y;
    printf("\nenter x and y\nx = position of new element\ny = new element\n");
    scanf("%d %d", &x, &y);

    for(int i = 0; i < size; i++){
        if (i == x) a[i] = y;
    }


    //h
    printf("\nenter position of element for deletion\n");
    scanf("%d", &x);

    size--;
    delete_num(a, size, x);

    //i
    printf("\nenter x and y\nx = position of new inserted element\ny = new element\n");
    scanf("%d %d", &x, &y);

    size++;
    insert_num(a, size, x, y);

    
    //j
    print_array(a, size);


    return 0;
}