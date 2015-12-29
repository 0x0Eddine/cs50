#include <stdio.h>
#include "cs50.h"

int main(void){
     
    printf("Height: ");
    int h = GetInt();
    if (h>0 && h<23){
    	for (int l = 1, c = 0 ; l <= h ; l++){
		
        	for (c = 0 ; c < h - l ; c++)
         		printf(" ");
             
       		for (c = 0 ; c <= l ; c++) 
       			printf("#");
       			printf("\n");
    }}

	return 0;
}
