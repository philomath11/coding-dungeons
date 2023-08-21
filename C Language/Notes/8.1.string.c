#include<stdio.h>
#include<string.h> //standard library function for strings

void printstring(char arr[]);

int main(){
    char firstname[] = ("math");
    //every term is stored in individual memory location
    //it can also be written as char firstname[] = ('m','a','t','h','\0');
    //always specify terms of char array using ''
    char lastname[] = ("debate");

    printstring(firstname);
    printstring(lastname);
    printf("\n");

    //print a string using specifier %s
    printf("2 %s", firstname);

    //scan, it isn't needed to use & cause arrays are already in address defined format
    //scanf cannot store multiword strings (multiword = includes space in btn)
    //thus, gets & puts
    char fullName[40];
    printf("enter full name : ");
    fgets(fullName, 40, stdin);//input a string
    puts(fullName); //output a string

    //using pointers in strings
    char *canchange = ("mathew"); 
    // this value can input as many times on the same address and changed
    puts(canchange);
    canchange = ("steve");
    puts(canchange);

    //Library Functions
    char name[] = "philo";
    int length = strlen(name);
    //strlen count the number of character exculding null character
    printf("the length of name : %d\n", length);

    char oldVal[] = "oldValue";
    char newVal[50];
    strcpy(newVal, oldVal);
    //strcpy to copy the second string on first string
    puts(newVal);
    
    char firstStr[50] = "Hello ";//ensure to declare size
    char secStr[] = "World";
    strcat(firstStr, secStr);
    //strcat to join both of the strings *(there's no space between strings)
    //*(the length of first string should be enough to store btoh strings)
    puts(firstStr);
    
    char str1[] = "Apple";
    char str2[] = "Banana";
    printf("%d\n", strcmp(str1, str2));
    //compares for the number of terms
    // if equal => 0 (string is identical)
    // if first > second => +ve (ASCII comparison/first is alphabetically smaller-or-ASCII of second is smaller than first)
    // if first < second => -ve (ASCII comparison/second is alphabetically smaller-or-ASCII of second is larger than first)

    //enter String using %c
    printf("enter string : ");
    char str[100];
    char ch;
    int i = 0;
    while(ch != '\n') {
    scanf("%c", &ch);
    str[i] = ch;
    i++;
    }//the while loop part acts like fgets
    str[i] = '\0';
    puts(str);

return 0;
}

void printstring(char arr[]){
    for(int i = 0;arr[i] != '\0';i++){
    printf(" %c", arr[i]);
    }
}
