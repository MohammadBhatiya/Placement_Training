/*
    Program2 .Write a program using function to find the root of quadratic Equation 
*/
#include<stdio.h>
#include<math.h>

void findRoots(float a, float b, float c) {
    float discriminant, root1, root2;

    // Calculate discriminant
    discriminant = b*b - 4*a*c;

    
    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } 
    else if (discriminant == 0) {
        // Real and equal roots
        root1 = -b / (2*a);

        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } 
    else {
        // Complex roots
        float realPart = -b / (2*a);
        float imaginaryPart = sqrt(-discriminant) / (2*a);

        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main(){
    float a,b,c;
    printf("\nEnter the values for (a*x^2 + b*x + c):\n");
    printf("\nEnter the values of coefficient of a,b,c\n");
    scanf("%f %f %f",&a,&b,&c);
    
    findRoots(a,b,c);
}