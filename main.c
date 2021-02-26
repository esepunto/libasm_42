/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:21:33 by ssacrist          #+#    #+#             */
/*   Updated: 2021/02/26 18:36:32 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	print_title(char *s)
{
	static int n = 1;
	printf("\n%s%s%d/ %s :%s\n\n", _BLUE, _BOLD, n++, s, _R);
}

void	print_equal_size_t(size_t expected, size_t real)
{
	printf("%s   %zu == %zu\n", expected == real ? _GREEN : _RED, expected, real);
}

void	print_with_write(char *str)
{
	write(1, str, strlen(str));
	ft_write(1, str, strlen(str));
}


int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\n\nEscribe ./my_ass seguido del número del test que quieres hacer:\n1 = strlen\n2 = strcpy\n3 = strcmp\n4 = write\n5 = read\n6 = strdup\n");
		exit (0);
	}
	if (strcmp(argv[1], "1") == 0)
		test_ft_strlen();
	else if (strcmp(argv[1], "2") == 0)
		test_ft_strcpy();
	else if (strcmp(argv[1], "3") == 0)
		test_ft_strcmp();
	else if (strcmp(argv[1], "4") == 0)
		test_ft_write();
	else if (strcmp(argv[1], "5") == 0)
	{
		test_ft_read();
		test_ft_read2();
	}
	else if (strcmp(argv[1], "6") == 0)
		test_ft_strdup();
	else 
	{
		printf("Escribe ./my_ass seguido del número del test que quieres hacer:\n1 = strlen\n2 = strcpy\n3 = strcmp\n4 = write\n5 = read\n6 = strdup\n");
		exit (0);
	}
	return (0);
}
