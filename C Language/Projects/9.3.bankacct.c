//make a bank account manager and decalre struct using an 'alias'
#include<stdio.h>

typedef struct holder {
    int acctnum;
    char name[100];//remember to define size, always
} acc;

int main(){
    acc m09 = {110010176,"mathdebate09"};
    printf("acc number : %d\nacc holder name : %s",m09.acctnum, m09.name);
return 0;
}