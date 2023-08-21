//program to print a complex number using arrow operator
#include<stdio.h>

struct complxnum {
    int real;
    int img;
};

int main(){
    struct complxnum n1= {3, 8};
    struct complxnum *ptr = &n1; //add ptr differrently cause we cannot point address for the main struct
    printf("real part : %d\nimg part : %d", ptr->real, ptr->img);
return 0;
}