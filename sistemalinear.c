#include "sistemalinear.h"
#include <stdio.h>

int solucionarSistema2x2(Matriz2x2 mat){
    Complexo a1, a2;
    a1 = autovalor2x2_1(mat);
    a2 = autovalor2x2_2(mat);

    if(a1.imaginario==0 && a2.imaginario==0){
        if(a1.real==a2.real){

        }

    }else{
        printf("Sistema do tipo z'(t) = Az(t)\n");
        printf("Autovalores complexos! %lf+i(%lf) e %lf+i(%lf)\n", a1.real, a1.imaginario, a2.real, a2.imaginario);
        printf("\nSoluções:\n");
        printf("z1(t) = (e^%lft)( cos(%lft)u - sen(%lft)w )\n", a1.real, a1.imaginario, a1.imaginario);
        printf("z2(t) = (e^%lft)( cos(%lft)w + sen(%lft)u )\n", a1.real, a1.imaginario, a1.imaginario);
        printf("Onde u e w são, respectivamente, a parte real e a parte imaginaria do autovetor associado a um dos\
                autovalores\n");
        printf("Tomando o autovalor de parte imaginaria positiva, temos:\n");
        printf("u=(k,%lf*k)\nw=(0,%lf*k)\n", (a1.real-mat.valores[0][0])/mat.valores[0][1], (a1.imaginario)/mat.valores[0][1]);
        printf("Para algum k real, que pode ser determinado por meio das condições iniciais do sistema\n");
        return -1;
    }
}