;ft_strlen (man 3 strlen)

;	size_t	ft_strlen(const char *str)
;	{
;		size_t counter;
;
;		counter = 0;
;		while (str[counter])
;			counter++;
;		return (counter);
;	}

;	size_t =	dq: define una variable de tipo cuádruple palabra(quadword),
;				4 palabras (word/dw) = 8 bytes = 64 bits.
;
;	1.- Recibir la cadena de texto que hay que medir.
;	2.- Definir variable counter como dq e igualar a valor 0.
;	3.- 

			section		.text
			global		_ft_strlen
_ft_strlen:
			xor			rax, rax				;count to 0 
loop:
			cmp			byte [rdi + rax], 0		; chr  == ?
			jz			exit					; if chr == 0 ==> exit from loop
			inc			rax						; add count = count++
			jmp			loop					; if chr != 0 ==> go to loop
exit:
			ret									; return (rax)
