#include <stdio.h>
int main()
{
    // int n, r, sum = 0, temp;
    // printf("enter the number=");
    // scanf("%d", &n);
    // temp = n;
    // while (n > 0)
    // {
    //     r = n % 10;
    //     sum = sum + (r * r * r);
    //     n = n / 10;
    // }
    // if (temp == sum)
    //     printf("armstrong  number ");
    // else
    //     printf("not armstrong number");


    int arr[5];
    printf("\nEnter the number in the array\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    // printf("\nNumber in the array are:\n");
    // for(int i = 1; i <= 5; i++){
    //     printf("%d\n",arr[i]);
    // }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++) { 
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    printf("\nNumber in the Sorted array are:\n");
    for(int i = 0; i < 5; i++){
        printf("%d\n",arr[i]);
    }

    




    return 0;
}