#include <stdio.h>

int main(int argc, char const *argv[])
{
     int week;
    printf("Enter a number (1-7): ");
    scanf("%d", &week);
    switch (week) {
        case 1: printf("Monday");
            break;

        case 2: printf("Tuesday");
            break;

        case 3: printf("Wednesday");
            break;

        case 4: printf("Thursday");
            break;

        case 5: printf("Friday");
            break;

        case 6: printf("Saturday");
            break;

        case 7: printf("Sunday");
            break;

        case 8: printf("Unvalid number!");
            break;
    }

    return 0;
}