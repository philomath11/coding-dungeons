//make a slice function which would print the sliced string out of the original one for n to m using strings
#include<stdio.h>
#include<string.h>

void slicing(char str[],int n, int m);

int main(){
    char str[]="HelloWorld";
    int n =3;
    int m =6;
    slicing(str,n,m);
}
 void slicing(char str[],int n,int m){
    char newstr[100];
    int j = 0; //j is required 
    for(int i=n;i<=m;i++,j++){//initializes for the values of n to m
        newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
 }