;if (a > b)
;{
;	maxA = 1;
;	maxB = 0;
;}

;Equivalente a [emplear condición contraria (a <= b) en vez de (a > b) ]

global		ft_compare

section		.text
ft_compare:	mov rax, qword [a]		;Se carga solo la variable a en un registro
			cmp rax, qword [b]		;Se hace la comparación
			jle fin					;Si se cumple la condición (a <= b) salta a fin
			mov byte [maxA], 1		;Estas instrucciones solo se ejecutan
			mov byte [maxB], 0		;cuando se cumple la condición (a > b)
fin:
