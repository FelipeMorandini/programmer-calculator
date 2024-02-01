#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int bitwiseAND(int a, int b);
int bitwiseOR(int a, int b);
int bitwiseXOR(int a, int b);
int bitwiseNOT(int a);

int binaryToDecimal(long long n);
long long decimalToBinary(int n);
int hexadecimalToDecimal(char hex[]);
void decimalToHexadecimal(int n, char hex[]);

#endif