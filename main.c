/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:21:33 by ssacrist          #+#    #+#             */
/*   Updated: 2021/02/18 09:19:45 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

// RESET list
#define _R          "\e[0m"

// https://misc.flogisoft.com/bash/tip_colors_and_formatting
#define _BOLD      "\e[1m"

// Colors
#define _RED      "\e[91m"
#define _GREEN    "\e[92m"
#define _YELLOW   "\e[93m"
#define _BLUE     "\e[94m"

void	print_title(char *s)
{
	static int n = 1;
	printf("\n%s%s%d/ %s :%s\n\n", _BLUE, _BOLD, n++, s, _R);
}

void	print_equal_size_t(size_t expected, size_t real)
{
	printf("%s   %zu == %zu\n", expected == real ? _GREEN : _RED, expected, real);
}

void	print_equal_string(char *expected, char *real)
{
	printf("%s   %s == %s\n", strcmp(expected, real) == 0 ? _GREEN : _RED, expected, real);
}

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

void	test_ft_strlen()
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

int		main()
{
	test_ft_strlen();
	test_ft_strcpy();
	test_ft_strcmp();
	return (0);
}
