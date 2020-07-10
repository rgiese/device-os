
#include "testapi.h"

test(i2c_hal_backwards_compatibility)
{
    // These APIs are exposed to user application.
    API_COMPILE(HAL_I2C_Init(HAL_I2C_INTERFACE1, NULL));
    API_COMPILE(HAL_I2C_Set_Speed(HAL_I2C_INTERFACE1, 0, NULL));
    API_COMPILE(HAL_I2C_Enable_DMA_Mode(HAL_I2C_INTERFACE1, 0, NULL));
    API_COMPILE(HAL_I2C_Stretch_Clock(HAL_I2C_INTERFACE1, 0, NULL));
    API_COMPILE(HAL_I2C_Begin(HAL_I2C_INTERFACE1, I2C_MODE_MASTER, 0, NULL));
    API_COMPILE(HAL_I2C_End(HAL_I2C_INTERFACE1, NULL));
    API_COMPILE(HAL_I2C_Request_Data(HAL_I2C_INTERFACE1, 0, 0, 0, NULL));
    API_COMPILE(HAL_I2C_Request_Data_Ex(HAL_I2C_INTERFACE1, NULL, NULL));
    API_COMPILE(HAL_I2C_Begin_Transmission(HAL_I2C_INTERFACE1, 0, NULL));
    API_COMPILE(HAL_I2C_End_Transmission(HAL_I2C_INTERFACE1, 0, NULL));
    API_COMPILE(HAL_I2C_Write_Data(HAL_I2C_INTERFACE1, 0, NULL));
    API_COMPILE(HAL_I2C_Available_Data(HAL_I2C_INTERFACE1, NULL));
    API_COMPILE(HAL_I2C_Read_Data(HAL_I2C_INTERFACE1, NULL));
    API_COMPILE(HAL_I2C_Peek_Data(HAL_I2C_INTERFACE1, NULL));
    API_COMPILE(HAL_I2C_Flush_Data(HAL_I2C_INTERFACE1, NULL));
    API_COMPILE(HAL_I2C_Is_Enabled(HAL_I2C_INTERFACE1, NULL));
    API_COMPILE(HAL_I2C_Set_Callback_On_Receive(HAL_I2C_INTERFACE1, NULL, NULL));
    API_COMPILE(HAL_I2C_Set_Callback_On_Request(HAL_I2C_INTERFACE1, NULL, NULL));
    API_COMPILE(HAL_I2C_Reset(HAL_I2C_INTERFACE1, 0, NULL));
    API_COMPILE(HAL_I2C_Acquire(HAL_I2C_INTERFACE1, NULL));
    API_COMPILE(HAL_I2C_Release(HAL_I2C_INTERFACE1, NULL)); 
}
