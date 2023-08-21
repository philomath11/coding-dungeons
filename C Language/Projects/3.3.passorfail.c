//marks >30 pass, marks <= 30 fail
#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks(0-100) : ");
    scanf("%d", &marks);
    if(marks > 0 && marks <= 30){
        printf("You've failed this exam :(");
    }
    else if(marks > 30 && marks <= 100){
        printf("You've passed this exam :)");
    }
    else {
        printf("Invalid input!");
    }
    //failed to acknowledge the scenario of invalid input
    return 0;
}