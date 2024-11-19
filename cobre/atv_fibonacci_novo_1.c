//faça um programa que imprima a sequencia de fibonacci até o enesimo termo
#include <stdio.h>
int main(){
    long cont,acu,aux,termo_velho,termo_novo,enesimo;
    aux=termo_velho=acu=0;
    termo_novo=1;
    printf("digite o n-esimo termo da sequencia de fibonacci\n");
    scanf("%ld",&enesimo);
    for(cont=0;cont<enesimo;cont++){
        aux=termo_novo;
        termo_novo+=termo_velho;
        termo_velho=aux;
        printf("%ld",termo_velho);
    }
    return 0;
}