#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
        return 1;
    }

    // Convert the arguments to numbers
    double num1 = atof(argv[1]);
    double num2 = atof(argv[3]);
    char operator = argv[2][0];
    double result;

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Unknown operator '%c'. Use +, -, *, or /.\n", operator);
            return 1;
    }

    // Display the result
    printf("Result: %.2f\n", result);
    return 0;
}
