#include "stdio.h"

typedef struct Sstudent{
	char name[20];
	int roll_number;
	double marks;
	
}student_data;
/*
student_data Read_struct(void)
{
	student_data student;
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
	printf("for Roll number:  %d\n",stu[i].roll_number);
	printf("name:  %s\n",stu[i].name);
	printf("Marks: %lf\n",stu[i].marks);
}
*/
void Read_structuers_data(student_data stu[])
{
	int size = 10;
	for(int i=0;i<size;i++)
	{
	    stu[i].roll_number=i;
		printf("for Roll number:  %d\n",(stu[i].roll_number)+1);
	    printf("Entre name: ");
	    scanf("%s", stu[i].name);
	    printf("Entre Marks: ");
	    scanf("%lf",&stu[i].marks);
	}
}

void Display_Students_Data(student_data stu[])
{
	int size = 10;
	for(int i=0;i<size;i++)
	{
		printf("\n");
	    printf("Displaying Information: \n");
	    printf("for Roll number:  %d\n",(stu[i].roll_number)+1);
		printf("name:  %s\n",stu[i].name);
	    printf("Marks: %lf\n",stu[i].marks);
	}
}

int main(void)
{
	student_data students[10];
	Read_structuers_data(students);
	Display_Students_Data(students);
}