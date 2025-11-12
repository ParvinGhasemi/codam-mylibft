// #include <stdio.h>
// #include <limits.h>
// #include "ft_printf.h"

// // a lot of wrong tests among the tests! needs cleanup !

// int main(void)
// {
//     int r_ft, r_og;
//     void *ptr = (void *)0xabcdef;
//     void *null_ptr = NULL;

//     printf("********** BASIC TESTS **********\n");

//     r_ft = ft_printf("ft: Char: %c\n", 'A');
//     r_og = printf ("og: Char: %c\n\n", 'A');
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: String: %s\n", "Hello Codam");
//     r_og = printf ("og: String: %s\n\n", "Hello Codam");
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: NULL String: %s\n", (char *)NULL);
//     r_og = printf ("og: NULL String: %s\n\n", (char *)NULL);
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: Pointer valid: %p\n", ptr);
//     r_og = printf ("og: Pointer valid: %p\n\n", ptr);
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: Pointer NULL: %p\n", null_ptr);
//     r_og = printf ("og: Pointer NULL: %p\n\n", null_ptr);
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     printf("********** NUMERIC TESTS **********\n");

//     r_ft = ft_printf("ft: INT MIN: %d\n", INT_MIN);
//     r_og = printf ("og: INT MIN: %d\n\n", INT_MIN);
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: INT MAX: %d\n", INT_MAX);
//     r_og = printf ("og: INT MAX: %d\n\n", INT_MAX);
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: UINT MAX: %u\n", UINT_MAX);
//     r_og = printf ("og: UINT MAX: %u\n\n", UINT_MAX);
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: Negative: %d\n", -12345);
//     r_og = printf ("og: Negative: %d\n\n", -12345);
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     printf("********** HEX TESTS **********\n");

//     r_ft = ft_printf("ft: Hex lower: %x\n", 0xdeadbeef);
//     r_og = printf ("og: Hex lower: %x\n\n", 0xdeadbeef);
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: Hex upper: %X\n", 0xdeadbeef);
//     r_og = printf ("og: Hex upper: %X\n\n", 0xdeadbeef);
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     printf("********** PERCENT HELL **********\n");

//     r_ft = ft_printf("ft: %%\n");
//     r_og = printf ("og: %%\n\n");
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: \"% %\"\n");
//     r_og = printf ("og: \"% %\"\n\n");
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: \"%%%%%%\"\n");
//     r_og = printf ("og: \"%%%%%%\"\n\n");
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: \"%%%%%abcd\"\n");
//     r_og = printf ("og: \"%%%%%abcd\"\n\n");
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: \"%%%%%%abcd\"\n");
//     r_og = printf ("og: \"%%%%%%abcd\"\n\n");
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: \"%% nvm%%%CODAM\"\n");
//     r_og = printf ("og: \"%% nvm%%%CODAM\"\n\n");
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: \"%%\\n\\n\\n\"\n");
//     r_og = printf ("og: \"%%\\n\\n\\n\"\n\n");
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: \"%%\\n\\n\"\n");
//     r_og = printf ("og: \"%%\\n\\n\"\n\n");
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     printf("********** SPECIAL VALUES **********\n");

//     r_ft = ft_printf("ft: Empty string: \"%s\"\n", "");
//     r_og = printf ("og: Empty string: \"%s\"\n\n", "");
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     r_ft = ft_printf("ft: Zero pointer: %p\n", 0);
//     r_og = printf ("og: Zero pointer: %p\n\n", 0);
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     printf("********** MIX EVERYTHING **********\n");

//     r_ft = ft_printf("ft: %d %u %x %X %s %c %p %%\n",
//         -42, 42, 42, 42, "yo", 'Z', &ptr);
//     r_og = printf ("og: %d %u %x %X %s %c %p %%\n\n",
//         -42, 42, 42, 42, "yo", 'Z', &ptr);
//     printf("RET ft=%d, og=%d\n\n", r_ft, r_og);

//     return 0;
// }

// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("min_unsigned:	%u\n", 0);
// 	printf("min_unsigned:	%x\n\n", 0);

// 	printf("max_unsigned:	%u\n", UINT_MAX);
// 	printf("max_unsigned:	%x\n\n", UINT_MAX);

// 	printf("min_int:	%i\n", INT_MIN);
// 	printf("min_int:	%x\n\n", INT_MAX);

// 	printf("max_int:	%u\n", INT_MAX);
// 	printf("max_int:	%x\n\n", INT_MAX);

// 	return (0);
// }