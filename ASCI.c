#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char ch;
	int n;
	printf("\n enter any charcter");
	scanf("%c",&ch);
	if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
	{
		printf("\n %c is the small vovel",ch);
	}
	else if ((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
	{
		printf("\n %c is the capital vovel",ch);
		
	}
	 else if ((ch>=65)&&(ch<=90))
	{
		printf("its captial character",ch);
		
		}	0
	else if ((ch>=48)&&(ch<=57))

{
	printf(" its a number",ch);
	}	
	
	else {
		printf("\n its an another chacarter",ch);
		
	}
	return 0;
}
