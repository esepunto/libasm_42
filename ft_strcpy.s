;ft_strcpy (man 3 strcpy)

;	char *strcpy(char *dst, const char *src)

				section		.text
				global		_ft_strcpy

_ft_strcpy:
				xor		rax, rax
				mov		rdi, rsi
				mov		rax, rdi
				ret
