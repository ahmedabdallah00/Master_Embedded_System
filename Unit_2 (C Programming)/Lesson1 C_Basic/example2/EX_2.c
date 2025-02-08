#include "stdio.h"
#define EX_1 0
#define EX_2 1

#define Frist_Solution 1
#define Second_Solution 0

int main(void)
{

#if EX_2
    #if Frist_Solution
 	char c;
	printf("please enter letter to check it: ");
	
	scanf("%c",&c);
    if(c =='a' || c =='i' || c=='e' || c=='o' || c=='u'||c =='A' || c =='I' || c=='E' || c=='O' || c=='U')
    {
    	printf("letter %c is vowel",c);
    }
    else
    {
    	printf("letter %c is consonant",c);
    }

   #endif
   #if Second_Solution
    char letter;
    printf("please enter letter to check it: ");
    fflush(stdin);fflush(stdout);
    scanf("%c",&letter);
    (c =='a' || c =='i' || c=='e' || c=='o' || c=='u'||c =='A' || c =='I' || c=='E' || c=='O' || c=='U') ? printf("letter %c is vowel",&letter):printf("letter %c is consonant",&letter);
  #endif
#endif
}