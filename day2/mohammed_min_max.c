/*
    Program 5 . Write  a program to find the maximum  and minimum of 10 different numbers of an array  Function name should be Min_Max()
*/
#include<stdio.h>

void min_max(int arr[],int size,int *min,int *max){
    *min = arr[0];
    *max = arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]<*min){
            *min = arr[i];
        }
        else if(arr[i]>*max){
            *max = arr[i];
        }
    }

}

int main(){
    int arr[10];
    int min,max;

    printf("Enter 10 different numbers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter Number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    min_max(arr, 10, &min, &max);

    printf("Minimum number: %d\n", min);
    printf("Maximum number: %d\n", max);
}