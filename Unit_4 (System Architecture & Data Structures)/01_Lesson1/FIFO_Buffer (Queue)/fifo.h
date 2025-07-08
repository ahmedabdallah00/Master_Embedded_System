#ifndef LIFO_H_
#define LIFO_H_

#define element_type unsigned int
#define size 5
//type definitions
typedef struct FIFO_BUFFER{
	unsigned int length;
	unsigned int count;
	element_type *base;
	element_type *head;
	element_type *tail;
}FIFO_Buf_t;

typedef enum FIFO_STATUS{
	FIFO_NO_ERROR,
	FIFO_FULL,
	FIFO_EMPTY,
	FIFO_NULL
}FIFO_status;

//APIs
FIFO_status  FIFO_Init(FIFO_Buf_t *FIFO_Buf,element_type *buf, unsigned int length);
FIFO_status  FIFO_Destory(FIFO_Buf_t *FIFO_Buf);
FIFO_status  FIFO_Add_Item(FIFO_Buf_t *FIFO_Buf, element_type item);
FIFO_status  FIFO_Get_Item(FIFO_Buf_t *FIFO_Buf, element_type *item);
FIFO_status  FIFO_TOP(FIFO_Buf_t *FIFO_Buf,element_type *Top_item);
FIFO_status  FIFO_element_number(FIFO_Buf_t *FIFO_Buf,unsigned int *count_queue);
FIFO_status  FIFO_Copy(FIFO_Buf_t *FIFO_Buf_Copy,FIFO_Buf_t *FIFO_Buf_Paste);
FIFO_status  FIFO_Copy_reverse(FIFO_Buf_t *FIFO_Buf_Copy,FIFO_Buf_t *FIFO_Buf_Paste);
FIFO_status  FIFO_is_Full(FIFO_Buf_t *FIFO_Buf);
FIFO_status  FIFO_is_Empty(FIFO_Buf_t *FIFO_Buf);
void Display_All_Queue(FIFO_Buf_t *FIFO_Buf);
void Display_All_Queue_Reversed(FIFO_Buf_t *FIFO_Buf);

#endif