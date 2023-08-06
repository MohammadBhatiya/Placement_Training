#include <stdio.h>

void addition()  
{  
    int i, n1,n2, res;    
    printf (" \nEnter first number : ");  
    scanf ("  %d", &n1);  
    printf (" \nEnter second number : ");  
    scanf ("  %d", &n2);  
    res = n1 + n2;    
    printf (" \nTotal Sum of the numbers = %d", res); 
}  
  

void subtract()  
{  
    int n1, n2, res;  
    printf (" \nEnter first number : ");  
    scanf ("  %d", &n1);  
    printf (" \nEnter second number : ");  
    scanf ("  %d", &n2);  
    res = n1 - n2;    
    printf (" \nThe subtraction of %d - %d is: %d", n1, n2, res);  
}  
  

void multiply()  
{  
    int n1, n2, res;  
    printf (" \nEnter first number : ");  
    scanf ("  %d", &n1);  
    printf (" \nEnter second number : ");  
    scanf ("  %d", &n2);  
    res = n1 * n2;    
    printf (" \nThe multiply of %d * %d is: %d", n1, n2, res);  
}  
  

void divide()  
{  
    int n1, n2, res;  
    printf (" \nEnter first number : ");  
    scanf ("  %d", &n1);  
    printf (" \nEnter second number : ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    res = n1 / n2;    
    printf (" \n The division of %d / %d is: %d", n1, n2, res);  
}  


int main()
{   
    // maximum of two numbers
    int num1, num2;
    printf("\nEnter first number : ");
    scanf("%d", &num1);
    printf("\nEnter second number : ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("\nMaximum number is %d\n", num1);
    }
    else
    {
        printf("\nMaximum number is %d\n", num2);
    }


    // finding maximum of three numbers
    int n1, n2, n3;
    printf("\nEnter first number : ");
    scanf("%d", &n1);
    printf("\nEnter second number : ");
    scanf("%d", &n2);
    printf("\nEnter third number : ");
    scanf("%d", &n3);

    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("\nMaximum number is %d\n", n1);
        }
    }
    else if (n2 > n3)
    {
        if (n2 > n1)
        {
            printf("\nMaximum number is %d\n", n2);
        }
    }
    else
    {
        printf("\nMaximum number is %d\n", n3);
    }


    // Calculator using switch
    int choice = 0, s1, s2;
    printf("\n0 - for Addition\n");
    printf("\n1 - for substraction\n");
    printf("\n2 - for Multiplication\n");
    printf("\n3 - for Division\n");
    printf("\nEnter your choice to do the calculations:\n");
    scanf("%d", &choice);
    printf("\nEnter first number :  ");
    scanf("%d", &s1);
    printf("\nEnter second number : ");
    scanf("%d", &s2);

    switch (choice)
    {
    case 0:
        printf("\nAddition\n");
        printf("\nAddition of %d + %d = %d",s1,s2, (s1 + s2));
        break;

    case 1:
        printf("\nSubstraction\n");
        printf("\nSubstraction of %d - %d = %d",s1,s2, (s1 - s2));
        break;

    case 2:
        printf("\nMultiplication\n");
        printf("\nMultiplication of %d X %d = %d",s1,s2, (s1 * s2));
        break;

    case 3:
        printf("\nDivision\n");
        printf("\nDivision of %d / %d = %d",s1,s2, (s1 / s2));
        break;

    default:
        printf("\nInvalid Input choice!!!!!\n");
        break;
    }

    // calculator using functions
    int choice2;
    printf("\n0 - for Addition\n");
    printf("\n1 - for substraction\n");
    printf("\n2 - for Multiplication\n");
    printf("\n3 - for Division\n");
    printf("\nEnter your choice to do calculations using functions: \n");
    scanf("%d",&choice2);

    switch (choice2)
    {
    case 0:
        printf("\nAddition\n");
        addition();
        break;

    case 1:
        printf("\nSubstraction\n");
        subtract();
        break;

    case 2:
        printf("\nMultiplication\n");
        multiply();
        break;

    case 3:
        printf("\nDivision\n");
        divide();
        break;

    default:
        printf("\nInvalid Input choice!!!!!\n");
        break;
    }

    
    // prime number program
    int n, i, m = 0, flag = 0;
    printf("\nEnter the number to check prime:\n");
    scanf("%d", &n);
    m = n / 2;
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            printf("\nNumber is not prime\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0){
        printf("\nNumber is prime\n");
    }
    


    // print hello n times using for loop
    int n=1;
    printf("Enter a number");
    scanf("%d", &n);
    for(int i=1;i<=n;){
        printf("Hello!");
    }

    while(n<100){
        printf("Hello!");
    }

    do
    {
        printf("Hello!");
    } while (n<100);
 
    // print odd numbers till n
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);            
        }
    }

    // sum of n numbers
    int num,num2,sum=0;
    printf("Enter length of number:\n");
    scanf("%d", &num);
    
    for(int i=1;i<=num;i++){
        printf("\nEnter your %d number:",i);
        scanf("%d\n", &num2);
    }


    for (int i = 1; i <= num; i++)
    {
        sum+=num2;
    }
    printf("\nSum is %d",sum);


    // Finding Palindrome
    int n,ld,rev = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    int dup = n;
    while(n<0){
        ld  = n%10;
        rev = (rev *10) + ld;
        n /= 10;
    }
    if(n==rev){
        printf("\nNumber is palindrome\n");
    }
    else{
        printf("\nNumber is not a palindrome\n");
    }

    
    




    return 0;
}