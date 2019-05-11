#include "sistemalinear.h"
#include <stdio.h>

int solucionarSistema2x2(Matriz2x2 mat){
    Complexo a1, a2;
    a1 = autovalor2x2_1(mat);
    a2 = autovalor2x2_2(mat);

    if(a1.imaginario==0 && a2.imaginario==0){

    }else{
        printf("Sistema do tipo z'(t) = Az(t)\n");
        printf("Autovalores complexos! %lf+i(%lf) e %lf+i(%lf)\n", a1.real, a1.imaginario, a2.real, a2.imaginario);
        printf("Soluções:\n");
        printf("z(t) = (e^%lft)( cos(%lft)u - sen(%lft)w ) + (e^%lft)( cos(%lft)w + sen(%lft)u )\n", 
               a1.real, a1.imaginario, a1.imaginario, a1.real, a1.imaginario, a1.imaginario);
        printf("Onde w = (0, k*%lf) e u=(k, k*%lf)\n", a1.imaginario/mat.valores[0][1],
                                                    (a1.real-mat.valores[0][0])/mat.valores[0][1] );
        printf("Com k sendo uma constante que depende dos valores iniciais\n");
        return -1;
    }
}