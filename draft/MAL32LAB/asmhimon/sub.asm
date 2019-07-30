
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

; add your code here

MOV AH,1

INT 21h
MOV BL,AL

INT 21h
MOV BH,AL

SUB BL,BH
ADD BL,48


MOV AH,2

MOV DL,BL
INT 21h


ret




