#include<stdio.h>
int main()
{
//if-else statement
    int age;
    printf("Enter age : ");
    scanf("%d", &age);
    if(age > 18)
    {
        printf("you are an adult");
    }
    else{
        printf("you are a minor");
    }
    /*
    the instruction inside 'if' is executed if its true
    and instruction inside 'else' is executed if its false
    ~though we can ignore writing else but then it'll only check if it is true or not
    nothing would be executed if the specified condition if false
    ~we can ignore using curly brackets for single lined code
    ~nested if can be applied (using if one after another)
    */

//else-if statement
   if(age > 18)
    {
        printf("you are an Man");
    }
    else if (age > 13 && age < 18)
    {
        printf("you are a Teen");
    }
    /*
    if(Condition 1){
    do something if TRUE}
    else if (Condition 2) {
    do something if 1st is FALSE & 2nd is TRUE}
    ~we can write en-number of else if until we get the desored system
    ~'if' and 'else' do not correspond to the answer of previous condtion
    they will be executed either ways
    ~'else if' corresponds to previous statement and needs previous statement to be fale to get executed
    */

//ternary operator
   (age >= 18)?printf("big hooman"):printf("small hooman");
   /*
   condition?task if condition true:task if condition false;
   */

//switch operator
   char day = 'f';
   switch(day) {
   case 'm' : printf("monday \n");
   break;
   case 't' : printf("tuesday \n");
   break;
   case 'w' : printf("wednesday \n");
   break;
   case 'T' : printf("thursday \n");
   break;
   case 'f' : printf("friday \n");
   break;
   case 's' : printf("saturday \n");
   break;
   case 'S' : printf("sunday \n");
   break;
   }
    /*
    ~Nested switch is possible
    ~cases mentionend can be any order
    ~number can be used instead of characters
    */

return 0;
}