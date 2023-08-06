/*
Program 1. Write a program using the function to perform the following operation 
Area of Circle 
Area of   Rectangle 
Area of Triangle 
Circumference of Circle

*/
#include<stdio.h>
#define PI 3.14159

float areaCircle(float r){
    float area = PI * r * r;
    return area;
}

float areaRectangle(float l,float w){
    float area = l * w;
    return area;
}

float areaTriangle(float b,float h){
    float area = (0.5 * b * h);
    return area;
}

float circumferenceCircle(float r){
    float circum = 2*PI*r;
    return circum;
}

int main(){
    float radius, length, width, base, height;
    // Circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float circle_area = areaCircle(radius);
    printf("Area of the circle: %.2f\n", circle_area);

    // Rectangle
    printf("Enter the length of the Rectangle: ");
    scanf("%f", &length);
    printf("Enter the Width of the Rectangle: ");
    scanf("%f", &width);
    float rectangle_area = areaRectangle(length,width);
    printf("Area of the Rectangle: %.2f\n", rectangle_area);

    // Triangle
    printf("Enter the base of the Triangle: ");
    scanf("%f", &base);
    printf("Enter the Height of the Triangle: ");
    scanf("%f", &height);
    float triangle_area = areaTriangle(base,height);
    printf("Area of the Triangle: %.2f\n", triangle_area);

    // Circumference of circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float circumference_area = circumferenceCircle(radius);
    printf("Circumference of the circle: %.2f\n", circumference_area);
}