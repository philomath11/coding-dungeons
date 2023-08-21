//Chp 4 Loop Statements
#include<stdio.h>
int main(){
   
//for loop
for(int i=1; i<=100; i++) {
printf("%d\n", i);
}
/*
for(initialisation; condition; updation) {
//do something }
~first term is also called as the iterator
~when we keep condition space blank, infinite loop is created
cause there is no condition to stop the execution of the iterator
~charcters/float values can be used too
~int when defined in a for loop stays valid only inside loop
*/

//while loop
int i=1;
while(i<=100) {
printf("%d\n", i);
i++;//updation end of the while loop
}
/*
while(condition) {
//do something
}
*/

//do while loop
i = 1;
do {
printf("%d\n", i);
i++;
} while(i<=100);
/*
do {
//do something
} while(condition);
~it simple means keep doing(do) this until(while)
~preferred for taking input from user
*/

//break loop
for(int i=1; i<=5; i++) {
if(i == 3) {
break;//stops the execution if the loop is satisfied
}
printf("%d\n", i);
}
printf("end");

//continue loop (skips to next iteration)
for (int i=1; i<=5; i++) {
if(i == 3) {
continue;//to avoid printing the value of 3 and rest continue the loop
}
printf("%d\n", i);

}

return 0;
}