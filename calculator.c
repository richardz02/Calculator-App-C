#include <stdio.h>
#include <string.h>
#include <ctype.h>

int add(int x, int y) {
    return x + y; 
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    return x / y;
}

int main() {

    int num1;
    int num2;
    int opNum;
    char operation;
    char character;
    int result;

    // print introduction message
    printf("Welcome to the Basic Calculator!\n");

    do {
        // prompt user to choose operation
        printf("\nChoose an operation: \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter the number corresponding to the operation: ");
        scanf("%d", &opNum);

        getchar();

        printf("\nEnter the first number: ");
        scanf("%d", &num1);
        getchar();

        printf("\nEnter the second number: ");
        scanf("%d", &num2);
        getchar();

        switch (opNum) {
            case 1:
                result = add(num1, num2);
                operation = '+';
                break;
            case 2:
                result = subtract(num1, num2);
                operation = '-';
                break;
            case 3:
                result = multiply(num1, num2);
                operation = '*';
                break;
            case 4: 
                if (num2 != 0) {
                    result = divide(num1, num2);
                    operation = '/';
                } else {
                    printf("The divisor cannot be zero\n");
                    continue;
                }
                break;
            default:
                printf("Please enter a valid operation number\n");
                continue;
        }

        printf("\nResult: %d %c %d = %d", num1, operation, num2, result);

        printf("\nWould you like to perform another calculation? (Y/N): ");
        character = getchar();
    } while (toupper(character) != 'N');


    return 0;
}