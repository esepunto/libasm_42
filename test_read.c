#include "libasm.h"

void	test_ft_read2()
{
	int	fd = open("text.txt", O_RDONLY);
	char	buffer[100] = {0};
	char	buffer2[100] = {0};
	char	buffer3[100] = {0};
	int	i;

	i = ft_read(fd, buffer, 99);
	buffer[i] = 0;
	printf("%d\n", i);
	printf("%s\n", buffer);
	perror("errno");
	printf("\n");
	
	i = ft_read(fd, NULL, 99);
	buffer2[i] = 0;
	printf("%d\n", i);
	printf("%s\n", buffer2);
	perror("errno");
	printf("\n");

	i = ft_read(-1, buffer3, 99);
	buffer3[i] = 0;
	printf("%d\n", i);
	printf("%s\n", buffer3);
	perror("errno");
	printf("\n");
	close(fd);
}

void	test_ft_read()
{
	char	buf[32];
	int		fd;
	int		t;

	fd = open("text.txt", O_RDONLY);
	while ((t = ft_read(fd, &buf, 31)) > 0)
		printf("%s", buf);
	close(fd);
}
