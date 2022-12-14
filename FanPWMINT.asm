;;*****************************************************************************
;;*****************************************************************************
;;  FILENAME: FanPWMINT.asm
;;   Version: 2.60, Updated on 2015/3/4 at 22:26:52
;;  Generated by PSoC Designer 5.4.3191
;;
;;  DESCRIPTION: PWM8 Interrupt Service Routine
;;-----------------------------------------------------------------------------
;;  Copyright (c) Cypress Semiconductor 2015. All Rights Reserved.
;;*****************************************************************************
;;*****************************************************************************

include "m8c.inc"
include "FanPWM.inc"
include "memory.inc"


;-----------------------------------------------
;  Global Symbols
;-----------------------------------------------
export  _FanPWM_ISR


AREA InterruptRAM (RAM,REL,CON)

;@PSoC_UserCode_INIT@ (Do not change this line.)
;---------------------------------------------------
; Insert your custom declarations below this banner
;---------------------------------------------------

;------------------------
; Includes
;------------------------

	
;------------------------
;  Constant Definitions
;------------------------


;------------------------
; Variable Allocation
;------------------------


;---------------------------------------------------
; Insert your custom declarations above this banner
;---------------------------------------------------
;@PSoC_UserCode_END@ (Do not change this line.)


AREA UserModules (ROM, REL)

;-----------------------------------------------------------------------------
;  FUNCTION NAME: _FanPWM_ISR
;
;  DESCRIPTION: Unless modified, this implements only a null handler stub.
;
;-----------------------------------------------------------------------------
;

_FanPWM_ISR:

   ;@PSoC_UserCode_BODY@ (Do not change this line.)
   ;---------------------------------------------------
   ; Insert your custom assembly code below this banner
   ;---------------------------------------------------
   ;   NOTE: interrupt service routines must preserve
   ;   the values of the A and X CPU registers.
 	
   
RDIxLT0: equ 0xb3					;LUT Register Address
  	dec [_wControlState + 1]		;decrement wControlState (lower byte)
	sbb [_wControlState], 0			;
	jnz MoreThan255
	cmp [_wControlState+1], 20
	jnz Not20
State20:
	mov reg[PRT1DR], 0x40			;Start of FanOverride	
	or reg[RDIxLT0], 0x0f			;Set FanOverrideOut high
	reti							;force LUT open high
Not20:
	cmp [_wControlState+1], 0
	jnz NotZero
State0:								;End of FanOverride
	mov reg[PRT1DR], 0x00			;Set FanOverrideOut low and TachOverrideOut
	and reg[RDIxLT0], 0xf3			;force LUT back to normal
	mov [_wControlState], 3			;wControlState = 1000;
	mov [_wControlState+1], 232
	reti
NotZero:
	cmp [_wControlState+1], 19		; checks if control state is 19
	jnz Not19
State19:							; only reaches here if contorl state is 19
	mov [_cNumCycles], -1			; set NumCycles to -1
	lcall TachTimer_DisableInt_M	; disable interrupts
	lcall TachTimer_EnableInt_M		; enable interrupt (basiclaly just clears interrupts)
	reti
Not19:
	cmp [_wControlState+1], 1		; check if state is equal to 1
	jnz MoreThan255
State1:
	lcall TachTimer_DisableInt_M	; disable interrupts
	lcall TachTimer_EnableInt_M		; enable interrupt (basiclaly just clears interrupts)
	mov [_bDataAvailable], 1		; set bDataAvailable to 1
	reti
MoreThan255:
   
   ;---------------------------------------------------
   ; Insert your custom assembly code above this banner
   ;---------------------------------------------------
   
   ;---------------------------------------------------
   ; Insert a lcall to a C function below this banner
   ; and un-comment the lines between these banners
   ;---------------------------------------------------
   
   ;PRESERVE_CPU_CONTEXT
   ;lcall _My_C_Function
   ;RESTORE_CPU_CONTEXT
   
   ;---------------------------------------------------
   ; Insert a lcall to a C function above this banner
   ; and un-comment the lines between these banners
   ;---------------------------------------------------
   ;@PSoC_UserCode_END@ (Do not change this line.)

   reti


; end of file FanPWMINT.asm
