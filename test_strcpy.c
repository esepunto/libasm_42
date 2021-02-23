#include "libasm.h"

void	test_ft_strcpy()
{
	char	*src;
	char	dst[64];
	char	dst1[64];
	char	dst2[64];
//	char	dst3[64];
	char	*temp;

	print_title("strcpy vs. ft_strcpy");
	printf("%s", _YELLOW);
	
	src = "hola k";
	temp = src;
	ft_strcpy(dst, src);
	print_equal_string(temp, dst);

	src = "";
	temp = src;
	ft_strcpy(dst1, src);
	print_equal_string(temp, dst1);
	
	src = "0123456789abcedef kjjhljkhjkl hlkjhljkhljk hlkjhljkhljk ljkhljkhlkj kjlhlkjhljk hljkhlkjhkljh ljkh ljkhlkjh lkjhlkjhlkj lkjh lkjhlkjh ljkh lkjh ";
	temp = src;
	ft_strcpy(dst2, src);
	print_equal_string(temp, dst2);
	
/*	src = NULL;
	temp = src;
	ft_strcpy(dst3, src);
	print_equal_string(temp, dst3);
*/
}
