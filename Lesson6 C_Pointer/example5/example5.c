#include <stdio.h>
#include <string.h>

typedef struct SEmployee {
    char *name;
    int id;
}employee;


int main(void)
{
    employee ahmed={"ahmed abdallah",1023};
	employee mohamed={"mohamed abdallah",1024};
	employee khaled={"khaled abdallah",1025};
	employee hamdy={"hamdy abdallah",1026};
	employee mohsen={"mohsen abdallah",1027};
	
	employee *Employess[5]={&ahmed,&mohamed,&khaled,&hamdy,&mohsen};
	employee (*(*pt)[5])=&Employess;
	/*I was fixing crash but by using malloc could i use any another method   */
	/*
	for (int i = 0; i < 5; i++) {
        printf("Enter name for Employee %d: ", i + 1);
        gets((*(Employess+i))->name);
        printf("Enter ID for Employee %d: ", i + 1);
        scanf("%d", &(*Employess+i)->id);
    }*/
	
	
	printf("\nEmployees Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee Name: %s\n", (*(Employess+i))->name);
        printf("Employee ID: %d\n", (*(Employess+i))->id);
    }
	
	printf("\nEmployees Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee Name: %s\n", (*(*(pt)+i))->name);
        printf("Employee ID: %d\n", (*(*(pt)+i))->id);
    }
}