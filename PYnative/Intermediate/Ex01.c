#include <stdio.h>

// Practice Problem: Write a function swap(int *a, int *b) that takes the addresses of two integers
// and swaps their values.

int swap(int* a, int* b);

int main( void ) {

    int x = 0;
    int y = 0;

    printf("X value:");
    scanf("%d", &x);
    printf("Y value:");
    scanf("%d", &y);

    printf("Before Swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swap: x = %d, y = %d\n", x, y);

    return 0;
}

int swap(int* a, int* b) {
    int aux = *a;

    // swap
    *a = *b;
    *b = aux;

    return 0;
}

// Completed