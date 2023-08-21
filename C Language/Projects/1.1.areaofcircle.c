#include<stdio.h>

int main() 
{
    float radius;
    printf("enter radius : ");
    scanf("%f", &radius);
    float area=3.14*radius*radius; 
    //we can either declare pi as member in header or directly substite as its a constant
    printf("The area of Circle is : %f",area);
    return 0;
}

