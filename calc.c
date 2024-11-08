#include <stdio.h>

int main(void) {
    int a, b;
    float result; // change result to float to handle division results properly
    char sign, opt;

    while (1) {
        printf("Enter the expression (e.g., 5+3): ");
        scanf("%d %c %d", &a, &sign, &b); // add space before %c to handle whitespace

        switch (sign) {
            case '+':
                result = a + b;
                break;
            case '*':
                result = a * b;
                break;
            case '-':
                result = a - b;
                break;
            case '/':
                if (b != 0) { // check for division by zero
                    result = (float)a / b;
                } else {
                    printf("Error: Division by zero.\n");
                    continue;
                }
                break;
            default:
                printf("Invalid operator. Please try again.\n");
                continue;
        }

        printf("Result: %.2f\n", result); // print result with two decimal places for clarity

        printf("Enter 'x' to close or any other key to continue: ");
        scanf(" %c", &opt); // add space before %c to consume newline character
        if (opt == 'x') {
            break;
        }
    }

    return 0;
}
