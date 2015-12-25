#include "stdio.h"
int main()
{
	char c;	
	printf("Please enter a alphabetical character: \n");
	scanf("%c", &c);	

	if (c>65 && c<90){
		printf("Thanks for the uppercase letter!\n");
	}else if (c>97 && c<122){
		printf("Thanks for the lowercase letter!\n");
	}	

	return 0;
}

