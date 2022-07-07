#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error,-1 is returned, and error is set appriopriately.
 */

int _putchar(char c);

/**
 * print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - print lowercase ten times
 */

void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);

int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);

#endif
