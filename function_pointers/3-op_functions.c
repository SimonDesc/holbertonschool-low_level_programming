#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * op_add - Makes the sum of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Makes the diff of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Makes the multiplication of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Makes the division of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Makes the modulo of two numbers
 * @a: First operand
 * @b: Second operand
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
