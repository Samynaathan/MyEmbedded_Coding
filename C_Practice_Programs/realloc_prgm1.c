#include<stdio.h>
//To use realloc in our program
#include<stdlib.h>

int main()
{
    int *ptr,size,i;

    /*
     * Let's create memory for 2 integers
     * size = 2
     */
    size = 2;
    ptr = malloc(size * sizeof(int));

    // *(ptr + i) === ptr[i]
    *(ptr + 0) = 1;
    *(ptr + 1) = 2;

    //printing elements
    for(i = 0; i < size; i++)
          printf("%d\n",ptr[i]);
    /*
     * Let's change the size to store 3 more integers
     * size = 5
     */
    size = 5;
    ptr = realloc(ptr, size * sizeof(int));

    *(ptr + 2) = 3;
    *(ptr + 3) = 4;
    *(ptr + 4) = 5;

    for(i = 0; i < size; i++)
          printf("%d\n",ptr[i]);

    return 0;
}