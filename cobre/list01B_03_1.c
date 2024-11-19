//análise da sequência:
//expoente máximo = número de termos
//para um expoente par = +
//para um expoente impar = -
//para o denominador: fatorial alternado de 1 2 3 2|1 2 3 2|... -> grupos de quatro dígitos

#include <stdio.h>





int alt_numerador(int enesimo){
    //enesimo é o número do termo
    if(enesimo%2==0){
        enesimo=-1;
    }else{
        enesimo=1;
    }
    return enesimo;
}


int alt_denominador(int enesimo){
    //enesimo é o número do termo
    switch (enesimo%4){
    case 1:
        enesimo=1;
        break;
    case 2:
        enesimo=2;
        break;
    case 3:
        enesimo=6;
        break;
    case 0:
        enesimo=2;
        break;
    default:
        break;
    }
    return enesimo;
}


int main(){
    int enesimo;
    double x,n;
    double serie=0;
    printf("digite um valor para X e outro para N\n");
    scanf("%lf %lf",&x,&n);
    double aux=x;
    x=x*x;
    for(enesimo=1;enesimo<n;enesimo++){
        serie+=((alt_numerador(enesimo))*x)/(alt_denominador(enesimo));
        x*=aux;
    }
    printf("a expressao eh igual a %lf\n",serie);
    printf("o ultimo valor de x eh %lf\n",x);
    printf("o ultimo valor de enesimo eh %d\n",enesimo);
return 0;
}
//int x,n,serie,alt_denominador,alt_numerador,cont;
//serie = serie +(alternador(-1,+1)*(x^cont))/(alternador(1,2,6,2))