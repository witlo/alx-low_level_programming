#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - Returns sum of @num1 and @num2
*
* @num1: First integer
* @num2: Second integer
*
* Return: Addition of @num1 and @num2
*/

int op_add(int num1, int num2)
{
	return (num1 + num2);
}

/**
* op_sub - Returns difference between @num1 and @num2
*
* @num1: First integer
* @num2: Second integer
*
* Return: Subtraction of @num1 from @num2
*/

int op_sub(int num1, int num2)
{
	return (num1 - num2);
}

/**
* op_mul - Returns product of @num1 and @num2
*
* @num1: First integer
* @num2: Second integer
*
* Return: Multiplication of @num1 and @num2
*/

int op_mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
* op_div - Returns quotient of @num1 divided by @num2
*
* @num1: Numerator
* @num2: Denominator
*
* Return: Division result of @num1 by @num2
*/

int op_div(int num1, int num2)
{
	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (num1 / num2);
}

/**
* op_mod - Returns remainder of @num1 divided by @num2
*
* @num1: Numerator
* @num2: Denominator
*
* Return: Remainder of @num1 divided by @num2
*/

int op_mod(int num1, int num2)
{
	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (num1 % num2);
}
