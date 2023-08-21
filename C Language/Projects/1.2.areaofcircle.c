#include<stdio.h>
#include<math.h>
//newer header file is used for power function

int main() 
{
    float radius;
    printf("enter radius : ");
    scanf("%f", &radius);
    printf("The area of Circle is : %f",3.14*pow(radius,2)); //pow is the power, which is radius^2
    return 0;
}