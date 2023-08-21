//make a gst calculator for 3 objects and print final price using arrays
#include<stdio.h>

float gstcalc(float *p);
int main(){
    float price[3];

    printf("Price 1 : ");
    scanf(" %f", &price[0]);
    printf("Price 2 : ");
    scanf(" %f", &price[1]);
    printf("Price 3 : ");
    scanf(" %f", &price[2]);

    gstcalc(&price[0]);
    printf("Final Price of 1 is %f\n", price[0]);
    gstcalc(&price[1]);
    printf("Final Price of 1 is %f\n", price[1]);
    gstcalc(&price[2]);
    printf("Final Price of 1 is %f\n", price[2]);

    printf("Bill to be paid : %f", price[0]+price[1]+price[2]);

return 0;
}

float gstcalc(float *p) {
    *p += (*p * 0.18);
}