// Implementaremos aqui a interface entre o usuario e o programa
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matriz.h"

int selecao();
Matriz2x2 gerar_matriz();

int main(){
    printf("BEM VINDO! -CAÇADOR DE SOLUÇÃO DE SISTEMA LINEAR-\n");
    Matriz2x2 matrizatual;
    // Indica se a matriz atual já foi definida
    char matrizatualdef=0;

    while(1){
        int s = selecao();

        if(s==-1);
        else if(s==0) break;
        else if(s==1);
        else if(s==2){
            matrizatual = gerar_matriz();
            matrizatualdef = 1; 
        }
        else if(s==3){
            if(matrizatualdef) printf("%f\t%f\n%f\t%f\n", 
                                matrizatual.valores[0][0], matrizatual.valores[0][1],
                                matrizatual.valores[1][0], matrizatual.valores[1][1]);
            else{
                printf("Matriz não definida :(\n");
                printf("Use \'gerarmatriz\' para definir uma matriz atual ;)\n");
            }
        }
        else;

        while(getchar()!='\n');
    }

    return 0;
}

int selecao(){
    char input[50];
    printf("\n(C2 muito top)>> ");
    scanf("%s", input);

    if(!strcmp(input, "ajuda")){
        printf("COMANDOS:\n");
        printf(">> ajuda: mostra essa mensagem que você está lendo\n");
        printf(">> sair: sair do programa\n");
        printf(">> gerarmatriz: muda a matriz atual para a matriz que vc selecionar\n");
        printf(">> mostrarmatrizatual: mostra qual é a matriz atual na tela\n");
        return 1;
    }else if(!strcmp(input, "sair")){
        printf("TCHAU! :)\n");
        return 0;
    }else if(!strcmp(input, "gerarmatriz")){
        return 2;
    }else if(!strcmp(input, "mostrarmatrizatual")){
        return 3;
    }else{
        printf("Comando não identificado :(\n");
        printf("Use \'ajuda\' para receber ajuda ;)\n");
        return -1;
    }
}

Matriz2x2 gerar_matriz(){
    Matriz2x2 retorno;
    printf("Digite os valores da matriz na forma:\n");
    printf("valor (tab) valor\n");
    printf("valor (tab) valor\n");

    scanf("%lf %lf", &retorno.valores[0][0], &retorno.valores[0][1]);
    scanf("%lf %lf", &retorno.valores[1][0], &retorno.valores[1][1]);

    return retorno;
}