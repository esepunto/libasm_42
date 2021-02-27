#include "libasm.h"

static void	print_equal_string(char *src, char *copy)
{
	printf("%sdst: |%s|\nsrc: |%s|\n\n\n", strcmp(src, copy) == 0 ? _GREEN : _RED, copy, src);
	printf("%s", _R);
}

void		test_ft_strcpy()
{
	char	dst[255];
	char	*src;

	print_title("strcpy vs. ft_strcpy");
	printf("%s", _R);
	
	src = "hola k ase";
	printf("dst: |%s|\nsrc: |%s|\n%s... aplicando ft_strcpy... ...\n", dst, src, _YELLOW);
	ft_strcpy(dst, src);
	print_equal_string(dst, src);

	src = "";
	printf("dst: |%s|\nsrc: |%s|\n%s... aplicando ft_strcpy... ...\n", dst, src, _YELLOW);
	ft_strcpy(dst, src);
	print_equal_string(dst, src);

	src = "0123456789abcedef kjjhljkhjkl hlkjhljkhljk hlkjhljkhljk ljkhljkhlkj kjlhlkjhljk hljkhlkjhkljh ljkh ljkhlkjh lkjhlkjhlkj lkjh lkjhlkjh ljkh lkjh";
	printf("dst: |%s|\nsrc: |%s|\n%s... aplicando ft_strcpy... ...\n", dst, src, _YELLOW);
	ft_strcpy(dst, src);
	print_equal_string(dst, src);
	
	src = "Emosido engañado";
	printf("dst: |%s|\nsrc: |%s|\n%s... aplicando ft_strcpy... ...\n", dst, src, _YELLOW);
	ft_strcpy(dst, src);
	print_equal_string(dst, src);
}

