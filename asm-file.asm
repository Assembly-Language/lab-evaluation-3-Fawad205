INCLUDE Irvine32.inc
.data
;public asmfunc
msg db "assembly procedure end now",0


.code
asmfunc PROC p1:DWORD, p2:DWORD     ;passing paremetrs from c
   mov esi,p1                       ;mov peremetrs in pointer
   mov edi,p2
   mov ecx,10
   mov ebx,0
   Sum:
        mov eax, [esi]
        test eax,1h                     ;for findin odd number in aray
        Jz odd
        Add ebx,[esi]                   ;for adding in odd numbers 
        odd:
         add esi,4                       ; go to next elements in array
    Loop Sum

    mov [edi],ebx                        
    call crlf
    mov edx,offset msg
    call writestring
    
    ret
asmfunc ENDP
end