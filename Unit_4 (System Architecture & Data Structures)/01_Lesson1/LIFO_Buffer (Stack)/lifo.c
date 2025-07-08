#include <stdio.h>
#include <stdlib.h>
#include "lifo.h"

LIFO_status LIFO_is_Full(LIFO_Buf_t *LIFO_Buf)
{
	if(LIFO_Buf==NULL)
	{
		return LIFO_NULL;
	}
	if(LIFO_Buf->count == LIFO_Buf->length)
	{
		return LIFO_FULL;
	}
	return LIFO_NO_ERROR;
}
LIFO_status LIFO_is_Empty(LIFO_Buf_t *LIFO_Buf)
{
	if(LIFO_Buf==NULL)
	{
		return LIFO_NULL;
	}
	/*or if(LIFO_Buf->head==LIFO_Buf->base)*/
	if(LIFO_Buf->count==0)
	{
		return LIFO_EMPTY;
	}
	return LIFO_NO_ERROR;
}

LIFO_status LIFO_Init(LIFO_Buf_t *LIFO_Buf,element_type *buf, unsigned int length)
{
	if(buf == NULL)
	{
		return LIFO_NULL;
	}
	LIFO_Buf->length=length;
	LIFO_Buf->count=0;
	LIFO_Buf->base=buf;
	LIFO_Buf->head=buf;
	
	return LIFO_NO_ERROR;
}

LIFO_status LIFO_Destory(LIFO_Buf_t *LIFO_Buf)
{
	if(LIFO_Buf==NULL)
	{
		return LIFO_NULL;
	}
	else
	{
		/*Sometimes Crashed*/
		LIFO_Buf->length=0;
	    LIFO_Buf->count=0;
	    LIFO_Buf->base=NULL;
	    LIFO_Buf->head=NULL;
		free(LIFO_Buf->base);
		printf("----------------<<<<LIFO DESTROYED SUCCESSFULLY>>>>--------------------\n");
	}
	return LIFO_NULL;
}

LIFO_status LIFO_Add_Item(LIFO_Buf_t *LIFO_Buf, element_type item)
{
	if(!LIFO_Buf->base || !LIFO_Buf->head)
	{
		return LIFO_NULL;
	}
	if(LIFO_Buf->count == LIFO_Buf->length)
	{
		return LIFO_FULL;
	}
	*(LIFO_Buf->head) =item;
	LIFO_Buf->head++;
	LIFO_Buf->count++;
	return LIFO_NO_ERROR;
}
LIFO_status LIFO_Get_Item(LIFO_Buf_t *LIFO_Buf, element_type *item)
{
	if(!LIFO_Buf->base || !LIFO_Buf->head)
	{
		return LIFO_NULL;
	}
	if(LIFO_is_Empty(LIFO_Buf))
	{
		return LIFO_EMPTY;
	}
	LIFO_Buf->head--;
	*item =*(LIFO_Buf->head);
	LIFO_Buf->count--;
	return LIFO_NO_ERROR;
}
LIFO_status  LIFO_TOP(LIFO_Buf_t *LIFO_Buf,element_type *Top_item)
{
	
	if(LIFO_Buf=NULL)
	{
		return LIFO_NULL;
	}
	if(LIFO_Buf->count=0)
	{
		Top_item=0;
		return LIFO_EMPTY;
	}
	LIFO_Buf->head--;
	*Top_item= *(LIFO_Buf->head);
	LIFO_Buf->head++;
	return LIFO_NO_ERROR;
}
LIFO_status  LIFO_element_number(LIFO_Buf_t *LIFO_Buf,unsigned int *count_Stack)
{
	if(LIFO_Buf=NULL)
	{
	    *count_Stack=-1;
		return LIFO_NULL;
	}
	if(LIFO_Buf->count==0)
	{
	    *count_Stack=0;
		return LIFO_EMPTY;
	}
	if(LIFO_Buf->count==LIFO_Buf->length)
	{
	    *count_Stack=LIFO_Buf->length;
		return LIFO_FULL;
	}
	*count_Stack==LIFO_Buf->length;
	return LIFO_NO_ERROR;
}

LIFO_status  LIFO_Copy(LIFO_Buf_t *LIFO_Buf_Copy,LIFO_Buf_t *LIFO_Buf_Paste)
{
	element_type *temp,*temp2;
	if(LIFO_Buf_Copy==NULL || LIFO_Buf_Paste==NULL)
	{
		return LIFO_NULL;
	}
	
	if(LIFO_Buf_Copy->count==0 && LIFO_Buf_Copy->count==LIFO_Buf_Paste->count)
	{
		printf("--------------<Nothing TO Copy>----------------");
		return LIFO_EMPTY;
	}
	temp = LIFO_Buf_Copy->base;
	temp2 = LIFO_Buf_Paste->base;
	while(LIFO_Buf_Copy->head != temp)
	{
		*temp2 = *temp;
		printf("\tprint from address 0x%X stack the data:%d has been copy to 0x%X address and data is \n",temp,*temp,temp2,*temp2);
		temp++;
		temp2++;
	}
}

void Display_All_Stack(LIFO_Buf_t *LIFO_Buf)
{
	element_type* temp;
	if(LIFO_is_Empty(LIFO_Buf))
	{
		printf("----------------<<<<LIFO IS Empty>>>>--------------------\n");
	}
	else
		temp = LIFO_Buf->base;
	while(LIFO_Buf->head != temp)
	{
		printf("\tprint from address 0x%X stack the data:%d \n",temp,*temp);
		temp++;
	}
	
}
void Display_All_Stack_Reversed(LIFO_Buf_t *LIFO_Buf)
{
	element_type* temp;
	if(LIFO_is_Empty(LIFO_Buf))
	{
		printf("----------------<<<<LIFO IS Empty>>>>--------------------\n");
	}
	else
		temp = LIFO_Buf->head;
	while(LIFO_Buf->base != temp)
	{
		temp--;
		printf("\tprint from address 0x%X stack the data:%d \n",temp,*temp);
	}
	printf("----------------<<<<LIFO End>>>>--------------------\n");
	
}