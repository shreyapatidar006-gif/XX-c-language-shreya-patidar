#include <stdio.h>

int main() {
    double num1, num2, sum;

    // Prompt user for input
    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1; // Exit with error
    }

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1; // Exit with error
    }

    // Calculate sum
    sum = num1 + num2;

    // Display result
    printf("Sum of %.2lf and %.2lf is: %.2lf\n", num1, num2, sum);

    return 0; // Successful execution
}
