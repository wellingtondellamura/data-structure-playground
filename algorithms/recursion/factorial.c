#include <stdio.h>

/*
* Factorial
* The factorial of a number is the product of all the natural numbers from 1 to that number.
* Examples:
*    5! = 5 * 4 * 3 * 2 * 1 = 120
*    3! = 3 * 2 * 1 = 6
*
* Strategy:
*    1. Base case: factorial(1) = 1
*    2. Recursive case: factorial(n) = n * factorial(n-1)
*/

int factorial(int n) {
    if (n == 1) { // base case
        return 1;
    }
    return n * factorial(n-1); // recursive case
}

int main(int argc, char *argv[]) {
    int n = 5;
    printf("factorial(%d) = %d\n", n, factorial(n));
    return 0;
} 
