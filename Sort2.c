#include <stdio.h>
#include <stdlib.h>

/*A program that sorts the elements of a 10-element array from smallest to largest using bubble sort*/
int main(int argc, char const *argv[])
{
     int array[10], i, j, temp;

    for (i = 0; i < 10; i++)
    {
        printf("%d.value : ", i);
        scanf("%d", &array[i]);
    }

    for (j = 0; j < 10; j++)
    {
        for (i = 0; i < 10; i++) {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
