
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

.MODEL SMALL
.STACK 100H  
.DATA
VAR1 DB 5
VAR2 DB ?
.CODE

MAIN PROC
    
    MOV AX, @DATA
    MOV DX, AX
    
    
    MOV AH, 1
    INT 21H
    
    MOV VAR2, AL
           
    MOV AH, 2
    
    MOV DL, 0AH
    INT 21H
    MOV DL, 0DH
    INT 21H
    
    ADD VAR1, 48
    MOV DL, VAR1
    INT 21H
    
    MOV DL, 0AH
    INT 21H
    MOV DL, 0DH
    INT 21H
    
    MOV DL, VAR2
    INT 21H
    
    
    MOV AH, 4CH
    INT 21H
    MAIN ENDP
END MAIN

ret




