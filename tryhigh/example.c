#include <stdio.h>

int main() {
    int y = 10;
    int *x = &y;

    printf("Value of y: %d\n", y); // Output: 10
    printf("Value of x: %d\n", *x); // Output: 10

    // Changing the value of y via x
    *x = 20;

    printf("New value of y: %d\n", y); // Output: 20
    printf("New value of x: %d\n", *x); // Output: 20

    return 0;
}

