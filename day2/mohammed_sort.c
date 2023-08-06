/*
    Program 4 . Write a program to sort the numbers in the array using bubble sort and selection sort.
    Bubble() sort() use display() function to print the array values .User switch case to ask the type of sorting 

*/

#include <stdio.h>

void display(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int numbers[] = { 64, 34, 25, 12, 22, 11, 90 };
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int choice;

    printf("Array before sorting:\n");
    display(numbers, size);

    printf("Choose the sorting method:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            bubbleSort(numbers, size);
            printf("Array after Bubble Sort:\n");
            display(numbers, size);
            break;
        case 2:
            selectionSort(numbers, size);
            printf("Array after Selection Sort:\n");
            display(numbers, size);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
