En C:

if (a > b)
{
	maxA = 1;
	maxB = 0;
}

Equivalente a:

mov rax, qword [a]		;Se cargan las variables en registros
mov rbx, qword [b]

cmp rax, rbx			;Se hace la comparación
jg cierto				;Si se cumple la condición, salta a la etiqueta cierto
jmp fin					;Si no se cumple la condición, salta a la etiqueta fin

cierto:
    mov byte [maxA], 1	;Estas instrucciones solo se ejecutan
    mov byte [maxB], 0	;cuando se cumple la condición
fin:

Equivalente a [emplear condición contraria (a <= b) en vez de (a > b) ]

mov rax, qword [a]		;Se carga solo la variable a en un registro
cmp rax, qword [b]		;Se hace la comparación
jle fin					;Si se cumple la condición (a <= b) salta a fin
mov byte [maxA], 1		;Estas instrucciones solo se ejecutan
mov byte [maxB], 0		;cuando se cumple la condición (a > b)
fin:

@@@@@@@############@@@@@@@@@@@############@@@@@@@@@@@@@###########@@@@@@@@@@@

IF...

if ((a != b) || (a >= 1 && a <= 5))
{
	b = a;
}

Equivalente a:

mov rax, qword [a]		;Se cargan las variables en registros
mov rbx, qword [b]
cmp rax, rbx			;Se hace la comparación (a != b)
jne cierto				;Si se cumple la condición salta a la etiqueta cierto
						;Si no se cumple, como es una OR, se puede cumplir la otra condición.
cmp rax, 1				;Se hace la comparación (a >= 1), si no se cumple,
jl fin					;como es una AND, no hay que mirar la otra condición.
cmp rax, 5				;Se hace la comparación (a <= 5)
jg fin					;Si no salta, se cumple que (a >= 1 && a <= 5)

cierto:
	mov qword [b], rax	;Hacemos la asignación cuando la condición es cierta.
fin:

@@@@@@@############@@@@@@@@@@@############@@@@@@@@@@@@@###########@@@@@@@@@@@

IF... ELSE

if (a > b)
	max = 'a';
else
	max = 'b';

Equivalente a:

mov rax, qword [a]		;Se cargan las variables en registros
mov rbx, qword [b]
cmp rax, rbx			;Se hace la comparación
jg cierto				;Si se cumple la condición, se salta a cierto

mov byte [max], 'b'	;else (a <= b)
jmp fin

cierto:
	mov byte [max], 'a'	;if (a > b)
fin:

@@@@@@@############@@@@@@@@@@@############@@@@@@@@@@@@@###########@@@@@@@@@@@

WHILE...

resultado = 1;
while (num > 1)
{
	resultado = resultado * num;
	num--;
}

Equivalente a: (num > 1)

mov rax, 1				;rax será [resultado]
mov rbx, qword [num]	;Se carga la variable en un registro
while:
	cmp rbx, 1			;Se hace la comparación
	jg cierto			;Si se cumple la condición (num > 1) salta a cierto
	jmp fin				;Si no, salta a fin
cierto:
	imul rax, rbx		;rax = rax * rbx
	dec rbx
	jmp while
fin:
  mov qword [resultado], rax
  mov qword [num], rbx


Equivalente a: (num <= 0)

mov rax, 1;rax será [resultado]
while:
	cmp qword [num], 1		;Se hace la comparación
	jle fi					;Si se cumple la condición (num <= 1) salta a fin
	imul rax, qword [num]	;rax=rax*[num]
	dec qword [num]
	jmp while
fin:
	mov qword [resultado], rax


