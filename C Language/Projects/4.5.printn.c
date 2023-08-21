//print numbers 0 to n, n is input by user
#include<stdio.h>
int main(){
    int n;
    int i = 0;
    printf("enter number : ");
    scanf("%d", &n);
    while(i <= n){
        printf("%d \n",i );
        i++;
    }
    return 0;

}