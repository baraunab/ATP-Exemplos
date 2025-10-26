#include <stdio.h>
#include <stdlib.h>

void  funcao1(int);
void  funcao2(int);
void  funcao3(int);

int main(){
    //inicializa array de 3 ponteiros para funções
    //que usamum argumento int e retornam void
    void (*f[3])(int) ={funcao1, funcao2, funcao3};
    int opcao;
   
    printf("Digite um numero entre 0 e 2, 3 para finalizar: ");
    scanf("%d",&opcao);
   
    while(opcao >= 0 && opcao <3){
        //chama a função para o local selecionado do array f e passa
        //opção como argumento
        (*f[opcao])(opcao);
        printf("Digite um numero entre 0 e 2, 3 para finalizar: ");
        scanf("%d",&opcao);
    }
   
    printf("Voce digitou 3 para finalizar\n");
   
    return 0;
}

void funcao1(int a){
    printf("Voce digitou %d e funcao1 foi chamada\n\n", a);
}

void funcao2(int b){
    printf("Voce digitou %d e funcao2 foi chamada\n\n", b);
}

void funcao3(int c){
    printf("Voce digitou %d e funcao3 foi chamada\n\n", c);
}
