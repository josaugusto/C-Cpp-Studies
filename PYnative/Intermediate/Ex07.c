#include <stdio.h>
#include <stdlib.h>

// Practice Problem: Write a function my_strlen(char *s) that calculates the length of a string without using any built-in library functions.
// Print the original string and the calculated length.

int my_strlen(char *s);

int main(void) {

    char string[] = "Hello World";

    int length = my_strlen(string);

    printf("String: %s\nCalculated Length: %d\n", string, length);

    return 0;
}

int my_strlen(char *s) {

    char* ptr = NULL;
    int lengthString = 0;

    for (ptr = s; *ptr != '\0'; ++ptr) lengthString++;

    return lengthString;
}

// Completed