#include <stdio.h>
#include <stdlib.h>
/*program that calculates the perimeter and area of ​​a square whose side length is entered by the user*/

int SquareCalculation()
{
    int Lenght, Area, Perimeter;
    printf("Enter the length of a side of the square: ");
    scanf("%d", &Lenght);
    Perimeter = 4 * Lenght;
    Area = Lenght * Lenght;
    printf("Perimeter of the square : %d\nArea : %d",Perimeter,Area);
    return 0;
} 

/*program that calculates the circumference and area of ​​a circle whose radius is entered by the user */ 
int CircleCalculation()
{
    float PI=3.14,Radius, Area, Perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f", &Radius);
    Perimeter = 2*PI*Radius;
    Area = PI*Radius*Radius;
    printf("Circumference of the circle : %.2f\nArea : %.2f", Perimeter, Area);
    return(0);
}

int main(int argc, char const *argv[])
{
    CircleCalculation();
    SquareCalculation();
    return 0;
}
