;ft_strcmp (man 3 strcmp)

;	int	strcmp(const char *s1, const char *s2)

				section		.text
				global		_ft_strcmp

_ft_strcmp:
				cmp		byte[rsi], 0x0
				je		exit						;o una llamada a exit
				cmp		byte[rdi], 0x0
				je		exit
				cmpsb
				jmp		_ft_strcmp

exit:
				ret						;o crear fiunción exit con un ret dentro
