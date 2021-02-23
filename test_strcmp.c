#include "libasm.h"

void	test_ft_strcmp()
{
	char	*s1;
	char	*s2;
	
	print_title("strcmp vs. ft_strcmp");
	printf("%s", _YELLOW);
	
	s1 = "hola";
	s2 = "ornitorrinco";
	print_equal_compare(s1, s2);
	
	s1 = "jaimito va a claseAAAAAAA";
	s2 = "jaimito va a clase";
//	printf("oficial: %d - mia: %d\n", strcmp(s1,s2), ft_strcmp(s1,s2));
	print_equal_compare(s1, s2);
	
	s1 = "holA K ASE Y KOMO TAS TU, WEI holA K ASE Y KOMO TAS TU, WEI";
	s2 = "holA K ASE Y KOMO TAS TU, WEI holA K ASE Y KOMO TAS TU, WEI";
	print_equal_compare(s1, s2);

	s1 = "";
	s2 = "holA";
	print_equal_compare(s1, s2);

/*	s1 = "";
	s2 = NULL;
	print_equal_compare(s1, s2);
*/
}
