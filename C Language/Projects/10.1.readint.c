//write a program to write 5 integers from the mentioned file
//to execute this file ensure you've downloaded 10.0.TestInt.txt
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("10.0.TestInt.txt","r");

    int n;
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
    fscanf(fptr, "%d", &n);
    printf("number = %d\n", n);
/*
loop version ->
    while (fscanf(fptr, "%d", &n) == 1) {
        printf("number = %d\n", n);
    }
*/

    fclose(fptr);

return 0;
}