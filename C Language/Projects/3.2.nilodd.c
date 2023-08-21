//keep taking inputs from user until they enter an odd number
#include<stdio.h>
int main(){
    int n;
    do{
        printf("enter number : ");
        scanf("%d", &n);
        if(n % 2 != 0){
            break;
        }
    }while(1);
    return 0;

    }