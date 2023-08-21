//check is the alphabet is lower or upper case
#include<stdio.h>
int main()
{
char ch;
printf("enter character : \n");
scanf("%c", &ch);
//noticeable use of assignment operators in chars(ch have value assigned)
if (ch >= 'A' && ch <= 'Z') {
printf("upper case \n");
}
else if (ch >= 'a' && ch <= 'z') {
printf("lower case\n");
}
else{
    printf("not an english letter \n");
} 
return 0;
}