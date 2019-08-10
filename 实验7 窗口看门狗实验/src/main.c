#include <stdio.h>
#include <stdlib.h>
#include "diag/Trace.h"

#include "Timer.h"
#include "BlinkLed.h"

#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "../HARDWARE/led/led.h"
#include "../HARDWARE/key/key.h"
#include "../HARDWARE/wdg/wdg.h"
// Sample pragmas to cope with warnings. Please note the related line at
// the end of this function, used to pop the compiler diagnostics status.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wreturn-type"



int main(int argc, char* argv[])
{
	Stm32_Clock_Init(9);
	uart_init(72,115200);
	delay_init(72);
	LED_Init();
	KEY_Init();
	LED0=0;
	delay_ms(300);
	WWDG_Init(0x7F,0x5F,3);
  while (1)
    {
	  LED0=1;
    }
  // Infinite loop, never return.
}

#pragma GCC diagnostic pop

// ----------------------------------------------------------------------------
