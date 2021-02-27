/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:11:00 by ssacrist          #+#    #+#             */
/*   Updated: 2021/02/27 15:52:24 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <errno.h>

# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define PURPLE		"\033[35m"
# define CYAN		"\033[1;36m"
# define BLUE       "\033[1;34m"
# define GREY		"\033[1;30m"
# define UNDER		"\033[4m"

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
char		*ft_strdup(const char *s1);
void		test_ft_strcpy();
void		test_ft_strlen();
void		test_ft_strcmp();
void		test_ft_write();
void		test_ft_read();
void		test_ft_strdup();
void		print_title(char *s);
#endif
