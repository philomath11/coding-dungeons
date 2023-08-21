//Dynamic Memory Allocation>
#include<stdio.h>
#include<stdio.h> //standard library - necessary for DMA

int main(){
//sizeof function
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));

//malloc - sends total number of bytes = 5*sizeofint memory
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));//declaration
    ptr[0] = 3;// calling allocated memory is similar to using an array
    ptr[1]= 5;

//calloc - sends total number of locations*size of each required location memory
//it is similar to malloc except null(0) value is already stored in calloc
    int *ptr = (int *) calloc(5, sizeof(int));
    for(int i=0; i<5; i++) {
    printf("number %d = %d\n", i+1, ptr[i]);//will print zeros
    }

//realloc - like free but instead of only clearing it allocates a newer size
    ptr = realloc(ptr,8);//size changed from 5->8
 
//free - https://youtu.be/irqbmMNs2Bo?t=37150
//empties the memory allocated to the malloc/calloc thus freeing resources and then it can be reused
//a part of BEST PRACTICE
    free(ptr);

return 0;
}