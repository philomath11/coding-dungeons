//reverse an array (formula n-i-1)
//theoretically most imp

#include<stdio.h>
int reverse(int arr [], int n);
void printr(int arr [], int n);

int main(){
    int arr [] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    pritnr(arr,5);

}

void printr(int arr [], int n){
    for(int i = 0;i<n;i++){
        printf("%d/t", arr[i]);
    }
}

int reverse(int arr [], int n){
    for(int i = 0;i<n/2;i++){
        int firstval = arr[i];
        int secondval = arr[n-i-1];
        arr [i] = secondval;
        arr [n-i-1] = firstval;
        return 0;
        
    }
}