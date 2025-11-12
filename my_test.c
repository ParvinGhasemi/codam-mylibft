#include <limits.h>
#include <stdio.h>


int	main(void)
{
	char *str = "hi";
	printf("min_unsigned:	%u\n", 0);
	printf("min_unsigned:	%x\n\n", 0);

	printf("max_unsigned:	%u\n", UINT_MAX);
	printf("max_unsigned:	%x\n\n", UINT_MAX);

	printf("min_int:	%i\n", INT_MIN);
	printf("min_int:	%x\n\n", INT_MAX);

	printf("max_int:	%u\n", INT_MAX);
	printf("max_int:	%x\n\n", INT_MAX);

	// the address i got on a 64 format which exceeds unsigned int: 0x10053C578 = 4,300,457,336
	printf("str address: %p\n", str); 

	return (0);
}


