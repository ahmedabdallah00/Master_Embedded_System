#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"
#include "school.h"

int main(){
	char temp[10];
	while(1){
		printf("\tSELECT YOUR OPTION\n");
		printf("1:Add Student\n");
		printf("2:Delete Student\n");
		printf("3:print All Student\n");
		printf("4:Delete All Student\n");
		printf("5:print Student using index\n");
		printf("6:print length of student database\n");
		printf("7:print student with reverse index\n");
		printf("\n  Enter option number: ");
		gets(temp);
		printf("\n");
		switch(atoi(temp))
		{
		case 1:
			addStudent();
			break;
		case 2:
			deleteStudent();
			break;
		case 3:
			printAllStudent();
			break;
		case 4:
			deleteAllStudent();
			break;
		case 5:
			printStudent();
			break;
		case 6:
			nodesnumber();
			break;
		case 7:
			printStudentRev();
			break;
		default:
			printf("\t\"WRONG OPTION PLEASE TRY AGAIN\"\n");
			break;
		}
		printf(" ============================================\n");
	}
	return 0;
}