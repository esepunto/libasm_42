#include "libasm.h"


void	test_ft_strdup()
{
	char	*s1;
	char	*s2;
	char	*s3;
	int		a;
	int		b;
	
	s1 = "hola";
	s2 = strdup(s1);
	s3 = ft_strdup(s1);
	a = strcmp(s1, s2);
	b = strcmp(s1, s3);
	printf("   strdup: %d\n", a);
	printf("ft_strdup: %d\n", b);
}
