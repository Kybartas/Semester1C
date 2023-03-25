#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct Point{

    double x;
    double y;

};

typedef struct Point Point;

struct Stack{

    Point *array;
    int size;

};

typedef struct Stack Stack;

void initStack(Stack *stack);
void printStack(Stack *stack);
void push(Stack *stack, Point value);
Point top(Stack *stack);
Point pop(Stack *stack);
void destroyStack(Stack *stack);
Point createPoint(double x, double y);

int main(){

    Stack s;

    initStack(&s);

    push(&s, createPoint(-5.0, 3.0));
    push(&s, createPoint(2.0, -3.0));
    push(&s, createPoint(1.0, 4.0));
    push(&s, createPoint(-1.0, -1.0));
    push(&s, createPoint(5.0, -2.0));

    printStack(&s);


    return 0;
}

void initStack(Stack *stack){

    stack->size = 0;
    stack->array = malloc(stack->size * sizeof(Point));

}

void printStack(Stack *stack){

    for (int i = 0; i < stack->size; i++){

        double distance;
        distance = sqrt( pow(stack->array[i].x, 2) + pow(stack->array->y, 2));

        printf("\n(%f,%f)", stack->array[i].x, stack->array[i].y);
        printf(" - distance to zero: %lf", distance);

    }

}

void push(Stack *stack, Point value){

    stack->size = stack->size + 1;

    stack->array = realloc(stack->array, stack->size * sizeof(Point));

    stack->array[stack->size-1] = value;

}

Point top(Stack *stack){

    Point topPoint;

    if(stack->size != 0){

    topPoint = stack->array[stack->size-1];

    } else {

        Point zeroPoint = {0, 0};
        return zeroPoint;
    
    }

    return topPoint;
}

Point pop(Stack *stack){

    Point topPoint = top(stack);

    stack->size = stack->size - 1;

    stack->array = realloc(stack->array, stack->size * sizeof(Point));

    return topPoint;

}

void destroyStack(Stack *stack){

    free(stack->array);
    stack->size = 0;

}

Point createPoint(double x, double y){

    Point p = {x, y};

    return p;

}