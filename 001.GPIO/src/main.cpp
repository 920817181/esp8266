#include <Arduino.h>

#include "ets_sys.h"
#include "osapi.h"
#include "user_interface.h"


///< 只运行一次
void setup()
{

	// Step 1) 配置管脚5为GPIO模式 
	PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO2_U, FUNC_GPIO2);
	GPIO_OUTPUT_SET(GPIO_ID_PIN(2), 1);
}

///< 循环运行
void loop()
{
	// put your main code here, to run repeatedly:

	GPIO_OUTPUT_SET(GPIO_ID_PIN(2), 0);
	os_delay_us(500000);
	GPIO_OUTPUT_SET(GPIO_ID_PIN(2), 1);
	os_delay_us(500000);
}
