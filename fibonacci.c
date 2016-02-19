/**
 * @author Spencer Melnick
 * E-Mail: spencer.melnick@temple.edu
 * February 19, 2016
 *
 * A basic implementation of a recursive Fibonacci number generator in C
 *
 * NOTE: limited to the 33rd Fibonacci number due to unsigned integer max
 * To get later numbers in the series, use unsigned long (or unsigned long
 * long in C99 or later)
 */

#include <stdio.h>

unsigned int fib(unsigned int n); //returns the nth number in the Fibonacci sequence
unsigned int fib_recursive(unsigned int, unsigned int, unsigned int);

unsigned int fib(unsigned int n)
{
    return ((n == 0) ? 0 : fib_recursive(1, 1, n));
}

unsigned int fib_recursive(unsigned int num1, unsigned int num2, unsigned int n)
{
    return ((n < 3) ? num2 : fib_recursive(num2, num1 + num2, --n));
}

int main()
{
    printf("%u\n", fib(33));
    return 0;
}
