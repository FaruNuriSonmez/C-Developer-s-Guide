#include <stdio.h>
#include <stdlib.h>

// gcc main.c -o main.exe
// .\main.exe 8 5 6 3 1 7 9 5 2

void bubbleSort(int numbers[], size_t size);

// argc -> entered argument numbers (arg counter)
// argv -> entered arguments (arg vector)

int main(int argc, char* argv[]) {
    printf("%d\n",argc);
    int size = argc-1;
    int* numbers = (int*) malloc(size*sizeof(int));
    int num;

    for (int i = 1; i < argc; i++) {
        num = atoi(argv[i]);
        numbers[i-1] = num;
    }

    bubbleSort(numbers, size);

    for (int i = 0; i < size; i++) {
        printf("%d ",numbers[i]);
    }
}

void bubbleSort(int numbers[], size_t size){
    int i,j,k;
    for (int i = 0; i < size ; i++) {
        for (int j = 0; j <size-1; j++) {
            if(numbers[j] > numbers[j+1]){
                k=numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = k;
            }
        }
    }
}