#include "libasm.h"
/*
void	print_equal_compare(char *expected, char *real)
{
	printf("%s   %d == %d\n", strcmp(expected, real) == ft_strcmp(expected, real)  ? _GREEN : _RED, strcmp(expected, real), ft_strcmp(expected, real));
}

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
	
	s1 = "holaholahola";
	s2 = "holaholaholah";
	print_equal_compare(s1, s2);
	
	s1 = "lahola";
	s2 = "lahola ";
	print_equal_compare(s1, s2);

//	s1 = "";
//	s2 = NULL;
//	print_equal_compare(s1, s2);
}
*/
void    test_ft_strcmp()
{
	char	*s1;
	char	*s2;

		s1 = "hola";
		s2 = "hola";
		printf("'%s' : '%s' = %d (%d)\n", s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
		s1 = "hol";
		s2 = "hola";
		printf("'%s' : '%s' = %d (%d)\n", s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
		s1 = "hola";
		s2 = "hol";
		printf("'%s' : '%s' = %d (%d)\n", s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
		s1 = "hola";
		s2 = "holb";
		printf("'%s' : '%s' = %d (%d)\n", s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
		s1 = "";
		s2 = "holb";
		printf("'%s' : '%s' = %d (%d)\n", s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
		s1 = "";
		s2 = "hola";
		printf("'%s' : '%s' = %d (%d)\n", s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
		s1 = "hola";
		s2 = "";
		printf("'%s' : '%s' = %d (%d)\n", s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
		s1 = "";
		s2 = "";
		printf("'%s' : '%s' = %d (%d)\n", s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
		s1 = "\x01";
		s2 = "\x01\x02";
		printf("'%s' : '%s' = %d (%d)\n", s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
		// s2 = NULL;
		// printf("'%s' : '%s' = %d (%d)\n", s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
}
