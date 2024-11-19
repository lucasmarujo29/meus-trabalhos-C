#include <stdio.h>
/*
valor máximo 10.000
unsigned int digitos(unsigned int n){
    unsigned int n_digitos;
    while(n>0){
        n/=10;
        n_digitos++;
    }
    return n_digitos;
}
*/

/*
função inverter passos:
1. ler número
2. descobrir o número de digitos desse número
2.1 a cada loop, soma um numa contadora e divide por dez o número
*/
unsigned int invert(unsigned int n){
    unsigned int pot10,invertido,n_digitos,aux;
    aux=n;
    n_digitos=1;
    invertido=0;
    while(aux>0){
        aux/=10;
        n_digitos++;
    }
    pot10=10*n_digitos;
    while(n>0){
        invertido+=((n%10)*(pot10));
        n/=10;
        pot10/=10;
    }
    return invertido;//n está invertido    
}
int main(){
    unsigned int n,aux,cont;
    n=aux=cont=0;
    printf("digite um numero\n");
    scanf("%u",&n);
    printf("%u",invert(n));


//como verificar se um número é palíndromo:
//ver se o inverso dele é igual a ele mesmo
//se x = xinverso -> é palíndromo


return 0;
}
