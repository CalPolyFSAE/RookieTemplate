#include "MKE18F16.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "adc.h"
#include "can.h"
#include "gpio.h"

using namespace BSP;

void cb(void){
	can::CANlight::frame f = can::CANlight::StaticClass().readrx(1);
    int a = 1;
}

int main(void) {
    BOARD_InitBootClocks();
    BOARD_InitBootPins();
    SysTick_Config(60000);

    while(true){

    }

}

extern "C" {
    void SysTick_Handler(void){
        
    }
}