#include "ulp_riscv.h"
#include "ulp_riscv_utils.h"
#include "ulp_riscv_gpio.h"

int main (void)
{
    while(1)
    {
        ulp_riscv_gpio_output_level(GPIO_NUM_21, 1);
        ulp_riscv_delay_cycles(ULP_RISCV_CYCLES_PER_MS * 500);
        ulp_riscv_gpio_output_level(GPIO_NUM_21, 0);
        ulp_riscv_delay_cycles(ULP_RISCV_CYCLES_PER_MS * 500);
    }
}