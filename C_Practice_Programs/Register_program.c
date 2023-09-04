#include <stdio.h>

int main() {
    int value;
    int *ptr;

    // Get the address where the value will be stored
    ptr = (int *)0x12345678; // Replace with the desired memory address

    // Store a value at the specified address
    *ptr = 42;

    // Print the value stored at the specified address
    printf("Value at address %p: %d\n", ptr, *ptr);

    return 0;
}
