vec dd 1,2,3,4,5,6
mat dd 1,2,3
	dd 4,5,6

mov esi,0
mov eax,0
loop_vec:
	add eax, dword[vec+esi*4]
	inc esi
	cmp esi, 6
	jl loop_vec
	mov esi,0
	mov ebx,0
loop_mat:
	add ebx, dword[mat+esi*4]
	inc esi
	cmp esi, 6
	jl loop_mat
	mov esi,0
	mov edi,0
	mov ebx,0
loop_mat2:
	add ebx, dword[mat+edi+esi*4]
	inc esi
	cmp esi, 3
	jl loop_mat2
	mov esi, 0
	add edi, 12
	cmp edi, 24
	jl loop_mat2

