;ft_strcpy (man 3 strcpy)

;	char *strcpy(char *dst, const char *src)

				section		.text
				global		_ft_strcpy


_ft_strcpy:
				mov			rax, rdi

loop:
				cmp			byte[rsi], 0	; Ojo. el código permite poner 0 en vez de 0x0, o incluso otros números
				je			exit
				movsb						; copy from DS:(E)SI to  ES:(E)DI (de rsi a rdi) movsb: byte a byte - movsw: word a word - movsd: doubleword a doubleword 
				jmp			loop			; tb es válido loop _ft_strcpy

exit:
				mov			byte[rdi], 0x0
				ret
