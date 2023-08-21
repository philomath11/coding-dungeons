#include<stdio.h>
#include<math.h>
int main()
{
    //REALTIONAL OPERATORS
    printf("true %d ", 4 == 4);
    /* 
    == (checks for equality)
    >,>= (greater than or equal to)
    <,<= (less than or equal to)
    != (checks inequality)*/

    //LOGICAL OPERATORS - to solve irl conditions(logic tables)
    printf("true %d ", (4==4)&&(4>2));
    //&& (and operator) only gives true when both are true
    printf("true %d ", 4==3 || 5>2);
    //|| (or operator) atleast one should be true to get true
    printf("false %d ", !(4==4 && 4>2));
    //! (not operator) to flip the output value of the statement

    //ASSIGNMENT-or-SHORTHAND OPERATORS - to convey the value
    int a = 1;
    int b = 3;
    a += b;
    printf("%d ", a);
    /*
    = (assigns the mentionend values_assigning and using the value before/same line does not work)
    += (is used instead of doing a = a + b, to 'shorten the process') similarly,
    -= *= /= %= (for various arithmetic operators)
    */

   int i=1;
// increment operators
//++i(pre incrememnt operator) i++ (post increment operator)
printf("%d\n", i++); // use, then increase
printf("%d\n", i);

printf("%d\n", ++i); // increase, then use
printf("%d\n", i);

//same for post-pre decrement --i, i--

    return 0; 
}