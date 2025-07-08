#include <stdio.h>
#include <stdlib.h>
#include "fifo.h"

int main(void) {
	element_type i, data;
	FIFO_Buf_t uart_queue;
		if(FIFO_Init(&uart_queue,uart_queue_buf,5) == FIFO_NO_ERROR)
			printf("queue initialized\n");

		for(i=0;i<sizeof(uart_queue_buf)+2;i++){
			if(FIFO_Add_Item(&uart_queue , i) == FIFO_NO_ERROR ){
				printf("\tadd (%X) in queue done\n",i);
			}else
				printf("add (%X) in queue failed\n",i);
		}
		Display_All_Queue(&uart_queue);
		if(FIFO_Get_Item(&uart_queue,&data) == FIFO_NO_ERROR)
			printf("get data from queue: %x \n",data);
		if(FIFO_Get_Item(&uart_queue,&data) == FIFO_NO_ERROR)
			printf("get data from queue: %x \n",data);
		Display_All_Queue(&uart_queue);


}