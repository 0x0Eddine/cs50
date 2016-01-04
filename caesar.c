#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void encrypt();

int main(int argc, string argv[]){

    
    if (argc != 2){  
        printf("Some arguments please!\n");
        return 1;
    }
    
    int k = atoi(argv[1]);

   
    printf("What would you like to encrypt?\n");
    printf("Text: ");
    string txt = GetString();  

    printf("Encrypted text: ");
    encrypt(txt,k); 
    
    printf("\n");
    return 0;
}


void encrypt(string s, int c){


    for(int i = 0, n = strlen(s); i < n; i++ ){


        if (s[i] == ' '){
 
           printf(" ");

        }else if (islower(s[i])){
    
            int a = s[i];
            int b = (a - 97 + c) % 26;
            printf("%c", b + 97);        
        
        }else if (isupper(s[i])){

            int a = s[i];
            int b = (a - 65 + c) % 26;
            printf("%c", b + 65);

        }else{
            
            printf("%c", s[i]);        
        }

        
     
    }
}





















