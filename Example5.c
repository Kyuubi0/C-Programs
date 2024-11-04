#include <stdio.h>
#include <stdlib.h>

//A program that selects the sum of special numbers that are divisors of themselves, excluding themselves, from a sequence and transfers them to a new sequence.

int perfect(int x) {
    int i=x-1,sum=0;
    while (i > 0) {
        if (x%i == 0) {
            sum += i;
        }
        i--;
    }
    if (sum == x) {
        return x;
    }
    else return -1;
}

int main(int argc, char const *argv[])
{
    int n=5,i,j=0,y;
    // printf("How many numbers does your array consist of?\n");
    // scanf("%d", &n);
    int array[5], array2[5];
    for (i = 0; i < n; i++) {
        printf("Enter the %d. value : \n",i+1);
        scanf("%d", &array[i]);
        array2[i] = perfect(array[i]);
    }
    j = 1;
    for (i = 0; i < n; i++) {
        if (array2[i] != -1) {
            printf("%d.value = %d\n", j, array2[i]);
            j++;
        }
    }
    return 0;
}
