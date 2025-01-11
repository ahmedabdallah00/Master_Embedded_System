#include "stdio.h"

typedef struct Sstudent{
	char name[20];
	int roll_number;
	double marks;
	
}student_data;

student_data Read_struct(void)
{
	student_data student;
	printf("Entre Information of Students: \n");
	printf("Entre name: ");
	gets(student.name);
	printf("Entre Roll Number: ");
	scanf("%d",&student.roll_number);
	printf("Entre Marks: ");
	scanf("%lf",&student.marks);
	return student;
}

void Display_Student_Data(student_data stu)
{
	printf("\n");
	printf("Displaying Information: \n");
	printf("name:  %s\n",stu.name);
	printf("Roll:  %d\n",stu.roll_number);
	printf("Marks: %lf\n",stu.marks);
}

void Read_struct_pointer(student_data *S)
{
	printf("\n");
	printf("Entre Information of Students: \n");
	printf("Entre name: ");
	gets(S->name);
	printf("Entre Roll Number: ");
	scanf("%d",&S->roll_number);
	printf("Entre Marks: ");
	scanf("%lf",&S->marks);
	
}

void Display_Student_Data_poniter(student_data *S)
{
	printf("\n");
	printf("Displaying Information: \n");
	printf("name:  %s\n",S->name);
	printf("Roll:  %d\n",S->roll_number);
	printf("Marks: %lf\n",S->marks);
}

void ADD_STUDENT_INFORMATION(student_data *s)
{
	Read_struct_pointer(s);
	Display_Student_Data_poniter(s);
}

int main(void)
{
	student_data S1,S2;
	S1=Read_struct();
	Display_Student_Data(S1);
	ADD_STUDENT_INFORMATION(&S2);
}