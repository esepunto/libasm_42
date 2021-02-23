;ft_write(man 2 write)

; ssize_t	write(int fildes, const void *buf, size_t mbyte)
; All syscalls on syscall.h.

				section		.text
				global		_ft_write
				extern		___error

_ft_write:									; rdi = file descriptor, rsi = string, rdx = byte count
				mov			rax, 0x2000004	; write / MacOS calling convention
				syscall
				jc			error			; error sets carry flag
				ret
error:
				push rax					; save errno
				call ___error				; rax is now points to external variable errno.
				pop qword[rax]				; The QWORD PTR is just a size specifier (It means that a 64 bit value is read from the address)
				mov rax, -1					; ¿por qué se hace?
				ret
