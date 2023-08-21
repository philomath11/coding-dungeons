//two numbers a,b - are written in a file make a program to change it with their sum
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("10.1.TestNumbers.txt","r");
    
    int a;
    fscanf(fptr, "%d", &a);
    printf("number a is = %d\n", a);
    int b;
    fscanf(fptr, "%d", &b);
    printf("number b is = %d\n", b);
    fclose(fptr);
    
    int sum = a + b;
    printf("sum is = %d", sum); //the value will change in folder, for now ive kept it unchanged
    fptr = fopen("10.1.TestNumbers.txt","w");
    fprintf(fptr, "\nsum = %d", sum);
    fclose(fptr);

return 0;
}