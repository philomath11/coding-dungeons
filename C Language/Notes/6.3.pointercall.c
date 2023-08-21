#include<stdio.h>

void square(int n);
void _square(int* n);

int main() {
    int number = 4;
//call by value, used when asked to return single value
    square(number);
    printf("n is : %d\n", number);//as the adress is isnt reffered, func will use older value
    //func is reffering to a copied value

//call by reference, used when asked to return multiple values
    _square(&number);
    printf("n is : %d\n", number);//the ptr will refer the new value from function
    //because the function is directly referring to the address not the copied value

return 0;
}

void square(int n) {
    n = n * n;
    printf("square is : %d\n", n);
}

void _square(int* n){
    (*n)=(*n)*(*n);
    printf("square is : %d\n", *n);
}