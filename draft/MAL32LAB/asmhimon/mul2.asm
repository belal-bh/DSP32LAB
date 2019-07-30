
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h

; add your code here
.data 
num1 DB ?
num2 DB ?
res DB ?

.code
MOV AX,@data

MOV AH,1
INT 21h
SUB AL,30h
MOV num1,AL

MOV AH,1
INT 21h
SUB AL,30h

MUL num1

MOV res,AL
ADD res,30h


MOV AH,2
MOV DL,res
INT 21h
          
          

ret
