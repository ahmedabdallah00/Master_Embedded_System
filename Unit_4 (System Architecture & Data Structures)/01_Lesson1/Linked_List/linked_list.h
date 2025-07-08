#ifndef LIFO_H_
#define LIFO_H_

#define element_type unsigned int
#define name_size 30
//type definitions
typedef struct Student_Data{
	unsigned int id;
	char name[name_size];
	unsigned int age;
}Sdata;

typedef struct Linked_list_series{
	Sdata student;
	Sstudent *next;
	
}Sstudent;

typedef enum SERIES_STATUS{
	Series_NO_ERROR,
	Series_FULL,
	Series_EMPTY,
	Series_NULL
}Series_status;

//APIs
int addStudent();
int deleteStudent();
void printAllStudent();
void deleteAllStudent();
void printStudent();
void nodesnumber();
void printStudentRev();

#endif