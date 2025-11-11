#include <limits.h>
#include <stdio.h>


int	main(void)
{
	printf("min_unsigned:	%u\n", 0);
	printf("min_unsigned:	%x\n\n", 0);

	printf("max_unsigned:	%u\n", UINT_MAX);
	printf("max_unsigned:	%x\n\n", UINT_MAX);

	printf("min_int:	%i\n", INT_MIN);
	printf("min_int:	%x\n\n", INT_MAX);

	printf("max_int:	%u\n", INT_MAX);
	printf("max_int:	%x\n\n", INT_MAX);

	return (0);
}


