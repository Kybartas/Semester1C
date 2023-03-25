#include <stdlib.h>
#include <stdio.h>

struct Stack{

    int *array;
    int size;

};

typedef struct Stack Stack;

void initStack(Stack *stack);
void printStack(Stack *stack);
int getStackSize(Stack *stack);
void push(Stack *stack, int value);
int top(Stack *stack);
int pop(Stack *stack);
void destroyStack(Stack *stack);

int main(){



    return 0;
}

void initStack(Stack *stack){

    stack->size = 0;
    stack->array = malloc(stack->size * sizeof(int));

}

void printStack(Stack *stack){

    for (int i = 0; i < stack->size; i++){
    
        printf("%d ", stack->array[i]);

    }

}

int getStackSize(Stack *stack){

    return stack->size;

}

void push(Stack *stack, int value){

    stack->size = stack->size + 1;

    stack->array = realloc(stack->array, stack->size * sizeof(int));

    stack->array[stack->size-1] = value;

}

int top(Stack *stack){

    int topElement;

    if(stack->size != 0){

    topElement = stack->array[stack->size-1];

    } else {

        return 0;
    
    }

    return topElement;
}

int pop(Stack *stack){

    int topElement = top(stack);

    stack->size = stack->size - 1;

    stack->array = realloc(stack->array, stack->size * sizeof(int));

    return topElement;

}

void destroyStack(Stack *stack){

    free(stack->array);
    stack->size = 0;

}