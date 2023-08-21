//print n numbers in fibonacci series
#include<stdio.h>
int main(){
    int n1=0,n2=1,n3,i,t;
    printf("enter number of terms for fibonacci series: ");
    scanf(" %d", &t);

    printf("\n%d %d",n1,n2);//cause 0, 1 are beginning of fibonacci series

    for(i =2;i<t;++i){
        n3 = n1 + n2; //fundamental of fibn series
        printf(" %d",n3);
        n1 = n2;
        n2=n3;
    }
    return 0;
}