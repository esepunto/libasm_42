/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:11:00 by ssacrist          #+#    #+#             */
/*   Updated: 2021/02/23 14:50:24 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <errno.h>
# include <fcntl.h>
# include <stdlib.h>
# include <errno.h>

// RESET list
# define _R          "\e[0m"

// https://misc.flogisoft.com/bash/tip_colors_and_formatting
# define _BOLD      "\e[1m"

// Colors
# define _RED      "\e[91m"
# define _GREEN    "\e[92m"
# define _YELLOW   "\e[93m"
# define _BLUE     "\e[94m"

size_t		ft_strlen(const char *s);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
ssize_t		ft_write(int fildes, const void *buf, size_t mbyte);
ssize_t		ft_read(int fildes, void *buf, size_t nbyte);
void		test_ft_strcpy();
void		test_ft_strlen();
void		test_ft_strcmp();
void		test_ft_write();
void		test_ft_read();
void		test_ft_read2();
void		print_title(char *s);
void		print_equal_size_t(size_t expected, size_t real);
void		print_equal_string(char *expected, char *real);
void		print_equal_compare(char *expected, char *real);
void		print_with_write(char *str);
void		print_equal_ftwrite(int expected, int real);

#endif
