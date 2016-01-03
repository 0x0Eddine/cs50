#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void){

	printf("Whats your name? \n");
	string name = GetString();

	int len = strlen(name);		
	char init[len];
	init[0] = name[0]; // First initial
	int d = 1;

	for(int i = 1; i < len; i++ ){

	if (name[i] == ' '){ 

		
		//printf("One space found\n");
		//printf("Next Char: %c\n", (char) name[i+1]);
		init[d] = name[i+1];
		d++;
		}
	

	}

	
	for(int i = 0; i < d; i++){	
		printf("%c",(char) toupper(init[i]));	
	}

	printf("\n");


	return 0;

}















