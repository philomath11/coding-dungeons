#include<stdio.h>

int main() {    
//* => for value, & => for address
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    // *ptr = 0; this stores the mentioned value at the adress present in ptr
    // imp qts https://youtu.be/irqbmMNs2Bo?t=20426
    //works for char, float too
    printf("%d\n", _age);

//address / %u can be used to display data address in another format
    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);

//data
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

//pointer to pointer
//to store the address value of another pointer
    int **pptr = &ptr;
    printf("%d", **pptr);//we can similarly print adress too

return 0;
}