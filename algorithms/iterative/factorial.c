#include <stdio.h>

/*
* Factorial
* The factorial of a number is the product of all the natural numbers from 1 to that number.
* Examples:
*    5! = 5 * 4 * 3 * 2 * 1 = 120
*    3! = 3 * 2 * 1 = 6
*
* Strategy:
*   Iterative case: a for loop that multiplies the number by all the numbers below it
*/

int factorial(int n) {
    for (int i = n-1; i > 0; i--) {
        n *= i;
    }
    return n;
}

int main(int argc, char *argv[]) {
    int n = 5;
    printf("factorial(%d) = %d\n", n, factorial(n));
    return 0;
} 
