#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <time.h>

#define MATRIX_CELL_MAXVAL 1000
#define ARR_SIZE 100

int main()
{
    // int row, col;
    int i;
    // unsigned int randNum = 0;
    int arrayNum[ARR_SIZE]; // Array - 100 elements of type int (400 bytes)
    // Stack array

    printf("Welcome to an integer based random vector generator!\n\n");
    srand((unsigned int)time(NULL));

    // Populate the array
    for (i = 0; i < ARR_SIZE; i++)
    {
        arrayNum[i] = rand() % MATRIX_CELL_MAXVAL + 1;
    }

    // Print the array
    for (i = 0; i < ARR_SIZE; i++)
    {
        printf("%d,", arrayNum[i]);
    }
    printf("\n");

    return 0;
}