#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* A program that generates 100 random integers and stores them in an array; also findes the index of the maximum element in the array*/

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int array[100];
    int i, max;
    for (i = 0; i < 100; i++) {
        array[i] = rand();
    }
    max = array[0];
    for (i = 0; i < 100; i++) {
        printf("%d.element = %d\n", i + 1, array[i]);
        if (array[i] > max) {
            max = array[i];
        }
    }
    printf("%d max element.", max);
    return 0;
}
