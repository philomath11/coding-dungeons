//store marks for threee subjects of two students using multidimensional arrays
#include<stdio.h>
int main(){
    // 2 x 3
    int marks [2] [3]; //_ _ _ / _ _ _ (imagine like a matrix)
    marks [0][0] = 90; //score of student 1
    marks [0] [1] = 89;
    marks [0] [2] = 78;

    marks [1] [0] = 90; //score of student 2
    marks [1][1] = 89;
    marks [1] [2] = 78;

    printf("%d", marks [0][2]);
return 0;
}