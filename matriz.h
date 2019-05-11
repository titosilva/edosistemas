// Aqui, fazemos declarações a serem utilizadas com as matrizes
#ifndef MATRIZ_C2_CELIUSMITO_H
#define MATRIZ_C2_CELIUSMITO_H

typedef struct str_complexo{
    // Partes real e imaginaria do numero complexo
    double real;
    double imaginario;
} Complexo;


typedef struct str_matriz2{
    double valores[2][2];
} Matriz2x2;

// Gera uma matriz 2x2, solicitando valores ao usuario
Matriz2x2 gerar_matriz2x2();
// Calcula determinante de matriz 2x2
double determinante2x2(Matriz2x2 mat);
// Calcula traço de matriz 2x2
double traco2x2(Matriz2x2 mat);
// Calcula primeiro autovalor de matriz 2x2
Complexo autovalor2x2_1(Matriz2x2 mat);
// Calcula segundo autovalor de matriz 2x2
Complexo autovalor2x2_2(Matriz2x2 mat);

#endif
