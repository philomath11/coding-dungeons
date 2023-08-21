//function to print factorial of n (example of recursive function)
# include <stdio.h>
int factorial(int n);
int main() {

int n;
printf("enter n : ");
scanf("%d", &n);
printf("factorial is : %d", factorial(n));
return 0;
}

//Recursive Function
//base case is important, without it function tend to infinity thus tack over flow => crash
int factorial(int n) {
if(n == 0) { //deciding the base of recursion which means fron n to this base
return 1;   //value would be calculated
}

int factnm1 = factorial(n-1);//declaring the (final - 1) value
int factn = factnm1 * n;//main procedure
return factn;
}