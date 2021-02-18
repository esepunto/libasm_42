;ft_strcmp (man 3 strcmp)

;	int	strcmp(const char *s1, const char *s2)

				section		.text
				global		_ft_strcmp

_ft_strcmp:
				cmp		byte[rsi], 0x0
				jz		exit
				cmp		byte[rdi], 0x0
				jz		exit
				cmpsb
				jz		exit
				je		_ft_strcmp
exit:
				ret
