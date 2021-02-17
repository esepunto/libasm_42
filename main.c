/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:21:33 by ssacrist          #+#    #+#             */
/*   Updated: 2021/02/17 18:23:47 by ssacrist         ###   ########.fr       */
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

	print_title("strcpy vs. ft_strcpy");
	printf("%s", _YELLOW);
	
	src = "hola";
	print_equal_string(strcpy(dst, src), ft_strcpy(dst, src));

	src = "";
	print_equal_string(strcpy(dst, src), ft_strcpy(dst, src));

	src = "0123456789abcedef";
	print_equal_string(strcpy(dst, src), ft_strcpy(dst, src));

//	src = NULL;
//	printf("src: '%s'; dest: '%s' ('%s')\n", src, strcpy(dst, src), ft_strcpy(dst, src));

}

int		main()
{
	test_ft_strlen();
	test_ft_strcpy();
	return (0);
}
