DATA SEGMENT
MG1 DB 0DH,0AH,"ENTER A STRING : $"
MG2 DB 0DH,0AH,"REVERSE : $"
DATA ENDS

CODE SEGMENT
ASSUME DS:DATA,CS:CODE
START:	MOV AX,DATA
	MOV DS,AX
	MOV DX,OFFSET MG1
	MOV AH,09H
	INT 21H
	MOV SI,2000H ;stack
	MOV CL,00H  ;counter

L1:	MOV AH,01H
	INT 21H
	MOV [SI],AL ; putting it into stack
	INC SI
	INC CL
	
	CMP AL,0DH ;to check end of string
	
	JNZ L1	;if not end of string,loop
	DEC CL 
	SUB SI,02H ;add is of 2 bit , to get to og address we subtract
	MOV DX, OFFSET MG2
	MOV AH,09H
	INT 21H
L2:	MOV DL,[SI]	 ;print loop
	MOV AH,02H
	INT 21H
	DEC SI
	DEC CL
	
	JNZ L2
	
	
	MOV AH,4CH
	INT 21H
CODE ENDS
END START
