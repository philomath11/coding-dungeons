// Write a Program to give grades to a student
// marks < 30 is C
// 30 <= marks < 70 is B
// 70 <= marks < 90 is A
// 90 <= marks <= 100 is A+
#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks(0-100) : ");
    scanf("%d", &marks);
    if(marks >= 0 && marks < 30){
        printf("Grade C");
    }
    else if(marks >= 30 && marks < 70){
        printf("Grade B");
    }
    else if(marks >= 70 && marks < 90){
        printf("Grade A");
    }
    else if(marks >= 90 && marks <= 100){
        printf("Grade A+");
    }
    else{
        printf("Invalid input!");
    }

    return 0;



}