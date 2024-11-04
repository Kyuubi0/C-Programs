#include <stdio.h>
#include <stdlib.h>

/* Purpose of the program: This program takes a number from the user and creates a string. After that, the program prompts
the user to enter elements for this string, where all the elements are integers. Subsequently, the program examines each
element to determine if it is a prime number. It then constructs a new string containing only the prime numbers.
Finally, the program prints the new string to the screen. */

// the function is says that "Is this a prime number?" :
int IsPrime(int number);

int main(void) {
    int n=5,n1=5,i; // n=1.array size n1=1.array size i=counter

    // printf("What will be the size of your array? : ");
    // scanf("%d", &n);

    int array1[5]; // array1 that we takes array size from user

    // we are wanting the array elements from user and we are counting of the prime numbers
    for (i = 0; i < n; i++) {
        printf("\n%d.number : ", i + 1);
        scanf("%d", &array1[i]);
        if (IsPrime(array1[i]) == 1) {
            n1++;
        }
    }
    
    // we creates array2
    int array2[5];
    n1 = 0;

    // we are putting the prime numbers of array1 to prime numbers array2
    for (i = 0; i < n; i++) {
        if (IsPrime(array1[i]) == 1) {
            array2[n1] = array1[i];
            n1++;
        }
    }

    // we are printing array2
    for (i = 0; i < n1; i++) {
        printf("%d.number : %d\n", i+1, array2[i]);
    }
    return 0;
}

// we are looking for the numbers that we sent to the fonction from our arrays.
int IsPrime(int number) {
    int i;
    if (number % 2 == 0) {
        return 0;
    }
    else {
        for (i = 3; i < number; i++) {
            if (number % i == 0) {
                return 0;
            }
        }
    }
    return 1;
}