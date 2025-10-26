#include <stdio.h>
#include <stdlib.h>

void converteParaMaiusculas(char *);

int main(){
    char string[] = "caracteres";
   
    printf("A string antes da conversao e: %s\n",string);
    converteParaMaiusculas(string);
   
    printf("A string apos a conversao e: %s\n",string);    
   
    return 0;
}

void converteParaMaiusculas(char *s){
    while(*s != '\0'){
        if(*s >= 'a' && *s <= 'z')
            *s -= 32;    //converte para letra maiúscula ASCII
        ++s;    //incrementa s para apontar para o próximo caractere
    }
}
