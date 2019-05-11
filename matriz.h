// Aqui, fazemos declarações a serem utilizadas com as matrizes
#ifndef MATRIZ_C2_CELIUSMITO_H
#define MATRIZ_C2_CELIUSMITO_H

typedef struct str_matriz{
    int valores[2][2];
} Matriz2x2;

// Calcula determinante de matriz 2x2
int determinante2x2(Matriz2x2 mat);
// Calcula primeiro autovalor de matriz 2x2
int autovalor2x2_1(Matriz2x2 mat);
// Calcula segundo autovalor de matriz 2x2
int autovalor2x2_2(Matriz2x2 mat);

#endif
