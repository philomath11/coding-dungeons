#include<stdio.h>

int main(){
//syntax for declaring/opening file
    FILE *fptr;
    fptr = fopen("10.0.TextRead.txt", "r");

    //rules for r/w
    /*
    when reading if the file doesn't exist, output = NULL
    when writing if the file doesn't exist, it'll create a new file
    */
    
//reading a file
//if we don't use array it'll pick only first letter, we can do it one by one to like fgetc
    char read[10];
    if(fptr == NULL) {
    printf("doesn't exist!\n");
    } 
    else {
    fscanf(fptr, "%s", read);
    printf("character in file is : %s\n", read);
    }
    fclose(fptr);//BEST PRACTICE -> always close a file after opening it

//Writing in a file
//writing a file also erases older content
    fptr = fopen("10.0.TextWrite.txt", "w");
    char write[10]= "MANGO";
    fprintf(fptr, "%s", write);
    fclose(fptr);

//fgets, we cannot use arrays here
    fptr = fopen("10.0.TextRead.txt", "r");
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    fclose(fptr);

//fputc, we cannot use arrays here
   fptr = fopen("NewFile.txt", "w");
   fputc('a', fptr);
   fputc('p', fptr);
   fputc('p', fptr);
   fputc('l', fptr);
   fputc('e', fptr);
   fclose(fptr);

//read the full file (EOF)
//thought the same can be done using the regular read file using array method only downside would be more memory exhaustion
   fptr = fopen("10.0.TextEOF.txt", "r");
   char eof;
   eof = fgetc(fptr);
   while(eof != EOF) {
   printf("%c", eof);
   eof = fgetc(fptr);
   }
   printf("\n");
   fclose(fptr);

return 0;
}