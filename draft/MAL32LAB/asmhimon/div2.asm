
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

.data
num1 DB ?
num2 DB ?


; add your code here
.code
main proc
    mov ax,@data
    
    mov ah,1
    int 21h     ; division 8
    sub al,'0'
    mov num1,al
    
    mov ah,1
    int 21h
    sub al,'0'  ; divider 2
    mov num2,al
    
    mov al,0
    mov ah,0
    
    mov bl,num2
    mov al,num1
    
    div bl
    add al,48
    
    mov ah,2
    mov dl,al
    int 21h
    
ret
