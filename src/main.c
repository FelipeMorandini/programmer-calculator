#include "calculator.h"

int main() {
    int choice, a, b, result;
    long long binary;
    char hex[20];

    while (1) {
        printf("\nProgrammer Calculator\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
        printf("5. Bitwise AND\n6. Bitwise OR\n7. Bitwise XOR\n8. Bitwise NOT\n");
        printf("9. Binary to Decimal\n10. Decimal to Binary\n");
        printf("11. Hexadecimal to Decimal\n12. Decimal to Hexadecimal\n");
        printf("13. Exit\nSelect an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", add(a, b));
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", subtract(a, b));
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", multiply(a, b));
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                if (b == 0) {
                    printf("Error! Division by zero.\n");
                } else {
                    printf("Result: %d\n", divide(a, b));
                }
                break;
            case 5:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", bitwiseAND(a, b));
                break;
            case 6:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", bitwiseOR(a, b));
                break;
            case 7:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", bitwiseXOR(a, b));
                break;
            case 8:
                printf("Enter a number: ");
                scanf("%d", &a);
                printf("Result: %d\n", bitwiseNOT(a));
                break;
            case 9:
                printf("Enter a binary number: ");
                scanf("%lld", &binary);
                printf("Decimal: %d\n", binaryToDecimal(binary));
                break;
            case 10:
                printf("Enter a decimal number: ");
                scanf("%d", &a);
                printf("Binary: %lld\n", decimalToBinary(a));
                break;
            case 11:
                printf("Enter a hexadecimal number: ");
                scanf("%s", hex);
                printf("Decimal: %d\n", hexadecimalToDecimal(hex));
                break;
            case 12:
                printf("Enter a decimal number: ");
                scanf("%d", &a);
                decimalToHexadecimal(a, hex);
                printf("Hexadecimal: %s\n", hex);
                break;
            case 13:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}
