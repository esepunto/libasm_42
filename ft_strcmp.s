;ft_strcmp (man 3 strcmp)

;	int	strcmp(const char *s1, const char *s2)

			section		.text
			global		_ft_strcmp


if_end:
			cmp 	byte[rsi], 0			
			je 		exit					; je == jump is equal

increment:
			inc		rdi
			inc 	rsi
			cmp 	byte[rdi], 0
			je		_ft_strcmp				; je == jump is equal
_ft_strcmp:
			movzx	rax, byte[rdi]			; movzx copia y rellenando con 0s
			movzx	rcx, byte[rsi]
			sub		rax, rcx				; no hace falta cmp, sub ya coloca los flags
			jz		if_end				; junp == junp if zero

exit:
			ret
