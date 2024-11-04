#include <stdio.h>
#include <stdlib.h>

/*program that swaps variables*/
int SwapVariables()
{
    int x, y, z=0;
    printf("X : ");
    scanf("%d", &x);
    printf("Y : ");
    scanf("%d", &y);
    printf("X : %d Y : %d", x, y);
    z = x;
    x = y;
    y = z;
    printf("\nX : %d Y : %d", x, y);
    return (0);
}

/* program to find whether the entered number is odd or even */
int OddEven() {
    int number;
    printf("number : ");
    scanf("%d", &number);
    if (number % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");
    return 0;
}

/* program to find whether the entered number is positive, negative or 0 */
int Sign() {
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    if (number > 0)
        printf("Positive number");
    else
        if (number < 0)
            printf("Negative number");
        else
            printf("Your number is zero!");
    return 0;
}


/* Finding the max of two numbers entered */
int MaxOne() {

    int number1, number2;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);
    if (number1 < number2)
        printf("%d is bigger.", number2);
    else
        if (number1 > number2)
            printf("%d is bigger.", number1);
        else
            printf("Ther are equal!");
    return 0;
}

#include <stdio.h>

// program to print natural numbers from 1 to n :
int WriteNumbers() {
    int n,i;
    printf("Enter the n number : \n");
    scanf("%d", &n);
    while (n < 1) {
        scanf("%d", &n);
    }
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}

// program that prints all letters from a to z:
int WriteLetters(void) {
    char ch = 'a';
    for (ch; ch < 'z'; ch++) {
        printf("%c\n", ch);
    }
    return 0;
}

// program to print negative elements in array :
int NegativeArray(void) {
    int n=6, i,j=0;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    //int arr[n],arrneg[n];
    int arr[6],arrneg[6];
    for (i = 0; i < n; i++) {
        printf("\n%d. element : ",i+1);
        scanf("%d", &arr[i]);
        if (arr[i] < 0) {
            arrneg[j] = arr[i];
            j++;
        }
    }
    for (i = 0; i < j; i++) {
        printf("\n%d.negative element : %d", i+1, arrneg[i]);
    }
    return 0;
}

long GreatCommonDiviser(long m, long n)
{
    while(n!=0)
    {
        long rem = m%n;
        m=n;
        n=rem;
    }
    return m;
}

int main(int argc, char const *argv[])
{
    SwapVariables();
    OddEven();
    Sign();
    MaxOne();
    WriteNumbers();
    WriteLetters();
    NegativeArray();
    GreatCommonDiviser(18,4);
    return 0;
}
