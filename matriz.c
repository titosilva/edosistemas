// Aqui, implementaremos as funções de matriz.h
#include "matriz.h"

// Calcula determinante de matriz 2x2
double determinante2x2(Matriz2x2 mat){
    return mat.valores[0][0]*mat.valores[1][1] - mat.valores[0][1]*mat.valores[1][0];
}

double traco2x2(Matriz2x2 mat){
    return mat.valores[0][0] + mat.valores[1][1];
}

// Calcula primeiro autovalor de matriz 2x2
Complexo autovalor2x2_1(Matriz2x2 mat);
// Calcula segundo autovalor de matriz 2x2
Complexo autovalor2x2_2(Matriz2x2 mat);
