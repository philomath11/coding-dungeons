//program to add vectors using structures
#include<stdio.h>

struct vectors{
    int x;
    int y;
};

void AddVectors (struct vectors v1, struct vectors v2,struct vectors sum);

int main(){
    struct vectors v1={3, 7};
    struct vectors v2={10, 2};
    struct vectors sum={0,0};//we have  to stor x and y sum differently, hence
    AddVectors(v1, v2, sum);
return 0;
}

void AddVectors(struct vectors v1, struct vectors v2,struct vectors sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    
    printf("sum of x is : %d\nsum of y is : %d", sum.x, sum.y);
}