/**
 * factorial - function to return n!
 * @n: required input (must be an int)
 * Return: 1 indicates a success and -1 indicates an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
