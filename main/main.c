#include "main.h"
#include "mcp2515.h"

void SystemClock_Config(void);

int main(void)
{
    HAL_Init();
    SystemClock_Config();

    mcp2515_t mcp2515;
    mcp2515_initialize(&mcp2515, 0, 0);

    while (1) {
        ;
    }
}