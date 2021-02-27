; ft_strdup (man 3 strdup, can call to malloc)
; 
; char		*ft_strdup(const char *s1);
; void		*malloc(size_t size);

				section		.text
				global		_ft_strdup
				extern		_malloc
				extern		_ft_strcpy
				extern		_ft_strlen

_ft_strdup:										; rdi = file descriptor, rsi = string, rdx = byte count
				xor			rax, rax			; not necessary but recommended
				push		rdi					; copy on rax the string to duplicate
				call		_ft_strlen			; rdi length to rax

allocate:
				inc			rax					; rax++
				mov			rdi, rax			; how bytes allocate?
				call		_malloc				; allocate in rax
				pop			rsi					; from init rdi to rsi
				sub			rax, 0				; check if allocate
				je			not_allocate

duplicate:
				mov			rdi, rax
				call 		_ft_strcpy			; copy from rsi to rax

not_allocate:
				ret
