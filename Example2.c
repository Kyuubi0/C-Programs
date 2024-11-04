#include <stdio.h>
#include <stdlib.h>

/*program where the speed of the car is found after the time is entered by the user*/

int main(int argc, char const *argv[])
{
        int T, V, X;
    printf("Enter the path : ");
    scanf("%d", &X);
    printf("Enter the time : ");
    scanf("%d", &T);
    V = X / T;
    printf("Your speed : %d", V);
    return 0;
}
