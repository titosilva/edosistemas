#include "sistemalinear.h"
#include <stdio.h>

int solucionarSistema2x2(Matriz2x2 mat){
    Complexo a1, a2;
    a1 = autovalor2x2_1(mat);
    a2 = autovalor2x2_2(mat);

    if(a1.imaginario==0 && a2.imaginario==0){
        if(a1.real==a2.real){
            if(mat.valores[1][0]==0 && mat.valores[0][1]==0){
                printf("Sistema do tipo z'(t) = Az(t)\n");
                printf("Autovalores iguais e matriz A=kI com k sendo uma constante real\n");
                printf("\nSoluções:\n");
                printf("z(t)=(k1 e^(%lft), k2 e^(%lft))", mat.valores[0][0], mat.valores[0][0]);
                printf("Onde k1 e k2 são números reais tais que z(0)=(k1,k2)\n");
            }else{
                printf("Sistema do tipo z'(t) = Az(t)\n");
                printf("Autovalores iguais e dim Nuc(A-aI) = 1, com a sendo autovalor de A\n");
                printf("\nSoluções:\n");
                printf("z(t)=e^(%lft)*(u1+(k1t+k2)v1, u2+(k1t+k2)v2))\n");
                printf("Onde v=(v1,v2) é autovetor da matriz A e u=(u1,u2) é tal que v=(A-aI)u\n");
                printf("k1 e k2 são constantes que dependem das condições iniciais\n");
                printf("Assim, v=(c1, %lf*c1) e u=(c2, (c1-c2(%lf))/%lf)", (a1.real-mat.valores[0][0])/mat.valores[0][1],
                       );
            }
        }else{
            printf("Sistema do tipo z'(t) = Az(t)\n");
            printf("Autovalores reais e diferentes\n");
            printf("\nSoluções:\n");
            printf("z(t)=(u1 e^(%lft) + v1 e^(%lft), u2 e^(%lft) + v2 e^(%lft))\n",a1.real,a2.real,a1.real, a2.real);
            printf("Onde u=(u1,u2) e v=(v1,v2) são autovetores associados aos autovalores da matriz\n");
            printf("Temos, portanto, u2=%lf*u1 e v2=%lf*v1\n", (a1.real-mat.valores[0][0])/mat.valores[0][1], (a2.real-mat.valores[0][0])/mat.valores[0][1]);
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