#include "queue.h"
#include "stdio.h"

FIFO_status FIFO_is_Full(FIFO_Buf_t *FIFO_Buf)
{
	if(!FIFO_Buf->base && !FIFO_Buf->head && !FIFO_Buf->tail)
	{
		return FIFO_NULL;
	}
	if(FIFO_Buf->count == FIFO_Buf->length)
	{
		return FIFO_FULL;
	}
	return FIFO_NO_ERROR;
}
FIFO_status FIFO_is_Empty(FIFO_Buf_t *FIFO_Buf)
{
	if(!FIFO_Buf->base && !FIFO_Buf->head && !FIFO_Buf->tail)
	{
		return FIFO_NULL;
	}
	if(FIFO_Buf->count == 0)
	{
		return FIFO_EMPTY;
	}
	return FIFO_NO_ERROR;
}

FIFO_status  FIFO_Init(FIFO_Buf_t *FIFO_Buf,element_type *buf, unsigned int length)
{
   if(buf == NULL)
   {
	   return FIFO_NULL;
   }	   
   FIFO_Buf->base = buf;
   FIFO_Buf->head = buf;
   FIFO_Buf->tail = buf;
   FIFO_Buf->length = length;
   FIFO_Buf->count = 0;
   
   return FIFO_NO_ERROR;
   
}
FIFO_status  FIFO_Destory(FIFO_Buf_t *FIFO_Buf)
{
	if(FIFO_Buf == NULL)
   {
	   return FIFO_NULL;
   }
   else
	{
		/*Sometimes Crashed*/
		FIFO_Buf->length=0;
	    FIFO_Buf->count=0;
	    FIFO_Buf->base=NULL;
	    FIFO_Buf->head=NULL;
		FIFO_Buf->tail=NULL;
		free(FIFO_Buf->base);
		printf("----------------<<<<FIFO DESTROYED SUCCESSFULLY>>>>--------------------\n");
	}
}
FIFO_status  FIFO_Add_Item(FIFO_Buf_t *FIFO_Buf, element_type item)
{
	if(!FIFO_Buf->base || !FIFO_Buf->head || !FIFO_Buf->tail)
	{
		return FIFO_NULL;
	}
	if(FIFO_is_Full(FIFO_Buf) == FIFO_FULL)
	{
		return FIFO_FULL;
	}
	*(FIFO_Buf->head) =item;
	FIFO_Buf->count++;
	
	if(FIFO_Buf->head == (FIFO_Buf->base + (FIFO_Buf->length * sizeof(element_type)))
	{
		FIFO_Buf->head = FIFO_Buf->base ;
	}
	else
	{
		FIFO_Buf->head++;
	}
	return FIFO_NO_ERROR;
}
FIFO_status  FIFO_Get_Item(FIFO_Buf_t *FIFO_Buf, element_type *item)
{
	if(!FIFO_Buf->base || !FIFO_Buf->head || !FIFO_Buf->tail)
	{
		return FIFO_NULL;
	}
	if(FIFO_is_Empty(FIFO_Buf) == FIFO_EMPTY)
	{
		return FIFO_EMPTY;
	}
	*item = *(FIFO_Buf->tail);
	FIFO_Buf->count--;
	if(FIFO_Buf->tail == (FIFO_Buf->base + (FIFO_Buf->length * sizeof(element_type)))
	{
		FIFO_Buf->tail = FIFO_Buf->base;
	}
	else{
		FIFO_Buf->tail++;
	}
	return FIFO_NO_ERROR;
}
FIFO_status  FIFO_TOP(FIFO_Buf_t *FIFO_Buf,element_type *Top_item);
FIFO_status  FIFO_element_number(FIFO_Buf_t *FIFO_Buf,unsigned int *count_queue);
FIFO_status  FIFO_Copy(FIFO_Buf_t *FIFO_Buf_Copy,FIFO_Buf_t *FIFO_Buf_Paste);
FIFO_status  FIFO_Copy_reverse(FIFO_Buf_t *FIFO_Buf_Copy,FIFO_Buf_t *FIFO_Buf_Paste);

void Display_All_Queue(FIFO_Buf_t *FIFO_Buf)
{
	element_type *temp;
	element_type i;
	if(FIFO_is_Empty(FIFO_Buf) == FIFO_EMPTY)
	{
		printf("--------------<Nothing TO Copy>----------------");
		printf("--------------<Queue is EMPTY>----------------");
	}
	else
	{
		temp = FIFO_Buf->tail;
		for(i=0;i<FIFO_Buf->count;i++)
		{
			printf("\tprint from queue: %x \n",*temp);
		    temp++;
		}
	}
	printf("----------------<<<<LIFO End>>>>--------------------\n");
}
void Display_All_Queue_Reversed(FIFO_Buf_t *FIFO_Buf)
{
	element_type *temp;
	element_type i;
	if(FIFO_is_Empty(FIFO_Buf) == FIFO_EMPTY)
	{
		printf("--------------<Nothing TO Copy>----------------");
		printf("--------------<Queue is EMPTY>----------------");
	}
	else
	{
		temp = FIFO_Buf->head;
		for(i=FIFO_Buf->count;i>0;i--)
		{
			printf("\tprint from queue: %x \n",*temp);
		    temp--;
		}
	}
	printf("----------------<<<<LIFO End>>>>--------------------\n");
}