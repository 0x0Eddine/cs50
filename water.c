#include "stdio.h"
int main(void){


	while(1){	

	printf("How long was your shower? ");
	int time;
	scanf("%i", &time);	

	if (time > 0){
		int bottles = (time*1.5*128)/16;
		printf("Bottles: %i\n", bottles);
		}

	else {
                printf("Retry:\n");
		
	        }
	}


	return 0;
}

