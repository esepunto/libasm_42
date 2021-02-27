/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssacrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:21:33 by ssacrist          #+#    #+#             */
/*   Updated: 2021/02/27 20:14:28 by ssacrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

static void		print_title(char *s)
{
	static int n = 1;
	printf("\n%s%s%d/ %s :%s\n\n", _BLUE, _BOLD, n++, s, _R);
}

/*
** FT_STRLEN - calculate length of string
*/

static void		print_equal_size_t(size_t expected, size_t real)
{
	printf("%s   %zu == %zu\n", expected == real ? _GREEN : _RED, expected, real);
}

static void		test_ft_strlen()
{
	char	*str;
	print_title("strlen vs. ft_strlen");
	printf("%s", _YELLOW);
	
	str = "";
	print_equal_size_t(strlen(str), ft_strlen(str));
	str = "Puede que la tarea que me he impuesto de escribir una historia completa del pueblo romano desde el comienzo mismo de su existencia me recompense por el trabajo invertido en ella, no lo sé con certeza, ni creo que pueda aventurarlo. Porque veo que esta es una práctica común y antiguamente establecida, cada nuevo escritor está siempre persuadido de que ni lograrán mayor certidumbre en las materias de su narración, ni superarán la rudeza de la antigüedad en la excelencia de su estilo. Aunque esto sea así, seguirá siendo una gran satisfacción para mí haber tenido mi parte también en investigar, hasta el máximo de mis capacidades, los anales de la nación más importante del mundo, con un interés más profundo; y si en tal conjunto de escritores mi propia reputación resulta ocultada, me consuelo con la fama y la grandeza de aquellos que eclipsen mi fama. El asunto, además, es uno que exige un inmenso trabajo. Se remonta a más de 700 años atrás y, después de un comienzo modesto y humilde, ha crecido a tal magnitud que empieza a ser abrumador por su grandeza. No me cabe duda, tampoco, que para la mayoría de mis lectores los primeros tiempos y los inmediatamente siguientes, tienen poco atractivo; Se apresurarán a estos tiempos modernos en los que el poderío de una nación principal es desgastado por el deterioro interno. Yo, en cambio, buscaré una mayor recompensa a mis trabajos en poder cerrar los ojos ante los males de que nuestra generación ha sido testigo durante tantos años; tanto tiempo, al menos, como estoy dedicando todo mi pensamiento a reproducir los claros registros, libre de toda la ansiedad que pueden perturbar el historiador de su época, aunque no le puedan deformar la verdad.";
	print_equal_size_t(strlen(str), ft_strlen(str));
}

/*
** FT_STRCPY copy string
*/

static void		print_equal_string(char *src, char *copy)
{
	printf("%ssrc: |%s|\ndst: |%s|\n\n\n", strcmp(src, copy) == 0 ? _GREEN : _RED, src, copy);
	printf("%s", _R);
}

static void		test_ft_strcpy()
{
	char	dst[2555];
	char	*src;

	print_title("strcpy vs. ft_strcpy");
	printf("%s", _R);
	dst[0] = '\0';
	src = "hola k ase";
	printf("src: |%s|\ndst: |%s|\n%s... aplicando ft_strcpy... ...\n", src, dst, _YELLOW);
	ft_strcpy(dst, src);
	print_equal_string(dst, src);

	src = "";
	printf("src: |%s|\ndst: |%s|\n%s... aplicando ft_strcpy... ...\n", src, dst, _YELLOW);
	ft_strcpy(dst, src);
	print_equal_string(dst, src);

	src = "Puede que la tarea que me he impuesto de escribir una historia completa del pueblo romano desde el comienzo mismo de su existencia me recompense por el trabajo invertido en ella, no lo sé con certeza, ni creo que pueda aventurarlo. Porque veo que esta es una práctica común y antiguamente establecida, cada nuevo escritor está siempre persuadido de que ni lograrán mayor certidumbre en las materias de su narración, ni superarán la rudeza de la antigüedad en la excelencia de su estilo. Aunque esto sea así, seguirá siendo una gran satisfacción para mí haber tenido mi parte también en investigar, hasta el máximo de mis capacidades, los anales de la nación más importante del mundo, con un interés más profundo; y si en tal conjunto de escritores mi propia reputación resulta ocultada, me consuelo con la fama y la grandeza de aquellos que eclipsen mi fama. El asunto, además, es uno que exige un inmenso trabajo. Se remonta a más de 700 años atrás y, después de un comienzo modesto y humilde, ha crecido a tal magnitud que empieza a ser abrumador por su grandeza. No me cabe duda, tampoco, que para la mayoría de mis lectores los primeros tiempos y los inmediatamente siguientes, tienen poco atractivo; Se apresurarán a estos tiempos modernos en los que el poderío de una nación principal es desgastado por el deterioro interno. Yo, en cambio, buscaré una mayor recompensa a mis trabajos en poder cerrar los ojos ante los males de que nuestra generación ha sido testigo durante tantos años; tanto tiempo, al menos, como estoy dedicando todo mi pensamiento a reproducir los claros registros, libre de toda la ansiedad que pueden perturbar el historiador de su época, aunque no le puedan deformar la verdad.";
	printf("src: |%s|\ndst: |%s|\n%s... aplicando ft_strcpy... ...\n", src, dst, _YELLOW);
	ft_strcpy(dst, src);
	print_equal_string(dst, src);
	
	src = "Emosido engañado";
	printf("src: |%s|\ndst: |%s|\n%s... aplicando ft_strcpy... ...\n", src, dst, _YELLOW);
	ft_strcpy(dst, src);
	print_equal_string(dst, src);
}


/*
** FT_STRCMP - compare strings
*/

static void	print_equal_compare(char *s1, char *s2)
{
	printf("%s%s\n  %svs\n%s%s\n", _R, s1, _YELLOW, _R, s2);
	printf("%s   strcmp == %d\nft_strcmp == %d\n\n", strcmp(s1, s2) == ft_strcmp(s1, s2)  ? _GREEN : _RED, strcmp(s1, s2), ft_strcmp(s1, s2));
}

static void		test_ft_strcmp()
{
	char	*s1;
	char	*s2;
	
	print_title("strcmp vs. ft_strcmp");
	printf("%s", _YELLOW);
	
	s1 = "";
	s2 = "";
	print_equal_compare(s1, s2);
	
	s1 = "";
	s2 = "hol";
	print_equal_compare(s1, s2);

	s1 = "hola";
	s2 = "";
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

	s1 = "Puede que la tarea que me he impuesto de escribir una historia completa del pueblo romano desde el comienzo mismo de su existencia me recompense por el trabajo invertido en ella, no lo sé con certeza, ni creo que pueda aventurarlo. Porque veo que esta es una práctica común y antiguamente establecida, cada nuevo escritor está siempre persuadido de que ni lograrán mayor certidumbre en las materias de su narración, ni superarán la rudeza de la antigüedad en la excelencia de su estilo. Aunque esto sea así, seguirá siendo una gran satisfacción para mí haber tenido mi parte también en investigar, hasta el máximo de mis capacidades, los anales de la nación más importante del mundo, con un interés más profundo; y si en tal conjunto de escritores mi propia reputación resulta ocultada, me consuelo con la fama y la grandeza de aquellos que eclipsen mi fama. El asunto, además, es uno que exige un inmenso trabajo. Se remonta a más de 700 años atrás y, después de un comienzo modesto y humilde, ha crecido a tal magnitud que empieza a ser abrumador por su grandeza. No me cabe duda, tampoco, que para la mayoría de mis lectores los primeros tiempos y los inmediatamente siguientes, tienen poco atractivo; Se apresurarán a estos tiempos modernos en los que el poderío de una nación principal es desgastado por el deterioro interno. Yo, en cambio, buscaré una mayor recompensa a mis trabajos en poder cerrar los ojos ante los males de que nuestra generación ha sido testigo durante tantos años; tanto tiempo, al menos, como estoy dedicando todo mi pensamiento a reproducir los claros registros, libre de toda la ansiedad que pueden perturbar el historiador de su época, aunque no le puedan deformar la verdad.";
	s2 = "Puede que la tarea que me he impuesto de escribir una historia completa del pueblo romano desde el comienzo mismo de su existencia me recompense por el trabajo invertido en ella, no lo sé con certeza, ni creo que pueda aventurarlo. Porque veo que esta es una práctica común y antiguamente establecida, cada nuevo escritor está siempre persuadido de que ni lograrán mayor certidumbre en las materias de su narración, ni superarán la rudeza de la antigüedad en la excelencia de su estilo. Aunque esto sea así, seguirá siendo una gran satisfacción para mí haber tenido mi parte también en investigar, hasta el máximo de mis capacidades, los anales de la nación más importante del mundo, con un interés más profundo; y si en tal conjunto de escritores mi propia reputación resulta ocultada, me consuelo con la fama y la grandeza de aquellos que eclipsen mi fama. El asunto, además, es uno que exige un inmenso trabajo. Se remonta a más de 700 años atrás y, después de un comienzo modesto y humilde, ha crecido a tal magnitud que empieza a ser abrumador por su grandeza. No me cabe duda, tampoco, que para la mayoría de mis lectores los primeros tiempos y los inmediatamente siguientes, tienen poco atractivo; Se apresurarán a estos tiempos modernos en los que el poderío de una nación principal es desgastado por el deterioro interno. Yo, en cambio, buscaré una mayor recompensa a mis trabajos en poder cerrar los ojos ante los males de que nuestra generación ha sido testigo durante tantos años; tanto tiempo, al menos, como estoy dedicando todo mi pensamiento a reproducir los claros registros, libre de toda la ansiedad que pueden perturbar el historiador de su época, aunque no le puedan deformar la verdad.";
	print_equal_compare(s1, s2);
}

/*
** FT_WRITE
*/

static void		print_equal_ftwrite(int expected, int real)
{
	printf("%s   %d == %d", expected == real ? _GREEN : _RED, expected, real);
	printf("%s\n", _R);
}

static void		toprint_ftwrite(char *s)
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

static void		toprint_ftwrite_stdout(char *s)
{
	int	i;
	int	j;
	
	j = write(0, s, strlen(s));
	i = ft_write(0, s, strlen(s));
	errno = 0;
	print_equal_ftwrite(i, j);
	if (i < 0 || j < 0)
		perror("errno");
	printf("\n");
}

static void		test_ft_write()
{
	int		fd;
	char	*s;
	int		i,j;

	print_title("write vs. ft_write");
	printf("%s", _YELLOW);

	s = "Prueba stdout.\n";
	toprint_ftwrite_stdout(s);
	
	s = "Hello World!\n";
	toprint_ftwrite(s);

	s = "Puede que la tarea que me he impuesto de escribir una historia completa del pueblo romano desde el comienzo mismo de su existencia me recompense por el trabajo invertido en ella, no lo sé con certeza, ni creo que pueda aventurarlo. Porque veo que esta es una práctica común y antiguamente establecida, cada nuevo escritor está siempre persuadido de que ni lograrán mayor certidumbre en las materias de su narración, ni superarán la rudeza de la antigüedad en la excelencia de su estilo. Aunque esto sea así, seguirá siendo una gran satisfacción para mí haber tenido mi parte también en investigar, hasta el máximo de mis capacidades, los anales de la nación más importante del mundo, con un interés más profundo; y si en tal conjunto de escritores mi propia reputación resulta ocultada, me consuelo con la fama y la grandeza de aquellos que eclipsen mi fama. El asunto, además, es uno que exige un inmenso trabajo. Se remonta a más de 700 años atrás y, después de un comienzo modesto y humilde, ha crecido a tal magnitud que empieza a ser abrumador por su grandeza. No me cabe duda, tampoco, que para la mayoría de mis lectores los primeros tiempos y los inmediatamente siguientes, tienen poco atractivo; Se apresurarán a estos tiempos modernos en los que el poderío de una nación principal es desgastado por el deterioro interno. Yo, en cambio, buscaré una mayor recompensa a mis trabajos en poder cerrar los ojos ante los males de que nuestra generación ha sido testigo durante tantos años; tanto tiempo, al menos, como estoy dedicando todo mi pensamiento a reproducir los claros registros, libre de toda la ansiedad que pueden perturbar el historiador de su época, aunque no le puedan deformar la verdad.\n";
	toprint_ftwrite(s);

	s = "\0";
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
	
	fd = open("text2write.txt", O_WRONLY);
	write(fd, "Prueba stdout con    write\n", 27);
	ft_write(fd, "Prueba stdout con ft_write\n", 27);
	close(fd);
}

/*
** FT_READ
*/

void	test_ft_read2()
{
	int		fd;
	char	buffer[3214] = {0};
	char	buffer2[100] = {0};
	char	buffer3[100] = {0};
	int		i;

	fd = open("text.txt", O_RDONLY);
	i = ft_read(fd, buffer, 10000);
	printf("%d\n", i);
	printf("%s\n", buffer);
	close(fd);
	
	i = ft_read(0, buffer2, 99);
	buffer2[i] = 0;
	printf("%d\n", i);
	printf("%s\n", buffer2);

	fd = open("text.txt", O_RDONLY);
	i = ft_read(fd, NULL, 99);
	printf("%d\n", i);
	perror("errno");
	printf("\n");
	close(fd);

	fd = open("text.txt", O_RDONLY);
	i = ft_read(-1, buffer3, 99);
	printf("%d\n", i);
	perror("errno");
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
	test_ft_read2();
}

/*
** FT_STRDUP Duplicate string
*/

static void		print_equal_string_dup(char *src, char *copy)
{
	printf("%ssrc: |%s|\ndup: |%s|\n\n", strcmp(src, copy) == 0 ? _GREEN : _RED, src, copy);
	printf("%s", _R);
}

static void		duplicate(char *str)
{
	char	*dup;

	dup = ft_strdup(str);
	print_equal_string_dup(str, dup);
	free(dup);
}

static void	test_ft_strdup()
{
	char	*str;
		
	str = "hola";
	duplicate(str);
	str = "";
	duplicate(str);
	str = "An archive can contain other items than object-files (though this is not done often). Archives containing object-files require additional maintenance (e.g., done by ranlib) to make them usable by the linker.";
	duplicate(str);
}



void			all_test()
{
	test_ft_strlen();
	test_ft_strcpy();
	test_ft_strcmp();
	test_ft_write();
	test_ft_read();
	test_ft_strdup();
}

int				main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\nEscribe ./my_ass seguido del número del test que quieres hacer:\na = all\n1 = strlen\n2 = strcpy\n3 = strcmp\n4 = write\n5 = read\n6 = strdup\n");
		exit (0);
	}
	else if (strcmp(argv[1], "a") == 0)
		all_test();
	else if (strcmp(argv[1], "1") == 0)
		test_ft_strlen();
	else if (strcmp(argv[1], "2") == 0)
		test_ft_strcpy();
	else if (strcmp(argv[1], "3") == 0)
		test_ft_strcmp();
	else if (strcmp(argv[1], "4") == 0)
		test_ft_write();
	else if (strcmp(argv[1], "5") == 0)
		test_ft_read();
	else if (strcmp(argv[1], "6") == 0)
		test_ft_strdup();
	else 
		printf("\nEscribe ./my_ass seguido del número del test que quieres hacer:\n1 = strlen\n2 = strcpy\n3 = strcmp\n4 = write\n5 = read\n6 = strdup\n");
	return (0);
}
