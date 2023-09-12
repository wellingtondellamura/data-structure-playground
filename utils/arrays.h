#ifndef ARRAYS_H

#define ARRAYS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function declarations
void printArray(int*, int);
int* initArray(int, int);

// Function to print an array
void printArray(int* arr, int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


// Function to initialize an array
int* initArray(int size, int print){
    //initialize array with random values
    srand(time(NULL));
    int* arr = (int*) malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
    if (print){
        printArray(arr, size);
    }
    return arr;
}

#endif // ARRAYS_H