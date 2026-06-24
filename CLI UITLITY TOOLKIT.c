#include <stdio.h>

// Function declarations
void sum(int a, int b);
void max(int a, int b);
void min(int a, int b);
void checkEvenOdd(int n);
unsigned long long factorial(int n);

int main() {
    printf("------------CLI UTILITY TOOLKIT------------\n");
    int choice;
    do {
        printf("\n1. Sum of two numbers");
        printf("\n2. Max of two numbers");
        printf("\n3. Min of two numbers");
        printf("\n4. Check if a number is even or odd");
        printf("\n5. Factorial of a number");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        int a, b, n;
        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                sum(a, b);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                max(a, b);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                min(a, b);
                break;
            case 4:
                printf("Enter a number: ");
                scanf("%d", &n);
                checkEvenOdd(n);
                break;
            case 5:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Factorial of %d is: %llu\n", n, factorial(n));
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);
    return 0;
}

// Function implementations
void sum(int a, int b) {
    printf("Sum of %d and %d is: %d\n", a, b, a + b);
}

void max(int a, int b) {
    printf("Max of %d and %d is: %d\n", a, b, (a > b) ? a : b);
}

void min(int a, int b) {
    printf("Min of %d and %d is: %d\n", a, b, (a < b) ? a : b);
}

void checkEvenOdd(int n) {
    if (n % 2 == 0) {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }
}

unsigned long long factorial(int n) {
    if (n < 0) {
        printf("Factorial not defined for negative numbers\n");
        return 0ULL;
    }
    if (n == 0 || n == 1) {
        return 1ULL;
    }
    unsigned long long result = 1ULL;
    for (int i = 2; i <= n; ++i) {
        result *= (unsigned long long)i;
    }
    return result;
}