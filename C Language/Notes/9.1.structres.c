#include <stdio.h>
# include <string.h>

struct student { //structure heading
    char name[100];//structure data
    int roll;
    float cgpa;
    };

int main(){
    struct student s1;
    // s1.name = "Shradha"; // not a modifiable value
    strcpy(s1.name,"jayuwu");//strcpy so that name[] can be reused
    s1.roll = 64;
    s1.cgpa = 9.2;

//array of structures
    struct student IT[60];
    IT[0].roll = 112;
    //similarly for rest data types

//declaration
    struct student s2 = {"Rajat", 1552, 8.6}; //works identical with above declaration but easier
    struct student s3 = {0};//allocates null to all values
    
    printf("roll no of s2 = %d\n", s2.roll);
    printf("roll no of s3 = %d\n", s3.roll);
    
//pointer to structure
    struct student *ptr = &s1;//pointer is exactly same except of int/char use struct
    printf("student.name = %s\n", (*ptr).name);
    printf("student.roll = %d\n", (*ptr).roll);
    printf("student.cgpa = %f\n", (*ptr).cgpa);

//arrow operator ( (*ptr).roll <-> ptr -> roll), can be used elsewhere
    printf("student->name = %s\n", ptr->name);
    printf("student->roll = %d\n", ptr->roll);
    printf("student->cgpa = %f\n", ptr->cgpa);

//Passing structure to function
    printInfo(s1); //only call after declaring struct in previous steps

//typedef keyword -> used to define aliases
//see the definition and exp at https://youtu.be/irqbmMNs2Bo?t=32369



return 0;
}

void printInfo(struct student s1) {
    printf("student info : \n");
    printf("name = %s\n", s1.name);
    printf("roll no = %d\n", s1.roll);
    printf("cgpa = %f\n", s1.cgpa);
    //change
    s1.roll = 1660; //but it won't be reflected to the main function
    //as structures are passed by value
}