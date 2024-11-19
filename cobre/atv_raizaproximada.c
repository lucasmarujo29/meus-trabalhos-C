/*
Escreva uma função em C para computar a raiz quadrada de um número positivo.
Use a ideia abaixo, baseada no método de aproximações sucessivas de Newton. A
função deverá retornar o valor da vigésima aproximação.
*/


#include <stdio.h>
double raiz_quadrada(double Y){
    double xn =Y/2.0;
    for (int i=0;i<20;i++){
        xn=(xn+Y/xn)/2.0;
    }
    return xn;
}
int main() {
    double Y;
    printf("Digite um numero positivo\n");
    scanf("%lf",&Y);
    if (Y<0) {
        printf("o numero deve ser positivo\n");
        return 1;
    }
    double resultado=raiz_quadrada(Y);
    printf("a raiz quadrada aproximada de %.2f eh %.5f\n",Y,resultado);
    return 0;
}
