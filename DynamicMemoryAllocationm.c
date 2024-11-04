#include <stdio.h>
#include <stdlib.h>

/*This program asks the user to enter a series of integers and then counts the positive, 
negative, and zero values, adds the positive numbers and places them in an array, 
adds the zeros to the array if there are zeros, and finds and returns the maximum value in the array if there are no positive values.*/

int main(int argc, char const *argv[])
{
     int a, i, j = 0, poz = 0, neg = 0, zero = 0, sum = 0;

    printf("How many values ​​will you enter in an array? : \n");
    scanf("%d", &a);

    // A fixed size array can be defined or dynamic memory can be allocated
    int* arr = (int*)malloc(a * sizeof(int));

    for (i = 0; i < a; i++) {
        printf("Enter the %d. value : \n", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] > 0) {
            poz++;
        }
        else if (arr[i] == 0) {
            zero++;
        }
        else {
            neg++;
        }
    }

    int* arr2;
    if (poz != 0) {
        arr2 = (int*)malloc(poz * sizeof(int));
        for (i = 0; i < a; i++) {
            if (arr[i] > 0) {
                arr2[j] = arr[i];
                sum += arr[i];
                j++;
            }
        }
    }
    else if (poz == 0 && zero > 0) {
        sum = 0;
        arr2 = (int*)malloc(zero * sizeof(int));
        for (i = 0; i < zero; i++) {
            arr2[i] = 0;
        }
    }
    else {
        arr2 = (int*)malloc(sizeof(int));
        int max = arr[0];
        for (i = 0; i < a; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        sum = max;
        arr2[0] = max;
    }

    for (i = 0; i < poz + zero + 1; i++) {
        printf("%d. value = %d\n", i + 1, arr2[i]);
    }

    printf("%d your sum\n", sum);

    // Release dynamic memory allocation
    free(arr);
    free(arr2);
    return 0;
}
