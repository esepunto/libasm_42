; ft_strdup (man 3 strdup, can call to malloc)
; 
; char		*ft_strdup(const char *s1);
; void		*malloc(size_t size);

				section		.text
				global		_ft_strdup
				extern		___error
				extern		___malloc
				extern		_ft_strcpy
				extern		_ft_strlen

_ft_strdup:									; rdi = file descriptor, rsi = string, rdx = byte count
				xor			rax, rax		; clean rax
				mov			rdx, rdi		; copy rdi
				call		_ft_strlen		; rdi length to rax
				jp			allocate		; jp = jump to

allocate:
				mov			rdi, rax
				inc			rdi				; rdi++
				push		rdi
				call		___malloc
				test		rax, rax		; check if the malloc failed
				jz			fail_exit
				jp			duplicate		; jp = jump to
duplicate:
				mov			rsi, rdx		; rdi -> rdx -> rsi
				call 		_ft_strcpy		; copy rsi to rdi
				ret

fail_exit:
				mov			rax, 1
				pop			r8
				ret
