;ft_read (man 2 read)
;
; ssize_t read(int fildes, void *buf, size_t nbyte);

; All MacOS syscalls on syscall.h or consult https://opensource.apple.com/source/xnu/xnu-1504.3.12/bsd/kern/syscalls.master

				section		.text
				global		_ft_read
				extern		___error		; extern int *	__error(); https://www.freebsd.org/cgi/man.cgi?query=errno&apropos=0&sektion=0&manpath=FreeBSD+13.0-current&arch=default&format=html 

_ft_read:									; rdi = file descriptor, rsi = string, rdx = byte count
				mov			rax, 0x2000003	; read / MacOS calling convention
				syscall
				jc			error			; error sets carry flag
				ret
error:
				push rax					; save errno on stack
				call ___error				; rax is now points to external variable errno.
				pop qword[rax]				; 
				mov rax, -1					; ¿por qué se hace?
				ret
