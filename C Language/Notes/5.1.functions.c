//make a calculator for circle, rectangle, sqaure area+perimeter in one
#include<stdio.h>
#include<math.h>

//function declaration
float circlea(float r);
float rectanglea(float l, float b);
float squarea(float s);

float circlep(float r);
float rectanglep(float l, float b);
float squarep(float s);

int main(){
    char g;
    printf("(circle 'c', rectangle 'r', square 'c') \nwhich geometrical figure : ");
    scanf(" %c", &g);
   
    if(g == 'c'){
        float r;
        printf("enter radius : ");
        scanf(" %f", &r);   
       
        char t;
        printf("(perimeter 'p', area 'a')\nEnter task : ");
        scanf(" %c", &t);
        if(t == 'a'){
            printf("area of the circle is %f", circlea(r));//function call
        }
        else if(t == 'p'){
            printf("perimeter of the circle is %f", circlep(r));
        }
    }
    else if(g == 'r'){
        float l,b;
        printf("enter length : ");
        scanf(" %f", &l); 
        printf("enter breadth : ");
        scanf(" %f", &b); 
       
        char u;
        printf("(perimeter 'p', area 'a') \nEnter task : ");
        scanf(" %c", &u);
        if(u == 'a'){
            printf("area of the rectanlge is %f", rectanglea(l,b));
        }
        else if(u == 'p') {
            printf("perimeter of the rectanlge is %f", rectanglep(l,b));
        }
    }
    else if(g == 's'){
        float s;
        printf("enter side : ");
        scanf(" %f", &s);   
       
        char w;
        printf("(perimeter 'p', area 'a')\nEnter task : ");
        scanf(" %c", &w);
        if(w == 'a'){
            printf("area of the square is %f", squarea(s));
        }
        else if(w == 'p'){
            printf("perimeter of the square is %f", squarep(s));
        }
    }

    return 0;
}

//function definition
float circlea(float r) { 
    float x = pow(r,2)*3.14;
    return x;
}
float circlep(float r) {
    float x = 3.14*2*r;
    return x;
}

float rectanglea(float l,float b) {
    float y = l*b;
    return y;
}
float rectanglep(float l, float b) {
    float y = 2*(l+b);
    return y;
}

float squarea(float s) {
    float z = pow(s,2);
    return z;
}
float squarep(float s) {
    float z = 4*s;
    return z;
}