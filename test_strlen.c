#include "libasm.h"

static void		print_equal_size_t(size_t expected, size_t real)
{
	printf("%s   %zu == %zu\n", expected == real ? _GREEN : _RED, expected, real);
}

void			test_ft_strlen()
{
	char	*str;
	print_title("strlen vs. ft_strlen");
	printf("%s", _YELLOW);
	
	str = "";
	print_equal_size_t(strlen(str), ft_strlen(str));
	str = "34\0";
	print_equal_size_t(strlen(str), ft_strlen(str));
	str  ="12387 08970987";
	print_equal_size_t(strlen(str), ft_strlen(str));
}
