;ft_strcpy (man 3 strcpy)

;	char *strcpy(char *dst, const char *src)

				section		.text
				global		_ft_strcpy

_ft_strcpy:
				cmp		byte[rsi], 0x0
				jz		exit
				movsd					; copy from DS:(E)SI to  ES:(E)DI (de rsi a rdi) movsb: byte a byte - movsw: word a word - movsd: doubleword a doubleword 
;				mov		rbx, [rsi]
;				xchg	rax, rbx
				jmp		_ft_strcpy
exit:
				mov		byte[rdi], 0x0
				ret
