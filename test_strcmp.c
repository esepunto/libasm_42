#include "libasm.h"

void	print_equal_compare(char *s1, char *s2)
{
	printf("%s%s\n  %svs\n%s%s\n", _R, s1, _YELLOW, _R, s2);
	printf("%s   strcmp == %d\nft_strcmp == %d\n\n", strcmp(s1, s2) == ft_strcmp(s1, s2)  ? _GREEN : _RED, strcmp(s1, s2), ft_strcmp(s1, s2));
}

void	test_ft_strcmp()
{
	char	*s1;
	char	*s2;
	
	print_title("strcmp vs. ft_strcmp");
	printf("%s", _YELLOW);
	
	s1 = "hola";
	s2 = "hola";
	print_equal_compare(s1, s2);
	
	s1 = "hola";
	s2 = "hol";
	print_equal_compare(s1, s2);

	s1 = "hol";
	s2 = "hola";
	print_equal_compare(s1, s2);

	s1 = "hola";
	s2 = "holb";
	print_equal_compare(s1, s2);

	s1 = "holA K ASE Y KOMO TAS TU, WEI holA K ASE Y KOMO TAS TU, WEI";
	s2 = "holA K ASE Y KOMO TAS TU, WEI holA K ASE Y KOMO TAS TU, WEI";
	print_equal_compare(s1, s2);

	s1 = "";
	s2 = "0";
	print_equal_compare(s1, s2);

	s1 = "0";
	s2 = "";
	print_equal_compare(s1, s2);
	
//	s1 = "";
//	s2 = NULL;
//	print_equal_compare(s1, s2);
}
