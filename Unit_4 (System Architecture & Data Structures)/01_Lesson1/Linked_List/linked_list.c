#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

Sstudent *Data_base = NULL;
int addStudent()
{
	Sstudent* NewStudent;
	Sstudent* LastStudent;
	Sstudent* SearchStudent = Data_base;
	char temp[30];
	printf("Enter student ID: ");
	gets(temp);
	if(Data_base == NULL){
		NewStudent =(Sstudent*) malloc(sizeof(Sstudent));
		Data_base = NewStudent ;
	}
	else{
		while(SearchStudent){
			if(SearchStudent){
				printf("\t\"id is exist please try again\"\n");
				return 1;
			}
			SearchStudent=SearchStudent->next;
		}
		LastStudent = gpFirstStudent;
		while(LastStudent->next)
			LastStudent=LastStudent->next;
		NewStudent = (Sstudent*)malloc(sizeof(Sstudent));
		LastStudent->next = NewStudent;
	}
}
int deleteStudent()
{
	if(Data_base){
		char temp[30];
		unsigned int selected_id;
		
		printf("Enter Student ID:");
		gets(temp);
		selected_id = atoi(temp);
		
		Sstudent* SelectStudent = Data_base;
		Sstudent* PrevStudent = NULL;
		
		while(SelectStudent){
			if(SelectStudent->student.id == selected_id){
				if(PrevStudent){
					PrevStudent->next=SelectStudent->next;
				}
				else{
					Data_base=SelectStudent->next;
				}
				free(SelectStudent);
				return 1 ;
			}
			
			PrevStudent=SelectStudent;
			SelectStudent=SelectStudent->next;
		}
		//if id not match any id in data base
		printf("Student ID not found in database\n");
		return 0;
	}
	// if database is empty From the beginning
	printf("\t\"Database is empty\"\n");
	return 0 ;
}
void printAllStudent()
{
	Sstudent* CurrentStudent = Data_base;

	if(Data_base == NULL){
		printf("not found any student in database to print\n");
	}
	// if database contain student print then loop until reach to null
	else{
		while(CurrentStudent){
			printf("\tstudent ID : %d\n",CurrentStudent->student.id);
			printf("\tstudent Name : %s\n",CurrentStudent->student.name);
			printf("\tstudent Age : %d\n",CurrentStudent->student.age);
			printf("\t-----------------\n");
			// to refer to next student before print current student
			CurrentStudent=CurrentStudent->next;
		}
	}
}
void deleteAllStudent()
{
	Sstudent* CurrentStudent = Data_base;
	if(Data_base == NULL){
		printf("not found any student in database to delete\n");
	}
	else{
		while(CurrentStudent){
			Sstudent* Temp = CurrentStudent;
			CurrentStudent=CurrentStudent->next;
			free(Temp);
		}
		// set first student to null ( database is free )
		gpFirstStudent = NULL;
	}
}
void printStudent()
{
	Sstudent* IndexStudent = Data_base;
	char index [5];
	printf("please index number of student: ");
	gets(index);
	int count = 1;
	while(IndexStudent){
		if(count==atoi(index)){
			break;
		}
		IndexStudent = IndexStudent->next;
		count++;

	}
	if(count == atoi(index)){
		printf("\tstudent ID : %d\n",pIndexStudent->student.id);
		printf("\tstudent Name : %s\n",pIndexStudent->student.name);
		printf("\tstudent Age : %d\n",pIndexStudent->student.age);
		printf("\t-----------------\n");
	}
	else{
		printf("this index not found in database\n");
	}
}
void nodesnumber()
{
	Sstudent* nodesnumber = Data_base;
	int count = 1;
	while(nodesnumber->nect){
		count++;
		nodesnumber = nodesnumber->next;
	}
	printf(" length of student database equal : %d node",count);
	printf("\n");
}
void printStudentRev()
{
	char index_rev[5];
	int len=1;
	int count=1;
	int index;
	Sstudent* pIndexStudent = Data_base;
	Sstudent* pStudentRev = Data_base;
	printf("please rev_index number of student: ");
	gets(index_rev);
	while(pStudentRev->next){
		len++;
		pStudentRev = pStudentRev->next;
	}

	index=(len-atoi(index_rev)+1);
	while(pIndexStudent){
		if(count==index){
			break;
		}
		pIndexStudent = pIndexStudent->next;
		count++;
	}
	if(count == index){
		printf("\tstudent ID : %d\n",pIndexStudent->student.id);
		printf("\tstudent Name : %s\n",pIndexStudent->student.name);
		printf("\tstudent Age : %d\n",pIndexStudent->student.age);
		printf("\t-----------------\n");
	}
	else{
		printf("this index not found in database\n");
	}
}
