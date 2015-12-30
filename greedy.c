#include "stdio.h"
#include "cs50.h"
int main(void){
	
	printf("Hi, how much change is owed? ");
	float change = GetFloat();
	int d = 0;

	if (change > 0.24){
		
		do{
			change = change - 0.25;
			d++;
		}while(change > 0.24);		
	}		

	if (change > 0.09){

                do{
                        change = change - 0.10;
                        d++;
                }while(change > 0.09);
        }	
	
	if (change > 0.04){

                do{
                        change = change - 0.05;
                        d++;
                }while(change > 0.04);
        }

	if (change > 0.001){

                do{
                        change = change - 0.01;
                        d++;
                }while(change > 0.001);
        }


	
	//printf("Current change: %f\n", change); // for testing purposes
	printf("Coins: %d\n", d);
	
	return 0;
}

