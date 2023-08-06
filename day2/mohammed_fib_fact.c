/*
    Program3. Write a program to use function to create factorial of a number Fibonacci series
    Fibonacci () and Factorial() will be two functions used .
    Ensure that user will be asked in a  menu what to perform using switch case

*/

#include <stdio.h>

void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("\nfactorial of %d is %d\n", n, fact);
}

void fibonacci(int number)
{
    int n3 = 0, n1 = 0, n2 = 1;
    printf("\n%d %d", n1, n2);   
    for (int i = 2; i < number; ++i) {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
}

int main()
{
    int choice=0, n1, n2;
    while (choice <= 2)
    {
        printf("\nMenu:\n");
        printf("\n1) Factorial of Number\n");
        printf("\n2) Fibonacci series for Number\n");
        printf("\n3) Exit\n");
        printf("\nEnter Your choice: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to find factorial:\n");
            scanf("%d", &n1);
            factorial(n1);
            break;
        case 2:
            printf("Enter the number to find fibonacci series:\n");
            scanf("%d", &n2);
            fibonacci(n2);
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}