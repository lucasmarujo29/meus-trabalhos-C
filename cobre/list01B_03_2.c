//análise da sequência:
//expoente máximo = número de termos
//para um expoente par = +
//para um expoente impar = -
//para o denominador: fatorial alternado de |1 2 3 2|1 2 3 2|... -> grupos de quatro dígitos
#include <stdio.h>
int alt_denominador(int enesimo){
    //enesimo é o número do termo
    switch (enesimo%4){
    case 1:
        return enesimo=1;
    case 2:
        return enesimo=2;
    case 3:
        return enesimo=6;
    case 0:
        return enesimo=2;
    default:
        return 1;
    }
}
int main(){
    int enesimo,alt_numerador;
    double x,n;
    double serie=0;
    printf("digite um valor para X e outro para N\n");
    scanf("%lf %lf",&x,&n);
    double aux=x*x;
    alt_numerador=-1;
    for(enesimo=1;enesimo<=n;enesimo++){
        serie+=(alt_numerador*aux)/(alt_denominador(enesimo));
        aux*=x;
        alt_numerador*=-1;
    }
    printf("a expressao eh igual a %lf\n",serie);
return 0;
}
//int x,n,serie,alt_denominador,alt_numerador,cont;
//serie = serie +(alternador(-1,+1)*(x^cont))/(alternador(1,2,6,2))