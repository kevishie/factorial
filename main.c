#include <stdio.h>

/**
 * n! = n x (n - 1) x ... x 1
 */
int factorial(int n) {
    // Base case
    if (n == 0)
        return 1;

    // Recursive
    return n * factorial(n - 1);
}

int main() {
    int number = 7;
    printf("Factorial of %d is %d\n", number,  factorial(number));
    return 0;
}

