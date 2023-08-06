#include<stdio.h>
#include<string.h>

struct customer{
    float amount;
    int acc_num;
    char *name;
};

int main(){

    struct customer cust[10];
    cust[0].acc_num = 101;
    cust[0].amount = 10000;
    char s[10];
    printf("Enter string:\n");
    scanf("%s",cust[0].name);
    // strcpy(cust[0].name, s);
    printf("%d\n",cust[0].acc_num);
    printf("%f\n",cust[0].amount);
    printf("%s",cust[0].name);



    // int a = 10;
    // int *p;
    // p = &a;
    
    // printf("%d\n",a);
    // printf("%d\n",p);
    // printf("%d\n",&a);
    // printf("%d\n",*p);
    // printf("%d\n",&p);
    // printf("%d\n",*(&a));
    
    // a++;
    // printf("\nAfter increment\n");
    // printf("%d\n",a);
    // printf("%d\n",p);
    // printf("%d\n",&a);
    // printf("%d\n",*p);
    // printf("%d\n",&p);
    // printf("%d\n",*(&a));

    // int n;
    // printf("Enter number of elements in array:\n");
    // scanf("%d",&n);

    // int arr[n];
    // for(int i=0;i<n;i++){
    //     printf("Enter the value %d \n",i);
    //     scanf("%d",&arr[i]);
    // }

    // for(int i=0;i<n;i++){
    //     printf("The value is %d \n",arr[i]);
    // }
}