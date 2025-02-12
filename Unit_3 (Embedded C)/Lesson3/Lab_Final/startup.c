//startup.o
//Ahmed Abdallah Algharib

#include <stdint.h>

Default_Handler()
{
   	Reset_Handler();
}

extern int main(void);

void Reset_Handler();
void NMI_Handler() __attribute__((weak,alias("Default_Handler")));
void H_fault_Handler() __attribute__((weak,alias("Default_Handler")));
void MM_Fault_Handler() __attribute__((weak,alias("Default_Handler")));
void Bus_Fault() __attribute__((weak,alias("Default_Handler")));
void Usage_Fault_Handler() __attribute__((weak,alias("Default_Handler")));

uin32_t vector[] __attribute__((section(".vectors"))) = {
	(uin32_t) 0x20000000,
	(uin32_t) &Reset_Handler,
	(uin32_t) &NMI_Handler,
	(uin32_t) &H_fault_Handler,
	(uin32_t) &MM_Fault_Handler,
	(uin32_t) &Bus_Fault,
	(uin32_t) &Usage_Fault_Handler
	
};


void Reset_Handler()
{
	main();
}
void NMI_Handler();
void H_fault_Handler();
void MM_Fault_Handler();
void Bus_Fault();
void Usage_Fault_Handler();
