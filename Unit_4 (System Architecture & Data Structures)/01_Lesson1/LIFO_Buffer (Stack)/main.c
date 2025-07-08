#include <stdio.h>
#include <stdlib.h>
#include "lifo.h"

int main(void)
{
	element_type i, data;
    element_type *uart_stack_buf;
	LIFO_Buf_t uart_stack;
	if(LIFO_Init(&uart_stack,uart_stack_buf,5) == LIFO_NO_ERROR)
		printf("stack initialized\n");

	for(i=0;i<sizeof(uart_stack_buf)+2;i++){
		if(LIFO_Add_Item(&uart_stack , i) == LIFO_NO_ERROR ){
			printf("\tadd (%X) in stack done\n",i);	
		}else
			printf("add (%X) in stack failed\n",i);
	}
	/*if(LIFO_Get_Item(&uart_stack,&data) == LIFO_NO_ERROR)
		printf("get data from stack: %x \n",data);*/
	Display_All_Stack_Reversed(&uart_stack);
	Display_All_Stack(&uart_stack);
	if(LIFO_Get_Item(&uart_stack,&data) == LIFO_NO_ERROR)
		printf("get data from stack: %x \n",data);
	if(LIFO_Get_Item(&uart_stack,&data) == LIFO_NO_ERROR)
		printf("get data from stack: %x \n",data);
	if(LIFO_Get_Item(&uart_stack,&data) == LIFO_NO_ERROR)
		printf("get data from stack: %x \n",data);
	if(LIFO_Get_Item(&uart_stack,&data) == LIFO_NO_ERROR)
		printf("get data from stack: %x \n",data);
	if(LIFO_Get_Item(&uart_stack,&data) == LIFO_NO_ERROR)
		printf("get data from stack: %x \n",data);
	if(LIFO_Get_Item(&uart_stack,&data) == LIFO_NO_ERROR)
		printf("get data from stack: %x \n",data);
	Display_All_Stack(&uart_stack);
	/*if(LIFO_Destory(&uart_stack)==LIFO_NULL)
		printf("-----------------<<<<<FINISH>>>>---------------------\n");*/
   
}