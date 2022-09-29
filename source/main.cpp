#include "MKE18F16.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "adc.h"
#include "can.h"
#include "gpio.h"

using namespace BSP;

int main(void) { 
    // inits all boards 
    BOARD_InitBootClocks();
    BOARD_InitBootPins();
    SysTick_Config(60000);
    // loop for conditionals
    while(true){

    }

}

extern "C" {
    void SysTick_Handler(void){

    }
}