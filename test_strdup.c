#include "libasm.h"


void	test_ft_strdup()
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	int		a;
	int		b;
	
	s1 = "hola";
	s2 = strdup(s1);
	a = strcmp(s1, s2);
	printf("   strdup: %d\n", a);
	printf("|%s| == |%s|\n", s1, s2);
	free(s2);
	s3 = "hola";
	s4 = ft_strdup(s3);
	b = strcmp(s3, s4);
	printf("   strdup: %d\n", b);
	printf("|%s| == |%s|\n", s3, s4);
	free(s4);
}
