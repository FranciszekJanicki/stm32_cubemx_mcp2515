#include "main.h"
#include "mcp2515.h"

void SystemClock_Config(void);

int main(void)
{
    HAL_Init();
    SystemClock_Config();

    volatile mcp2515_t mcp2515;
}