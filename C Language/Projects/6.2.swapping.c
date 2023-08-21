//rememebr the bucket emptying example
# include <stdio.h>

void swap(int a, int b);
void _swap(int* a, int *b);

int main() {
int x = 3, y = 5;

//call by value (wont swap tho => cause its reffering copied value not address)
swap(x, y);
printf("x = %d & y = %d\n", x, y);

//call by reference (would swap => cause its reffering to address)
_swap(&x, &y);
printf("x = %d & y = %d\n", x, y);

return 0;
}

//call by value function's var gonna have new address
void swap(int a, int b) {
int t = a;
a = b;
b = a;
}

//reference call function's var gonnah ave same address as the roginal one
void _swap(int* a, int* b) {
int t = *a;//stored value of a in temporary variable
*a = *b;  //transferred value of a to b
*b = t;  //transferred value of tempvar(contains a) to b
}