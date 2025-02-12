#include <stdint.h>

extern int main(void);
extern unsigned int _E_text ;
extern unsigned int _S_data ;
extern unsigned int _E_data ;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;
static unsigned long stack_top[256] ;

void Reset_Handler()
{   
     int i ;
	//we need to copy data section from flash to ram
	unsigned int DATA_size = (unsigned char*)&_E_data - (unsigned char*)&_S_data; // casting to tell that is add of char to copy byte by byte 
	unsigned char* p_src = (unsigned char*)&_E_text ;
	unsigned char* p_dst = (unsigned char*)&_S_data ;
	for (i=0; i< DATA_size; i++)
	{
		*((unsigned char*)p_dst++) = *((unsigned char*)p_src++);
	}
	// init .bss section in sram = 0
	unsigned int BSS_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss;
	p_dst = (unsigned char*)&_S_bss; 
	for (i=0; i< BSS_size; i++)
	{
		*((unsigned char*)p_dst++) = (unsigned char)0; 
    }                                                  
	
	// jump main
	main();
}

void Reset_Handler();
extern int main(void);

void Default_Handler()
{
	Reset_Handler();
}

void NMI_Handler()__attribute__((weak,alias("Default_Handler")));
void H_fault_Handler()__attribute__((weak,alias("Default_Handler")));

static unsigned long Stack_top[256];

void (* const g_p_fn_vectors[])()__attribute__((section(".vectors")))=
{
	(void (*)()) ((unsigned long) Stack_top+sizeof(Stack_top)),
	&Reset_Handler,
	&NMI_Handler,
	&H_fault_Handler
};

