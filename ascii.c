#include "stdio.h"
#include "string.h"
int main()
{

	printf("a-A = %d\n",'a'-'A');
	printf("B+1 = %c\n",'B'+  1);
	
	//-std=c99	
	for(int i='Z';i>='A';i--)
		printf("%c", i);
	printf("\n");

	char name[] = "eddine";	
	for(int i=0, j = strlen(name); i<j; i++)
	name[i] = name[i] + ('B'-'b');
	printf("%s\n", name);
	

	return 0;
}
