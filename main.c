//----------------------------------------------------------------------------
// C main line
//----------------------------------------------------------------------------

#include <m8c.h>        // part specific constants and macros
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules
#include <math.h>

extern unsigned char bSwitchState = 0;	// for switch debouncing
extern unsigned short int wControlState =  1000;	// initialize 16 bit unsigned int variable to 1000 (short int is 2bytes(16 bits))

extern unsigned short int wFirstValue;
extern unsigned short int wLastValue;
extern signed char cNumCycles;
extern unsigned char bDataAvailable;
extern unsigned short int wSpeedRPM;

void main(void)
{
	// M8C_EnableGInt ; // Uncomment this line to enable Global Interrupts
	// Insert your main routine code here.
	LCD_Start(); 							// starts the LCD
	FanPWM_WritePulseWidth(255);			// initializes Pulse width to 255.
	
	LCD_Position(0,0);						// sets the cursor to top
	LCD_PrHexByte(FanPWM_bReadPulseWidth());// prints pulse width on LCD at cursor
	
	FanPWM_Start();							// starts the FanPWM
	
	//4C
	FanPWM_EnableInt();						// enables FanPWM interrupts
	M8C_EnableGInt;							// enables global interrupts
	//
	
	//4D
	TachTimer_Start();						// starts the TachTimer module
	//
	
	while (1){
		while ((INT_CLR0 & 0x40) == 0); // wait till set (sleep timer)
		INT_CLR0 = INT_CLR0 & ~0x40;	// clear sleep timer interrupt
		
		bSwitchState <<= 1;				// switch debouncing
		bSwitchState &= 0x70;
		bSwitchState |= (PRT1DR & 0x08);
		if(bSwitchState == 0x38){
			//Switch has just been pressed
			// Do something
			FanPWM_WritePulseWidth(FanPWM_PULSE_WIDTH - 1);	// decreement the fan pulse width
			LCD_Position(0,0);								// sets the cursor to top
			LCD_PrHexByte(FanPWM_bReadPulseWidth());		// prints updated pulse width on LCD at cursor
		}
		
		//4D
		
		if (bDataAvailable == 1){
			bDataAvailable = 0;		// clear it
			
			wSpeedRPM = ((45*pow(10,6)*cNumCycles)+((wFirstValue-wLastValue)/2))/(wFirstValue-wLastValue);	// calculate fan rpm
			
			FanPWM_WritePulseWidth(FanPWM_PULSE_WIDTH - 1);	// decreement the fan pulse width
			LCD_Position(1,0);								// sets the cursor to 2nd row
			LCD_PrHexByte(wSpeedRPM);						// prints updated pulse width on LCD at cursor
			
			LCD_Position(2,0);								// sets the cursor to 3rd row
			LCD_PrHexByte(cNumCycles);						// prints updated cNumcycles on LCD at cursor
		}
		
		//
		
	}
}
