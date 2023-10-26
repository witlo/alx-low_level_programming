#include <stdlib.h>
#include <stdio.h>

void *alloc_zeroes(unsigned int n, unsigned int size);
int check_digits(char *s);
void print_str(char *s);
void reverse_str(int start, int end, char *ns);
int length_str(char *s);
char *multiply_str(char *a, char *b);

/**
 * alloc_zeroes - allocate and zero (`size' * `n') bytes
 * @n: quantity of elements
 * @size: bytes per element
 *
 * Return: pointer to memory, or NULL if `n' or `size' is 0 or if malloc fails
 */
void *alloc_zeroes(unsigned int n, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (size == 0 || n == 0)
		return (NULL);
	ptr = malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n * size; ++i)
		ptr[i] = 0;
	return (ptr);
}

/**
 * check_digits - validate if string `s' is all digits
 * @s: target string
 *
 * Return: 1 if true, 0 if false
 */
int check_digits(char *s)
{
	if (*s == '-' || *s == '+')
		++s;
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		++s;
	}
	return (1);
}

/**
 * print_str - output string `s'
 * @s: target string
 */
void print_str(char *s)
{
	while (*s)
		putchar(*(s++));
}

/**
 * reverse_str - reverse a numeric string without trailing zeroes
 * @start: index to begin reversal
 * @end: index to end reversal
 * @ns: numeric string
 */
void reverse_str(int start, int end, char *ns)
{
	int i, j;
	char tmp;

	while (ns[end] == 0 && end != start)
		--end;
	for (i = start, j = end; i <= j; ++i, --j)
	{
		tmp = ns[i] + '0';
		ns[i] = ns[j] + '0';
		ns[j] = tmp;
	}
}

/**
 * length_str - calculate length of string `s'
 * @s: target string
 *
 * Return: length of string
 */
int length_str(char *s)
{
	int i;

	for (i = 0; s[i]; ++i)
		;
	return (i);
}

/**
 * multiply_str - multiply two numeric strings
 * @a: first number
 * @b: second number
 *
 * Return: pointer to result on success, or NULL on failure
 */
char *multiply_str(char *a, char *b)
{
	int la, lb, i, j, k, l, neg = 0;
	char *result;
	char mul, mul_carry, sum, sum_carry;

	if (*a == '-')
	{
		neg ^= 1;
		++a;
	}
	if (*b == '-')
	{
		neg ^= 1;
		++b;
	}
	la = length_str(a);
	lb = length_str(b);
	result = alloc_zeroes(la + lb + 1 + neg, sizeof(char));
	if (result == NULL)
		return (NULL);
	if (neg)
		result[0] = '-';
	for (i = lb - 1, l = neg; i >= 0; --i, ++l)
	{
		mul_carry = 0;
		sum_carry = 0;
		for (j = la - 1, k = l; j >= 0; --j, ++k)
		{
			mul = (a[j] - '0') * (b[i] - '0') + mul_carry;
			mul_carry = mul / 10;
			mul %= 10;
			sum = result[k] + mul + sum_carry;
			sum_carry = sum / 10;
			sum %= 10;
			result[k] = sum;
		}
		result[k] = sum_carry + mul_carry;
	}
	reverse_str(neg, k, result);
	return (result);
}

/**
 * main - multiply two command line numbers and output result
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0 if success, 98 if error
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3)
	{
		print_str("Error\n");
		exit(98);
	}
	if (!check_digits(argv[1]) || !check_digits(argv[2]))
	{
		print_str("Error\n");
		exit(98);
	}
	result = multiply_str(argv[1], argv[2]);
	if (result == NULL)
	{
		print_str("Error\n");
		exit(98);
	}
	print_str(result);
	putchar('\n');
	free(result);
	exit(EXIT_SUCCESS);
}
