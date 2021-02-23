			section	.text
			global	_ft_strcpy
			mov		rax, rdi
_ft_strcpy:
			cmp		byte[rsi], 0x0
			jz		exit
			movsb						; copia 1 byte de rdi a rsi, implícitos, incrementa (o decrementa según flag) los registros según el tamaño (1 en este caso)
			jmp	_ft_strcpy
exit:
			mov byte[rdi], 0x0
			ret

