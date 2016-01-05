//Vigenere's Cipher

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void vigenere();

int main(int argc, string argv[]){

    if (argc != 2){
        printf("Add arguments to the CLI\n");
        return 1;
    }
    
    string k = argv[1];
    

    printf("Txt: ");
    string txt = GetString();
    printf("Vigenere Encrypted: ");    
    vigenere(txt, k);
    
    printf("\n");
    return 0;
}

void vigenere(string s, string c){

                

        for(int i = 0,q = 0, n = strlen(s), d, t; i < n; i++, q++){  
    
        if(q > strlen(c)){
            
            q = 0;

        }

        d = c[q];        

        if(!isalpha(s[i])){
        
            q = q - 1;
        }
        
        if (isupper(d)){

            d = d - 65;
        }
        if (islower(d)){
            
            d = d - 97;        
        }
        
        t = s[i] + d;
        
        if(isupper(s[i]) && (t > 'Z')){
            
            t = t - 26;

        }
    
        if(islower(s[i]) && (t > 'z')){

            t = t - 26;
        }
        
        if(isalpha(s[i])){
            
            printf("%c", t);
        }
        
        else{
        
            printf("%c", s[i]);
        }
    }     
}


