GLOBAL write

section .text

;------------------------------------------------------
;int write(int fd, char * buff, size_t count)
;--------------------------------

write:
	push ebp
	mov ebp, esp

	push ebx
	push ecx
	push edx

	mov eax, 4	  ; sys call para write
	mov ebx, [ebp+8]  ; fd
	mov ecx, [ebp+12] ; buff
	mov edx, [ebp+16] ; count
	int 80h           ; ejecucion

	pop edx
	pop ecx
	pop ebx

	mov esp, ebp
	pop ebp
	ret
