;ft_write(man 2 write)

; ssize_t	write(int fildes, const void *buf, size_t mbyte)
; All syscalls on syscall.h.

				section		.text
				global		_ft_write
				extern		___error

_ft_write:
				mov			rax, 0x2000004	; write / MacOS calling convention
				syscall						; to call systemd functions
				jc			error			; error sets carry flag
				ret
error:										; push&pop because the stack must be aligned
											; to a 16-byte boundary before making a call.
				push r8						; To aligne the stack 
				call ___error				; rax is now points to external variable errno.
;				pop qword[rax]				; 64 bit value is read
				pop r9						; To aligne the stack
				mov rax, -1					; return -1 to indicate an error
				ret
