#include "stdio.h"
int main(){

	/*
	df = 1101 1111
	6th bit determines if a letter is Uppercase (1) or 
	Lowercase(0).	
	*/
	
	char bitmask = 0xdf;
	char lowercase;
	char uppercase;

	printf("Please enter a lowercase letter: ");
	scanf("%c", &lowercase);	
	
	uppercase = (char)(lowercase & bitmask);
	printf("%c\n", uppercase);
	
	return 0;

}
