#ifndef LIFO_H_
#define LIFO_H_

#define element_type unsigned int
#define size 5
//type definitions
typedef struct LIFO_BUFFER{
	unsigned int length;
	unsigned int count;
	element_type *base;
	element_type *head;
}LIFO_Buf_t;

typedef enum LIFO_STATUS{
	LIFO_NO_ERROR,
	LIFO_FULL,
	LIFO_EMPTY,
	LIFO_NULL
}LIFO_status;

//APIs
LIFO_status  LIFO_Init(LIFO_Buf_t *LIFO_Buf,element_type *buf, unsigned int length);
LIFO_status  LIFO_Destory(LIFO_Buf_t *LIFO_Buf);
LIFO_status  LIFO_Add_Item(LIFO_Buf_t *LIFO_Buf, element_type item);
LIFO_status  LIFO_Get_Item(LIFO_Buf_t *LIFO_Buf, element_type *item);
LIFO_status  LIFO_TOP(LIFO_Buf_t *LIFO_Buf,element_type *Top_item);
LIFO_status  LIFO_element_number(LIFO_Buf_t *LIFO_Buf,unsigned int *count_Stack);
LIFO_status  LIFO_Copy(LIFO_Buf_t *LIFO_Buf_Copy,LIFO_Buf_t *LIFO_Buf_Paste);
LIFO_status  LIFO_is_Full(LIFO_Buf_t *LIFO_Buf);
LIFO_status  LIFO_is_Empty(LIFO_Buf_t *LIFO_Buf);
void Display_All_Stack(LIFO_Buf_t *LIFO_Buf);
void Display_All_Stack_Reversed(LIFO_Buf_t *LIFO_Buf);

#endif