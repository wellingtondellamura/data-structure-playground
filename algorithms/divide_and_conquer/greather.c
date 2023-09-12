#include "../../utils/arrays.h"


int greater(int* arr, int size) {
    if (size == 1) {    //base case
        return arr[0]; 
    }
    //divide
    int mid = size / 2;
    //conquer
    int left = greater(arr, mid);
    int right = greater(arr + mid, size - mid);
    //combine
    return left > right ? left : right;
}

int main(int argc, char *argv[]) {
    //allocate memory for array
    int size = 10;
    int* arr = initArray(size, 1);
    int g = greater(arr, size);
    printf("greater: %d\n", g);
    return 0;
} 
