#include <stdio.h>
#include "forExercises.c"
#include "whileExercises.c"

int counter;
void forLoop();
void whileLoop();
void doWhileLoop();

int main() {
    printf("Hello, World!\n");
    forLoop();
    printf("Counter:%d\n",counter);
    whileLoop();
    printf("Counter:%d\n",counter);
    doWhileLoop();
    printf("Counter:%d\n",counter);
    sign_on();
    code();
    return 0;
}

void forLoop() {
    for (int i = 0; i < 10; ++i) {
        counter++;
    }
}

void whileLoop() {
    int i;
    while (i<10){
        i++;
        counter++;
    }
}

void doWhileLoop() {
    int i;
    do {
        i+=2;
        counter++;
    } while (i < 10);
}


