#include <stdarg.h>
#include <stdio.h>

int	sum(int count, ...)
{
	va_list	args;
	int		total;
	int		i;

	total = 0;
	va_start(args, count);
	i = 0;
	while (i < count)
	{
		total += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (total);
}

int	main(void)
{
	printf("%d\n", sum(4, 2, 4, 6, 8)); // prints 20
}