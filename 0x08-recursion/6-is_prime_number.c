/**
 * is_prime_recursive - recursively checks if a number is prime
 * @n: the number to check
 * @i: the current divisor being checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_recursive(int n, int i)
{
	/* base cases */
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	/* recursive case */
	return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime using recursion
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
