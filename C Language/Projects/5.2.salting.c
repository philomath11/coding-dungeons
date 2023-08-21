//salting(related with password securing) concept at https://youtu.be/irqbmMNs2Bo?t=2
#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main(){
    char password[100];
    scanf("%s", password);
    salting(password);
}

void salting(char password[]){
    char NewPass[200];
    char salt[] = "123";

    strcpy(NewPass,password); //copy password string onto NewPass
    strcat(NewPass,salt); //concatenate(join) both strings
    puts(NewPass); //output new string
}