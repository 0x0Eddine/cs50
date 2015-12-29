#include "stdio.h"
#include "cs50.h"

int main(void){

	printf("Minutes:  ");
	int time = GetInt();	
	int bottles = (time*1.5*128)/16;
	printf("Bottles: %i\n", bottles);


	return 0;
}

