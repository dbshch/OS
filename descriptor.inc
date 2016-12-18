%macro Descriptor 3
	dw %2 & 0FFFFh
	dw %1 & 0FFFFh
	db (%1 >> 16) & 0FFh
	dw ((%2 >> 8) & 0F00h) | (%3 & 0F0FFh)
	db (%1 >> 24) & 0FFh
%endmacro

DA_DRW EQU 92h
DA_32  EQU 4000h
DA_C   EQU 98h
