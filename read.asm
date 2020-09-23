global read

section .text

;------------------------------------------------------
;int read(int fd, char * buff, size_t count)
;--------------------------------

read:
	push ebp
	mov ebp,esp

	push ebx
	push ecx
	push edx

	mov eax, 3	  ; sys call para read
	mov ebx, [ebp+8]  ; fd
	mov ecx, [ebp+12] ; buff
	mov edx, [ebp+16] ; count
	int 80h		  ; ejecucion

	pop edx
	pop ecx
	pop ebx

	mov esp, ebp
	pop ebp
	ret
