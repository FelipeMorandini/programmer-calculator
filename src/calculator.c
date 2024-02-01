#include "calculator.h"
#include <math.h>
#include <string.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return b ? a / b : 0; }

int bitwiseAND(int a, int b) { return a & b; }
int bitwiseOR(int a, int b) { return a | b; }
int bitwiseXOR(int a, int b) { return a ^ b; }
int bitwiseNOT(int a) { return ~a; }

int binaryToDecimal(long long n) {
    int decimal = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }
    return decimal;
}

long long decimalToBinary(int n) {
    long long binary = 0;
    int remainder, i = 1;
    while (n != 0) {
        remainder = n % 2;
        n /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}

int hexadecimalToDecimal(char hex[]) {
    int len = strlen(hex);
    int base = 1, decimal = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
    }
    return decimal;
}

void decimalToHexadecimal(int n, char hex[]) {
    sprintf(hex, "%X", n);
}