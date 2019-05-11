// Aqui, implementaremos as funções de matriz.h
#include "matriz.h"
#include <math.h>
#include <stdio.h>          

Matriz2x2 gerar_matriz2x2(){
    Matriz2x2 retorno;
    printf("Digite os valores da matriz na forma:\n");
    printf("valor (tab) valor\n");
    printf("valor (tab) valor\n");

    scanf("%lf %lf", &retorno.valores[0][0], &retorno.valores[0][1]);
    scanf("%lf %lf", &retorno.valores[1][0], &retorno.valores[1][1]);

    return retorno;
}

// Calcula determinante de matriz 2x2
double determinante2x2(Matriz2x2 mat){
    return mat.valores[0][0]*mat.valores[1][1] - mat.valores[0][1]*mat.valores[1][0];
}

double traco2x2(Matriz2x2 mat){
    return mat.valores[0][0] + mat.valores[1][1];
}

// Calcula primeiro autovalor de matriz 2x2
Complexo autovalor2x2_1(Matriz2x2 mat){
    Complexo retorno;
    double tr = traco2x2(mat);
    double det = determinante2x2(mat);
    double delta = tr*tr - 4*det;

    if(delta>=0){
        retorno.imaginario = 0;
        retorno.real = (tr + sqrt(delta)/2);
        return retorno;
    }else{
        retorno.imaginario = sqrt(fabs(delta))/2;
        retorno.real = tr/2;
        return retorno;
    }
}
// Calcula segundo autovalor de matriz 2x2
Complexo autovalor2x2_2(Matriz2x2 mat){
    Complexo retorno;
    double tr = traco2x2(mat);
    double det = determinante2x2(mat);
    double delta = tr*tr - 4*det;

    if(delta>=0){
        retorno.imaginario = 0;
        retorno.real = (tr - sqrt(delta)/2);
        return retorno;
    }else{
        retorno.imaginario = -sqrt(fabs(delta))/2;
        retorno.real = tr/2;
        return retorno;
    }
}
