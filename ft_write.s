;ft_write(man 2 write)

; ssize_t	write(int fildes, const void *buf, size_t mbyte)
; All syscalls on syscall.h.

				section		.text
				global		_ft_write
				extern		___error		; extern int *	__error(); https://www.freebsd.org/cgi/man.cgi?query=errno&apropos=0&sektion=0&manpath=FreeBSD+13.0-current&arch=default&format=html 

_ft_write:
				mov			rax, 0x2000004	; write / MacOS calling convention
				syscall						; to call systemd functions
				jc			error			; error sets carry flag
				ret
error:										; push&pop because the stack must be aligned
											; to a 16-byte boundary before making a call.
				push rax						; To aligne the stack 
				call ___error				; rax is now points to external variable errno.
				pop qword[rax]						; To aligne the stack
				mov rax, -1					; return -1 to indicate an error
				ret

;				mov r8, rax					Another valid approach without stack
;				call ___error
;				mov [rax], r8
;				mov rax, -1
;				ret
