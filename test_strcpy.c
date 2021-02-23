#include "libasm.h"

void	print_equal_string(char *src, char *copy)
{
	printf("%sdst: |%s| -- src: |%s|\n\n\n", strcmp(src, copy) == 0 ? _GREEN : _RED, copy, src);
	printf("%s", _R);
}

void	test_ft_strcpy()
{
	char	*src;
	char	dst[64];

	print_title("strcpy vs. ft_strcpy");
	printf("%s", _R);
	
	src = "hola k ase";
	printf("dst: |%s| -- src |%s|\n%s... aplicando ft_strcpy... ...\n", dst, src, _YELLOW);
	ft_strcpy(dst, src);
	print_equal_string(dst, src);

	src = "";
	printf("dst: |%s| -- src |%s|\n%s... aplicando ft_strcpy... ...\n", dst, src, _YELLOW);
	ft_strcpy(dst, src);
	print_equal_string(dst, src);

	
	src = "0123456789abcedef kjjhljkhjkl hlkjhljkhljk hlkjhljkhljk ljkhljkhlkj kjlhlkjhljk hljkhlkjhkljh ljkh ljkhlkjh lkjhlkjhlkj lkjh lkjhlkjh ljkh lkjh ";
	printf("dst: |%s| -- src |%s|\n%s... aplicando ft_strcpy... ...\n", dst, src, _YELLOW);
	ft_strcpy(dst, src);
	print_equal_string(dst, src);

	
//	src = NULL;
//	temp = src;
//	ft_strcpy(dst3, src);
//	print_equal_string(temp, dst3);
}
/*

void	test_ft_strcpy()
{
	char	dest[64];
	char	*src;

	src = "hola";
	printf("src = '%s'; dest = '%s' ('%s')\n", src, ft_strcpy(dest, src), strcpy(dest, src));
	src = "";
	printf("src = '%s'; dest = '%s' ('%s')\n", src, ft_strcpy(dest, src), strcpy(dest, src));
	src = "0123456789abcedef";
	printf("src = '%s'; dest = '%s' ('%s')\n", src, ft_strcpy(dest, src), strcpy(dest, src));
	// src = NULL;
	// printf("src: '%s'; dest: '%s' ('%s')\n", src, ft_strcpy(dest, src), ft_strcpy(dest, src));
	}

*/
