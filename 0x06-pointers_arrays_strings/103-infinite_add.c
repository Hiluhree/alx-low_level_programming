#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char* infinite_add(char* n1, char* n2, char* r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int len = len1 > len2 ? len1 : len2; // get the maximum length
    int carry = 0;

    if (len + 1 > size_r) { // check if the result can fit in r
        return 0;
    }

    r[len+1] = '\0'; // set the null terminator

    for (int i = 0; i < len; i++) {
        int d1 = i < len1 ? n1[len1-1-i] - '0' : 0; // get the digit from n1 or 0 if out of bounds
        int d2 = i < len2 ? n2[len2-1-i] - '0' : 0; // get the digit from n2 or 0 if out of bounds
        int sum = d1 + d2 + carry;
        carry = sum / 10;
        r[len-i] = sum % 10 + '0'; // store the digit in r
    }

    if (carry > 0) { // if there's a carry left, add it to the most significant digit
    if (len + 2 > size_r) { // check if the result can fit in r
            return 0;
        }
        r[0] = carry + '0';
        return r;
    }

    return r+1; // skip the leading 0 (if any) and return the result
}
