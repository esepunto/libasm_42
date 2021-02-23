;ft_strcpy (man 3 strcpy)

;	char *strcpy(char *dst, const char *src)

				section		.text
				global		_ft_strcpy
				mov			rax, rdi
_ft_strcpy:
				cmp			byte[rsi], 0x0
				jz			exit
				movsb					; copy from DS:(E)SI to  ES:(E)DI (de rsi a rdi) movsb: byte a byte - movsw: word a word - movsd: doubleword a doubleword 
				jmp			_ft_strcpy
exit:
				mov			byte[rdi], 0x0
				mov			rax, rdi
				ret
