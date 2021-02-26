#include "libasm.h"

void	toprint_ftwrite(char *s)
{
	int	i;
	int	j;
	
	j = write(1, s, strlen(s));
	i = ft_write(1, s, strlen(s));
	errno = 0;
	print_equal_ftwrite(i, j);
	if (i < 0 || j < 0)
		perror("errno");
	printf("\n");
}

void	print_equal_ftwrite(int expected, int real)
{
	printf("%s   %d == %d", expected == real ? _GREEN : _RED, expected, real);
	printf("%s\n", _R);
}


void	test_ft_write()
{
	print_title("write vs. ft_write");
	printf("%s", _YELLOW);

	char	*s;
	int		i,j;

	s = "hola\n";
	toprint_ftwrite(s);

	s = "When forty winters shall besiege thy brow, And dig deep trenches in thy beauty's field, Thy youth's proud livery so gazed on now, Will be a tattered weed of small worth held: Then being asked, where all thy beauty lies,   Where all the treasure of thy lusty days; To say within thine own deep sunken eyes, Were an all-eating shame, and thriftless praise.  How much more praise deserved thy beauty's use, If thou couldst answer 'This fair child of mine Shall sum my count, and make my old excuse' Proving his beauty by succession thine.\n";
	toprint_ftwrite(s);

	s = "";
	toprint_ftwrite(s);


	j = write(1, NULL, 0);
	errno = 0;
	i = ft_write(1, NULL, 0);
	print_equal_ftwrite(i, j);
	if (i < 0 || j < 0)
		perror("errno");
	printf("\n");

	

	j = write(-1, "hola\n", 5);
	errno = 0;
	i = ft_write(-1, "hola\n", 5);
	print_equal_ftwrite(i, j);
	if (i < 0 || j < 0)
		perror("errno");
	printf("%s\n", _R);

	
	j = write(1, NULL, 3);
	errno = 0;
	i = ft_write(1, NULL, 3);
	print_equal_ftwrite(i, j);
	if (i < 0 || j < 0)
		perror("errno");
	printf("\n");
}
