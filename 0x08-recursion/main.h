#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);
int _sqrt_helper(int n, int min, int max);
int is_prime_helper(int n, int i);
int palindrome_helper(char *s, int start, int end);
int str_len(char *s);

#endif /* MAIN_H */
