#include "stm32l4xx_hal.h"

void SystemClockConfig(void);

int main(void) {
	HAL_Init();
	SystemClockConfig();

	return 0;
}

void SystemClockConfig(void) {
	// TODO: Use it later
}
